/* This file is part of NIT ( http://www.nitlanguage.org ).

 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at

 * http://www.apache.org/licenses/LICENSE-2.0

 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Nit Brush for SyntaxHighlighter
 * see http://alexgorbatchev.com/SyntaxHighlighter
 */

;(function()
{
	// CommonJS
	typeof(require) != 'undefined' ? SyntaxHighlighter = require('shCore').SyntaxHighlighter : null;

	function Brush()
	{
		var keywords =	'abort abstract and as assert break class continue do else end catch enum extern false for fun' +
						'if import in init interface intrude is isa isset label loop module new null nullable not' +
						'once or protected private redef return self super then type true universal var' +
						'when while writable';
		var builtins =	'exit sys args get_time getc getcwd gets print printn';

		this.regexList = [
			{ regex: SyntaxHighlighter.regexLib.singleLinePerlComments,	css: 'comments' },	// one line comments
			{ regex: SyntaxHighlighter.regexLib.doubleQuotedString,		css: 'string' },	// double quoted strings
			{ regex: SyntaxHighlighter.regexLib.singleQuotedString,		css: 'string' },	// single quoted strings
			{ regex: /\b[A-Z0-9_]+\b/g,									css: 'constants' },	// types
			{ regex: /[A-Z][A-Za-z0-9_]*/g,								css: 'color2' },	// classes
			{ regex: new RegExp(this.getKeywords(keywords), 'gm'),		css: 'keyword' },	// keywords
			{ regex: new RegExp(this.getKeywords(builtins), 'gm'),		css: 'color3' }		// builtins
		];
		this.forHtmlScript(SyntaxHighlighter.regexLib.aspScriptTags);
	};

	Brush.prototype	= new SyntaxHighlighter.Highlighter();
	Brush.aliases	= ['nit'];

	SyntaxHighlighter.brushes.Nit = Brush;

	// CommonJS
	typeof(exports) != 'undefined' ? exports.Brush = Brush : null;
})();

