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

[[doc: nlp::NLPDocument::from_xml]]
[[doc: nlp::NLPDocument::from_xml_file]]
[[doc: nlp::NLPDocument::sentences]]

### NLPSentence

[[doc: NLPSentence]]

[[doc: nlp::NLPSentence::tokens]]

### NLPToken

[[doc: NLPToken]]

[[doc: nlp::NLPToken::word]]
[[doc: nlp::NLPToken::lemma]]
[[doc: nlp::NLPToken::pos]]

### NLP Processor

[[doc: NLPProcessor]]

[[doc: nlp::NLPProcessor::java_cp]]

[[doc: nlp::NLPProcessor::process]]
[[doc: nlp::NLPProcessor::process_file]]
[[doc: nlp::NLPProcessor::process_files]]

## Vector Space Model

[[doc: NLPVector]]

[[doc: vector]]

[[doc: nlp::NLPVector::cosine_similarity]]

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
