" Vim indent file
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

" Only load this indent file when no other was loaded.
if exists("b:did_indent")
	finish
endif
let b:did_indent = 1

setlocal indentexpr=GetNITIndent()
setlocal nolisp
setlocal nosmartindent
setlocal nocindent
setlocal autoindent
setlocal comments=:#
setlocal indentkeys+==end,=else,=do,=var,=with,=then,=special,=class,=interface,=universal
setlocal sw=8

" Indent after
let s:relative_indent = '\<\(do\|then\|else\|if\)\s*$\|^\s*\(\<\(redef\|private\)\>\s*\)\?\(\<abstract\>\s*\)\?\<\(class\|interface\|universal\|special\)\>'
" Unindent on them
let s:outdent = '^\s*\(else\|then\|with\|end\)\>'
" At 0
let s:no_indent = '^\s*\(class\|import\|special\)\>'

" Only define the function once.
if exists("*GetNITIndent")
	finish
endif

function GetNITIndent()
	" Find a non-blank line above the current line.
	let lnum = prevnonblank(v:lnum - 1)

	" At the start of the file use zero indent.
	if lnum == 0
		return 0
	endif

	let cline = getline(v:lnum) " The line to indent
	let prevline=getline(lnum) " The previous nonempty line
	let ind = indent(lnum) " The previous nonempty indent level

	" Add a 'shiftwidth' after lines that start with an indent word
	if prevline =~ s:relative_indent
		let ind = ind + &sw
	endif

	" Subtract a 'shiftwidth', for lines that start with an outdent word
	if cline =~ s:outdent
		let ind = ind - &sw
	endif

	" The following should always be at the start of a line, no indenting
	if cline =~ s:no_indent
		let ind = 0
	endif

	" Subtract a shiftwidth for end statements
	if prevline =~ '$\s*end\s*\(#|$\)'
		let ind = ind - &sw
	endif

	return ind
endfunction
