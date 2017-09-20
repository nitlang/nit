# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Natural Language Processor based on the StanfordNLP core.
#
# See http://nlp.stanford.edu/software/corenlp.shtml.
module stanford

import opts
import dom

# Natural Language Processor
#
# NLPProcessor provides natural language processing for input text and files.
# Analyzed documents can be manipulated through the resulting NLPDocument.
interface NLPProcessor

	# Creates a new NLPDocument from a string
	fun process(string: String): NLPDocument is abstract

	# Creates a new NLPDocument from a file content
	fun process_file(path: String): NLPDocument do
		var content = path.to_path.read_all
		return process(content)
	end

	# Creates a new NLPDocument from a list of files (batch mode)
	#
	# Returns a map of file path associated with their NLPDocument.
	fun process_files(paths: Array[String]): Map[String, NLPDocument] do
		var res = new HashMap[String, NLPDocument]
		for file in paths do
			res[file] = process_file(file)
		end
		return res
	end
end

# Wrapper around StanfordNLP jar.
#
# FIXME this should use the Java FFI.
class NLPJavaProcessor
	super NLPProcessor

	# Classpath to give to Java when loading the StanfordNLP jars.
	var java_cp: String

	# Temp dir used to store batch results
	var tmp_dir = ".nlp"

	# Process a string and return a new NLPDocument from this.
	redef fun process(string) do
		var tmp_file = ".nlp.in"
		var file = new FileWriter.open(tmp_file)
		file.write string
		file.close
		var doc = process_file(tmp_file)
		tmp_file.file_delete
		return doc
	end

	# Process the `input` file and return a new NLPDocument from this.
	redef fun process_file(input) do
		# TODO opt annotators
		var tmp_file = "{input.basename}.xml"
		sys.system "java -cp \"{java_cp}\" -Xmx2g edu.stanford.nlp.pipeline.StanfordCoreNLP -annotators tokenize,ssplit,pos,lemma -outputFormat xml -file {input}"
		var doc = new NLPDocument.from_xml_file(tmp_file)
		tmp_file.file_delete
		return doc
	end

	# Batch mode.
	#
	# Returns a map of file path associated with their NLPDocument.
	redef fun process_files(inputs) do
		# Prepare the input file list
		var input_file = "inputs.list"
		var fw = new FileWriter.open(input_file)
		for input in inputs do fw.write "{input}\n"
		fw.close

		# Run Stanford NLP jar
		sys.system "java -cp \"{java_cp}\" -Xmx2g edu.stanford.nlp.pipeline.StanfordCoreNLP -annotators tokenize,ssplit,pos,lemma -outputFormat xml -filelist {input_file} -outputDirectory {tmp_dir}"
		# Parse output
		var map = new HashMap[String, NLPDocument]
		for input in inputs do
			var out_file = tmp_dir / "{input.basename}.xml"
			map[input] = new NLPDocument.from_xml_file(out_file)
		end
		input_file.file_delete
		tmp_dir.rmdir
		return map
	end
end

# A `Document` represent a text input given to the NLP processor.
#
# Once processed, it contains a list of sentences that contain tokens.
class NLPDocument

	#  NLPSentences contained in `self`
	var sentences = new Array[NLPSentence]

	# Init `self` from an xml element.
	#
	# ~~~
	# var xml = """
	# <root>
	#   <document>
	#     <sentences>
	#       <sentence id="1">
	#         <tokens>
	#           <token id="1">
	#             <word>Stanford</word>
	#             <lemma>Stanford</lemma>
	#             <CharacterOffsetBegin>0</CharacterOffsetBegin>
	#             <CharacterOffsetEnd>8</CharacterOffsetEnd>
	#             <POS>NNP</POS>
	#           </token>
	#           <token id="2">
	#             <word>University</word>
	#             <lemma>University</lemma>
	#             <CharacterOffsetBegin>9</CharacterOffsetBegin>
	#             <CharacterOffsetEnd>19</CharacterOffsetEnd>
	#             <POS>NNP</POS>
	#           </token>
	#         </tokens>
	#       </sentence>
	#       <sentence id="2">
	#         <tokens>
	#           <token id="1">
	#             <word>UQAM</word>
	#             <lemma>UQAM</lemma>
	#             <CharacterOffsetBegin>0</CharacterOffsetBegin>
	#             <CharacterOffsetEnd>4</CharacterOffsetEnd>
	#             <POS>NNP</POS>
	#           </token>
	#           <token id="2">
	#             <word>University</word>
	#             <lemma>University</lemma>
	#             <CharacterOffsetBegin>5</CharacterOffsetBegin>
	#             <CharacterOffsetEnd>15</CharacterOffsetEnd>
	#             <POS>NNP</POS>
	#           </token>
	#         </tokens>
	#       </sentence>
	#     </sentences>
	#   </document>
	# </root>""".to_xml.as(XMLDocument)
	#
	# var document = new NLPDocument.from_xml(xml)
	# assert document.sentences.length == 2
	# assert document.sentences.first.tokens.first.word == "Stanford"
	# assert document.sentences.last.tokens.first.word == "UQAM"
	# ~~~
	init from_xml(xml: XMLDocument) do
		for obj in xml["root"].first["document"].first["sentences"].first["sentence"] do
			if obj isa XMLStartTag then
				sentences.add new NLPSentence.from_xml(obj)
			else
				print "Warning: malformed xml, `sentences` is supposed to contain `sencence` tags"
			end
		end
	end

	# Init `self` from a XML file.
	init from_xml_file(path: String) do
		var file = new FileReader.open(path)
		var xml = file.read_lines
		file.close
		xml.shift # remove xml doctype
		xml.shift # remove xslt link
		from_xml(xml.join("\n").to_xml.as(XMLDocument))
	end
