# Nit wrapper for Stanford CoreNLP

Stanford CoreNLP provides a set of natural language analysis tools which can take
raw text input and give the base forms of words, their parts of speech, whether
they are names of companies, people, etc., normalize dates, times, and numeric
quantities, and mark up the structure of sentences in terms of phrases and word
dependencies, indicate which noun phrases refer to the same entities, indicate
sentiment, etc.

This wrapper needs the Stanford CoreNLP jars that run on Java 1.8+.

See http://nlp.stanford.edu/software/corenlp.shtml.

## Usage

~~~nitish
var proc = new NLPProcessor("path/to/StanfordCoreNLP/jars")

var doc = proc.process("String to analyze")

for sentence in doc.sentences do
	for token in sentence.tokens do
		print "{token.lemma}: {token.pos}"
	end
end
~~~

## Nit API

For ease of use, this wrapper introduce a Nit model to handle CoreNLP XML results.

### NLPDocument

[[doc: NLPDocument]]

[[doc: NLPDocument::from_xml]]
[[doc: NLPDocument::from_xml_file]]
[[doc: NLPDocument::sentences]]

### NLPSentence

[[doc: NLPSentence]]

[[doc: NLPSentence::tokens]]

### NLPToken

[[doc: NLPToken]]

[[doc: NLPToken::word]]
[[doc: NLPToken::lemma]]
[[doc: NLPToken::pos]]

### NLP Processor

[[doc: NLPProcessor]]

[[doc: NLPProcessor::java_cp]]

[[doc: NLPProcessor::process]]
[[doc: NLPProcessor::process_file]]
[[doc: NLPProcessor::process_files]]

## Vector Space Model

[[doc: NLPVector]]

[[doc: NLPDocument::vector]]

[[doc: NLPVector::cosine_similarity]]

## NitNLP binary

The `nitnlp` binary is given as an example of NitNLP client.
It compares two strings and display ther cosine similarity value.

Usage:

~~~raw
nitnlp --cp "/path/to/jars" "sort" "Sorting array data"
0.577
~~~

## TODO

* Use JWrapper
* Use options to choose CoreNLP analyzers
* Analyze sentences dependencies
* Analyze sentiment
