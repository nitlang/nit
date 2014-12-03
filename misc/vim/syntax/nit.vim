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

if !exists("main_syntax")
  if version < 600
    syntax clear
  elseif exists("b:current_syntax")
    finish
  endif
  " we define it here so that included files can test for it
  let main_syntax='nit'
endif

" Expression Substitution and Backslash Notation
syn match NITExprSubstError "{\|}" contained
syn match NITExprSubst "\\." contained
syn match NITExprSubst "{\([^}]\|\n\)*}" contained

syn match NITExprSubstLong "\\." contained
syn match NITExprSubstLong "{*\zs{{{\([^}]\|\n\)*}}}\ze}*" contained

" Numbers and ASCII Codes
syn match NITNumber "\<\(\d\+\.\d\+\|\d\+\)\>"

" Identifiers
syn match NITClass		"\<\u\w*"
syn match NITAttribute		"\<_\h\w*"

" Literal strings
syn region NITString matchgroup=NITStringDelimit start="\"" end="\"" skip="\\\\\|\\\"" contains=NITExprSubst,NITExprSubstError,@Spell
syn region NITString matchgroup=NITStringDelimit start="\"\"\"" end="\"*\zs\"\"\"" skip="\\\\\|\\\"" contains=NITExprSubstLong,@Spell
syn region NITString matchgroup=NITStringDelimit start="'"  end="'"  skip="\\\\\|\\'"

" Labels
syn match NITLabel "\<label \h\w*"

" Closures
syn match NITClosure "!\h\w*"

" Fallback highlight keywords
syn match NITNull "\<\(null\)\>"
syn match NITControl "\<\(init\|end\|not null\|not\|var\|do\|then\|else\|loop\|is\)\>"
syn match NITKeyword "\<\(super\)\>"
" Unmatchning error
syn match Error "\<end\>"

" Declarations, definitions and blocks
syn region NITModuleDecl matchgroup=NITDefine start="\<\(import\|module\|package\)\>\s*" matchgroup=NONE end="\ze\(\s\|:\|(\|$\)"  oneline
syn region NITClassBlock matchgroup=NITDefine start="\<\(class\|enum\|universal\|interface\|extern\)\>" matchgroup=NITDefine end="\<end\>" contains=ALLBUT,NITAnnotLine fold
syn region NITFunctionDecl matchgroup=NITDefine start="\<fun\>\s*" matchgroup=NONE end="\ze\(\<do\>\|\s\|:\|(\|$\)"  oneline
syn region NITTypeDecl matchgroup=NITDefine start="\<type\>\s*" matchgroup=NONE end="\ze\(\<do\>\|\s\|:\|(\|$\)"  oneline contained containedin=NITClassBlock
syn region NITAttrDecl matchgroup=NITDefine start="\<var\>\s*" matchgroup=NONE end="\ze\(\<do\>\|\s\|:\|(\|$\)"  oneline contained containedin=NITClassBlock
syn region NITInitDecl matchgroup=NITDefine start="\<init\>\s*" matchgroup=NONE end="\ze\(\<do\>\|\s\|:\|(\|$\)"  oneline contained containedin=NITClassBlock
syn match NITDefine "\<\(super\)\ze\s\+[A-Z]" contained containedin=NITClassBlock

syn region NITAnnotBlock matchgroup=NITControl start="\<is\>\ze\s*\(#\|$\)" matchgroup=NITControl end="\(\ze\<do\>\|\<end\>\)" transparent contains=ALL
syn match NITAnnotLine "^\s*\zs\w\+" contained containedin=NITAnnotBlock

syn region NITStmtBlock matchgroup=NITControl start="\<\(do\|then\|else\|loop\)\>\ze\s*\(#\|$\)" matchgroup=NITControl end="^\s*\<\(end\|\zeelse\|\ze!\)\>" contains=ALLBUT,NITTypeDecl,NITAttrDecl,NITInitDecl,NITAnnotLine
syn region NITStmtBlock matchgroup=NITControl start="\<\(do\|then\|else\|loop\)\>" matchgroup=NITControl end="\<end\>" oneline
if !exists("NIT_minlines")
	let NIT_minlines = 50
endif
exec "syn sync minlines=" . NIT_minlines

" Comments and Documentation
syn match  NITSharpBang	"\%^#!.*"
syn match  NITComment	"#.*" contains=NITTodo,@Spell

" Keywords
syn keyword NITKeyword	 abstract intern new
syn keyword NITDefine	 private public protected intrude readable writable redef
syn keyword NITControl   if while for assert and or in as isa once break continue return abort
syn keyword NITClass     nullable
syn keyword NITInclude   special
syn keyword NITTodo      FIXME NOTE TODO XXX contained
syn keyword NITBoolean   true false
syn keyword NITSelf      self

" Define the default highlighting.
hi def link NITDefine			Define
hi def link NITModuleDecl		Identifier
hi def link NITFunctionDecl		Function
hi def link NITTypeDecl			Function
hi def link NITAttrDecl			Function
hi def link NITInitDecl			Function
hi def link NITControl			Statement
hi def link NITAnnotLine		Statement
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
hi def link NITExprSubstLong		Special
hi def link NITExprSubstError		Error

hi def link NITComment			Comment
hi def link NITTodo			Todo

" FFI Section
syn match NITFFIDelimiters "\<\(`{\|`}\)\>"
hi def link NITFFIDelimiters		Keyword

" FFI Python
syntax include @FFIPython syntax/python.vim
unlet b:current_syntax
syn match NITFFILanguage	'"Python"' nextgroup=NITFFIBlockPython skipwhite
syn region NITFFIBlockPython matchgroup=NITFFI start='`{' matchgroup=NITFFI end='`}' keepend fold contains=@FFIPython

" FFI Java
syntax include @FFIJava syntax/java.vim
unlet b:current_syntax
syn match NITFFILanguage	'"Java"' nextgroup=NITFFIBlockJava skipwhite
syn region NITFFIBlockJava matchgroup=NITFFI start='`{' matchgroup=NITFFI end='`}' keepend fold contains=@FFIJava

" FFI C++
syntax include @FFICpp syntax/cpp.vim
unlet b:current_syntax
syn match NITFFILanguage	'"C++"' nextgroup=NITFFIBlockCpp skipwhite
syn region NITFFIBlockCpp matchgroup=NITFFI start='`{' matchgroup=NITFFI end='`}' keepend fold contains=@FFICpp

" FFI Objective-C
syntax include @FFIObjC syntax/objc.vim
unlet b:current_syntax
syn match NITFFILanguage	/\c"ObjC\(\| Header\| Body\)"/ nextgroup=NITFFIBlockObjC skipwhite
syn region NITFFIBlockObjC matchgroup=NITFFI start='`{' matchgroup=NITFFI end='`}' keepend fold contains=@FFIObjC

" FFI C (the last one is the default)
syntax include @FFIC syntax/c.vim
unlet b:current_syntax
syn match NITFFILanguage		'"C\(\| header\| body\)"'	nextgroup=NITFFIBlockC skipwhite
syn region NITFFIBlockC matchgroup=NITFFI start='`{' matchgroup=NITFFI end='`}' keepend fold contains=@FFIC

hi def link NITFFILanguage		Define

let b:current_syntax = "Nit"
