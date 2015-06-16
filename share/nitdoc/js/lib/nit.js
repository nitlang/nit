/* This file is part of NIT ( http://www.nitlanguage.org ).

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

   Documentation generator for the nit language.
   Generate API documentation in HTML format from nit source code.
*/

hljs.registerLanguage('nit', function(hljs) {
	var METHOD_RE = '[a-z_]\\w*[!?=]?|[-+~]\\@|<<|>>|=~|===?|<=>|[<>]=?|\\*\\*|[-/+%^&*~`|]|\\[\\]=?';
	var KEYWORDS = {
		keyword: 'abort abstract and as assert break class continue do else end enum extern for fun ' +
		'if import in init interface intern intrude is isa isset label loop module new nullable not ' +
		'once or protected private redef return self super then type universal var ' +
		'when while writable',
		literal: "true false null"
	};
	var COMMENT = {
		className: 'comment',
		begin: '#', end: '$',
	};
	var SUBST = {
		className: 'subst',
		begin: '{', end: '}',
		keywords: KEYWORDS
	};
	var STRING = {
		className: 'string',
		contains: [hljs.BACKSLASH_ESCAPE, SUBST],
		variants: [
			{begin: /"/, end: /"/},
		]
	};
	var CHAR = {
		className: 'char',
		contains: [hljs.BACKSLASH_ESCAPE, SUBST],
		begin: /'/, end: /'/,
	};
	var TYPE = {
		className: 'type',
		begin: '[A-Z]\\w*'
	}
	var PARAMS = {
		className: 'params',
		begin: '\\(', end: '\\)',
		keywords: KEYWORDS,
		contains: [TYPE]
	};
	var RET_TYPE = {
		className: 'rettype',
		begin: ':', end: '$|do|is|=',
		keywords: 'nullable',
		returnEnd: true,
		contains: [TYPE]
	}
	var DO_BLOCK = {
		className: 'block',
		begin: 'do', end: '$|end',
		keywords: KEYWORDS
	}
	var IS_BLOCK = {
		className: 'modifiers',
		begin: 'is', end: '$',
		keywords: KEYWORDS
	}
	var CONTAINS = [
		STRING,
		CHAR,
		COMMENT,
		TYPE,
		{
			className: 'module',
			beginKeywords: 'module', end: '$',
			contains: [
				hljs.inherit(hljs.TITLE_MODE, {begin: '[a-z_]\\w*'}),
				COMMENT
			]
		},
		{
			className: 'import',
			begin: '(intrude )?import', end: '$',
			keywords: 'intrude import',
			contains: [
				{
					className: 'module',
					begin: '[a-z_]\\w*'
				},
				COMMENT
			]
		},
		{
			className: 'class',
			begin: '(redef |private |protected )?(abstract )?(class|interface)', end: '$',
			keywords: 'redef private protected abstract class interface',
			contains: [
				hljs.inherit(hljs.TITLE_MODE, {begin: '[A-Z]\\w*'}),
				{
					className: 'super',
					begin: '\\bsuper', end: '$',
					keywords: 'super',
					contains: [TYPE]
				},
				COMMENT
			]
		},
		{
			className: 'fun',
			begin: '(redef |private |protected )?(fun|init|type)\\b', end: '$',
			keywords: KEYWORDS,
			contains: [
				PARAMS,
				RET_TYPE,
				DO_BLOCK,
				IS_BLOCK,
				{
					className: 'title',
					begin: '\\b[a-zA-Z_][a-zA-Z_]*\\b'
				},
				COMMENT
			]
		},
		{
			className: 'number',
			begin: '(\\b0[0-7_]+)|(\\b0x[0-9a-fA-F_]+)|(\\b[1-9][0-9_]*(\\.[0-9_]+)?)|[0_]\\b',
			relevance: 0
		}
	];
	SUBST.contains = CONTAINS;

	return {
		keywords: KEYWORDS,
		contains: CONTAINS
	};
});
