define(function(require, exports, module) {
"use strict";

var oop = require("../lib/oop");
// defines the parent mode
var TextMode = require("./text").Mode;
var Tokenizer = require("../tokenizer").Tokenizer;
var MatchingBraceOutdent = require("./matching_brace_outdent").MatchingBraceOutdent;
var CstyleBehaviour = require("./behaviour/cstyle").CstyleBehaviour;

// defines the language specific highlighters and folding rules
var NitHighlightRules = require("./nit_highlight_rules").NitHighlightRules;
//var NitFoldMode = require("./folding/nit").NitFoldMode;

var Mode = function() {
    // set everything up
    this.HighlightRules = NitHighlightRules;
    this.$outdent = new MatchingBraceOutdent();
    this.$behaviour = new CstyleBehaviour();
    //this.foldingRules = new NitFoldMode();
};
oop.inherits(Mode, TextMode);

(function() {
    // configure comment start/end characters
    this.lineCommentStart = "#";
    //this.blockComment = {start: "/*", end: "*/"};
    
    // special logic for indent/outdent. 
    // By default ace keeps indentation of previous line
    this.getNextLineIndent = function(state, line, tab) {
        var indent = this.$getIndent(line);
        
        var tokenizedLine = this.getTokenizer().getLineTokens(line, state);
        var tokens = tokenizedLine.tokens;
  
        if (tokens.length && tokens[tokens.length-1].type == "comment") {
            return indent;
        }
    
        if (state == "start") {
            //var match = line.match(/^.*[\{\(\[]\s*$/);
            var match = line.match(/(^class| class | if | else | else|do$)/);
            if (match) {
                indent += tab + tab;
            }
        }
        return indent;
    };
    this.checkOutdent = function(state, line, input) {
        return this.$outdent.checkOutdent(line, input);
    };
    this.autoOutdent = function(state, doc, row) {
        this.$outdent.autoOutdent(doc, row);
    };
    
    // create worker for live syntax checking
    this.createWorker = function(session) {
        /*var worker = new WorkerClient(["ace"], "ace/mode/nit_worker", "NitWorker");
        worker.attachToDocument(session.getDocument());
        worker.on("errors", function(e) {
            session.setAnnotations(e.data);
        });
        return worker;*/
	return null;
    };
    
	this.$id = "ace/mode/nit";
}).call(Mode.prototype);

exports.Mode = Mode;
}); 
