" Vim syntax file
" Language:	Nit
" Maintainer:	Jean Privat <jean@pryen.org>

" This file is part of NIT ( http://www.nitlanguage.org ).
"
" Copyright 2009 Jean Privat <jean@pryen.org>
"
" Licensed under the Apache License, Version 2.0 (the "License");
" you may not use this file except in compliance with the License.
" You may obtain a copy of the License at
"
"     http://www.apache.org/licenses/LICENSE-2.0
"
" Unless required by applicable law or agreed to in writing, software
" distributed under the License is distributed on an "AS IS" BASIS,
" WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
" See the License for the specific language governing permissions and
" limitations under the License.

if exists("b:current_syntax")
	finish
endif

" Expression Substitution and Backslash Notation
syn match NITExprSubstError "{\|}" contained
syn match NITExprSubst "\\." contained
syn match NITExprSubst "{[^}]*}" contained

" Numbers and ASCII Codes
syn match NITNumber "\<\(\d\+\.\d\+\|\d\+\)\>"

" Identifiers
syn match NITClass		"\<\u\w*"
syn match NITAttribute		"\<_\h\w*"

" Literal strings
syn region NITString matchgroup=NITStringDelimit start="\"" end="\"" skip="\\\\\|\\\"" contains=NITExprSubst,NITExprSubstError
syn region NITString matchgroup=NITStringDelimit start="'"  end="'"  skip="\\\\\|\\'"

" Labels
syn match NITLabel "\<label \h\w*"

" Closures
syn match NITClosure "!\h\w*"

" Fallback highlight keywords
syn match NITNull "\<\(null\)\>"
syn match NITControl "\<\(init\|end\|not null\|not\|var\|do\|then\|else\)\>"
" Unmatchning error
syn match Error "\<end\>"

" Declarations, definitions and blocks
syn region NITPackageDecl matchgroup=NITDefine start="\<\(import\|package\)\>\s*" matchgroup=NONE end="\ze\(\s\|:\|(\|$\)"  oneline
syn region NITClassBlock matchgroup=NITDefine start="\<\(class\|universal\|interface\)\>" matchgroup=NITDefine end="\<end\>" contains=ALL fold
syn region NITFunctionDecl matchgroup=NITDefine start="\<fun\>\s*" matchgroup=NONE end="\ze\(\<do\>\|\s\|:\|(\|$\)"  oneline
syn region NITTypeDecl matchgroup=NITDefine start="\<type\>\s*" matchgroup=NONE end="\ze\(\<do\>\|\s\|:\|(\|$\)"  oneline contained containedin=NITClassBlock
syn region NITAttrDecl matchgroup=NITDefine start="\<var\>\s*\ze_" matchgroup=NONE end="\ze\(\<do\>\|\s\|:\|(\|$\)"  oneline contained containedin=NITClassBlock
syn region NITInitDecl matchgroup=NITDefine start="\<init\>\s*" matchgroup=NONE end="\ze\(\<do\>\|\s\|:\|(\|$\)"  oneline contained containedin=NITClassBlock

syn region NITStmtBlock matchgroup=NITControl start="\<\(do\|then\|else\)\>\ze\s*\(#\|$\)" matchgroup=NITControl end="^\s*\<\(end\|\zeelse\|\ze!\)\>" contains=ALLBUT,NITTypeDecl,NITAttrDecl,NITInitDecl
syn region NITStmtBlock matchgroup=NITControl start="\<\(do\|then\|else\)\>" matchgroup=NITControl end="\<end\>" oneline

if !exists("NIT_minlines")
	let NIT_minlines = 50
endif
exec "syn sync minlines=" . NIT_minlines

" Comments and Documentation
syn match  NITSharpBang	"\%^#!.*"
syn match  NITComment	"#.*" contains=NITTodo

" Keywords
syn keyword NITKeyword	 is abstract intern extern super new
syn keyword NITDefine	 private public protected intrude readable writable redef
syn keyword NITControl   if while for assert and or in as isa once break continue return abort
syn keyword NITClass     nullable
syn keyword NITInclude   special
syn keyword NITTodo      FIXME NOTE TODO XXX contained
syn keyword NITBoolean   true false
syn keyword NITSelf      self

" Define the default highlighting.
hi def link NITDefine			Define
hi def link NITPackageDecl		Identifier
hi def link NITFunctionDecl		Function
hi def link NITTypeDecl			Function
hi def link NITAttrDecl			Function
hi def link NITInitDecl			Function
hi def link NITControl			Statement
hi def link NITLabel			PreProc
hi def link NITInclude			Include
hi def link NITNumber			Number
hi def link NITBoolean			Boolean
hi def link NITNull			Constant
hi def link NITSelf			Constant
hi def link NITClass			Type
hi def link NITAttribute		Identifier
hi def link NITClosure			Function
hi def link NITSharpBang		PreProc
hi def link NITKeyword			Keyword

hi def link NITString			String
hi def link NITStringDelimit		Delimiter
hi def link NITExprSubst		Special
hi def link NITExprSubstError		Error

hi def link NITComment			Comment
hi def link NITTodo			Todo

let b:current_syntax = "Nit"
