define(function(require, exports, module) {
"use strict";

var oop = require("../lib/oop");
var DocCommentHighlightRules = require("./doc_comment_highlight_rules").DocCommentHighlightRules;
var TextHighlightRules = require("./text_highlight_rules").TextHighlightRules;

var NitHighlightRules = function() {

    var keywords = (
		"package|module|import|class|abstract|interface|universal|enum|end|fun|" +
		"type|init|redef|is|do|readable|writable|var|intern|extern|protected|private|" +
		"intrude|if|then|else|while|loop|for|in|and|or|not|implies|return|continue|" +
		"break|abort|assert|new|isa|once|super|self|true|false|null|as|nullable|isset|label|__debug__"
    );

    var keywordMapper = this.createKeywordMapper({
        "keyword": keywords,
        "variable.language": "self",
        "constant.language": "null|true|false"
    }, "identifier");

    // regexp must not have capturing parentheses. Use (?:) instead.
    // regexps are ordered -> the first match is used
   this.$rules = {
        "start" : [
            {
			token : "comment",
			regex : "#.*$"
            },
            {
			token : "support.class",
			regex : /[A-Z]{1}[a-z]+/
            },
            DocCommentHighlightRules.getStartRule("doc-start"),
            {
                token : "string.regexp",
                regex : "[/](?:(?:\\[(?:\\\\]|[^\\]])+\\])|(?:\\\\/|[^\\]/]))*[/]\\w*\\s*(?=[).,;]|$)"
            }, {
                token : "string", // character
                regex : /'(?:.|\\(:?u[\da-fA-F]+|x[\da-fA-F]+|[tbrf'"n]))'/
            }, {
                token : "string", start : '"', end : '"|$', next: [
                    {token: "constant.language.escape", regex: /\\(:?u[\da-fA-F]+|x[\da-fA-F]+|[tbrf'"n])/},
                    {token: "invalid", regex: /\\./}
                ]
            }, {
                token : "string", start : '@"', end : '"', next:[
                    {token: "constant.language.escape", regex: '""'}
                ]
            }, {
			token : "constant.numeric", // hex
			regex : "0[xX][0-9a-fA-F]+\\b"
            }, {
			token : "constant.numeric", // float
			regex : "[+-]?\\d+(?:(?:\\.\\d*)?(?:[eE][+-]?\\d+)?)?\\b"
            }, {
			token : "constant.language.boolean",
			regex : "(?:true|false)\\b"
            }, {
			token : keywordMapper,
			regex : "[a-zA-Z_$][a-zA-Z0-9_$]*\\b"
            }, {
			token : "keyword.operator",
			regex : "@|!|\\$|%|&|\\*|\\-\\-|\\-|\\+\\+|\\+|~|===|==|=|!=|!==|<=|>=|<<=|>>=|>>>=|<>|<|>|!|&&|\\|\\||\\?\\:|\\::|\\*=|%=|\\+=|\\-=|&=|\\^=|\\b(?:in|instanceof|new|delete|typeof|void)"
            }, {
			token : "keyword",
			regex : "^\\s*#(if|else|elif|endif|define|undef|warning|error|line|region|endregion|pragma)"
            }, {
			token : "punctuation.operator",
			regex : "\\?|\\:|\\,|\\;|\\."
            }, {
			token : "paren.lparen",
			regex : "[[({]"
            }, {
			token : "paren.rparen",
			regex : "[\\])}]"
            }, {
			token : "text",
			regex : "\\s+"
            }
        ]
    };
	this.embedRules(DocCommentHighlightRules, "doc-",
	[ DocCommentHighlightRules.getEndRule("start") ]);
	this.normalizeRules();
};

oop.inherits(NitHighlightRules, TextHighlightRules);

exports.NitHighlightRules = NitHighlightRules;

});