end

# Represent one sentence in a `Document`.
class NLPSentence

	# Index of this sentence in the input text.
	var index: Int

	#  NLPTokens contained in `self`.
	var tokens = new Array[NLPToken]

	# Init `self` from an XML element.
	#
	# ~~~
	# var xml = """
	# <sentence id="1">
	#   <tokens>
	#     <token id="1">
	#       <word>Stanford</word>
	#       <lemma>Stanford</lemma>
	#       <CharacterOffsetBegin>0</CharacterOffsetBegin>
	#       <CharacterOffsetEnd>8</CharacterOffsetEnd>
	#       <POS>NNP</POS>
	#     </token>
	#     <token id="2">
	#       <word>University</word>
	#       <lemma>University</lemma>
	#       <CharacterOffsetBegin>9</CharacterOffsetBegin>
	#       <CharacterOffsetEnd>19</CharacterOffsetEnd>
	#       <POS>NNP</POS>
	#     </token>
	#   </tokens>
	# </sentence>""".to_xml["sentence"].first.as(XMLStartTag)
	#
	# var sentence = new  NLPSentence.from_xml(xml)
	# assert sentence.index == 1
	# assert sentence.tokens.length == 2
	# ~~~
	init from_xml(xml: XMLStartTag) do
		var index = xml.attributes.first.as(XMLStringAttr).value.to_i
		for obj in xml["tokens"].first["token"] do
			if obj isa XMLStartTag then
				tokens.add new NLPToken.from_xml(obj)
			else
				print "Warning: malformed xml, `tokens` is supposed to contain `token` tags"
			end
		end
		init(index)
	end
end

# Represent one word (or puncutation mark) in a `NLPSentence`.
class NLPToken

	# Index of this word in the sentence.
	var index: Int

	# Original word
	var word: String

	# `word` lemma
	var lemma: String

	# Position of the first character in the input
	var begin_offset: Int

	# Position of the last character in the input
	var end_offset: Int

	# Part Of Speech tag
	var pos: String

	# Init `self` from an XML element.
	#
	# ~~~
	# var xml = """
	#  <token id="2">
	#	<word>University</word>
	#	<lemma>University</lemma>
	#	<CharacterOffsetBegin>9</CharacterOffsetBegin>
	#	<CharacterOffsetEnd>19</CharacterOffsetEnd>
	#	<POS>NNP</POS>
	#  </token>""".to_xml["token"].first.as(XMLStartTag)
	#
	# var token = new  NLPToken.from_xml(xml)
	# assert token.index == 2
	# assert token.word == "University"
	# assert token.lemma == "University"
	# assert token.begin_offset == 9
	# assert token.end_offset == 19
	# assert token.pos == "NNP"
	# ~~~
	init from_xml(xml: XMLStartTag) do
		var index = xml.attributes.first.as(XMLStringAttr).value.to_i
		var word = xml["word"].first.as(XMLStartTag).data
		var lemma = xml["lemma"].first.as(XMLStartTag).data
		var begin_offset = xml["CharacterOffsetBegin"].first.as(XMLStartTag).data.to_i
		var end_offset = xml["CharacterOffsetEnd"].first.as(XMLStartTag).data.to_i
		var pos = xml["POS"].first.as(XMLStartTag).data
		init(index, word, lemma, begin_offset, end_offset, pos)
	end
end
