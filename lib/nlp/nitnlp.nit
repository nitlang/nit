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
# This tool provides a document comparison service from command line based on
# StanfordNLP and NLPVector consine similarity.
#
# See http://nlp.stanford.edu/software/corenlp.shtml.
module nitnlp

import opts
import nlp

# Option management
var opt_java_cp = new OptionString("Java classpath for StanfordNLP jars", "--cp")
var options = new OptionContext
options.add_option(opt_java_cp)
options.parse(args)
var arguments = options.rest

# Processor initialization
var java_cp = opt_java_cp.value
if java_cp == null then java_cp = "*"
var proc = new NLPJavaProcessor(java_cp)

if arguments.length != 2 then
	print "Usage: nitnlp text1 text2\n"
	options.usage
	sys.exit 1
end

var doc1 = proc.process(arguments.first)
print doc1.vector.join(":", ",")
var doc2 = proc.process(arguments.last)
print doc2.vector.join(":", ",")

print doc1.vector.cosine_similarity(doc2.vector)
