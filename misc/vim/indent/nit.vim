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
setlocal indentkeys+==end,=else,=catch,=do,=var,0!,=then,=loop,=special,=class,=interface,=universal

" Only define the function once.
if exists("*GetNITIndent")
	finish
endif

" Indent after
let s:relative_indent = '\<\(do\|loop\|then\|else\|catch\|if\)\s*\(#\|$\)\|^\s*\(\<\(redef\|private\)\>\s*\)\?\(\<abstract\>\s*\)\?\<\(class\|interface\|universal\|special\)\>'
" Unindent on them
let s:outdent = '^\s*\(catch\|else\|then\|end\)\>'
" At 0
let s:no_indent = '^\s*\(class\|import\|special\)\>'

let s:syng_strcom = '\<NIT\(String\|StringDelimiter\|Escape\|Comment\|Documentation\)\>'

" Check if the character at lnum:col is inside a string, comment, or is ascii.
function s:IsInStringOrComment(lnum, col)
	  return synIDattr(synID(a:lnum, a:col, 0), 'name') =~ s:syng_strcom
endfunction

function s:Match(lnum, regex)
	let col = match(getline(a:lnum), a:regex) + 1
	return col > 0 && !s:IsInStringOrComment(a:lnum, col) ? col : 0
endfunction

function GetNITIndent()
	" Find a non-blank line above the current line.
	let plnum = prevnonblank(v:lnum - 1)

	" At the start of the file use zero indent.
	if plnum == 0
		return 0
	endif

	let cline = getline(v:lnum) " The line to indent
	let prevline=getline(plnum) " The previous nonempty line
	let ind = indent(plnum) " The previous nonempty indent level

	" Add a 'shiftwidth' after lines that start with an indent word
	if s:Match(plnum, s:relative_indent)
	"if prevline =~ s:relative_indent
		let ind = ind + &sw
	endif

	" Subtract a 'shiftwidth', for lines that start with an outdent word
	"if cline =~ s:outdent
	if s:Match(v:lnum, s:outdent)
		let ind = ind - &sw
	endif

	" Unindent line after a closure declaration
	if prevline =~ '^\s*\(break\)\=\s*!'
		let col = match(prevline, "!")
		let ctx = synIDattr(synID(plnum, col, 0), 'name')
		echo "prev is " ctx
		if ctx !~ "NITStmtBlock"
			" closure declaration
			let ind = ind - &sw
		end
	endif

	" Indent line of a closure declaration
	" Unindent line of a closure definition
	if cline =~ '^\s*\(break\)\=\s*!'
		let col = match(cline, "!")
		let ctx = synIDattr(synID(v:lnum, col, 0), 'name')
		if ctx =~ "NITStmtBlock"
			" closure definition
			let ind = ind - &sw
		else
			" closure declaration
			let ind = ind + &sw
		end
	endif

	" The following should always be at the start of a line, no indenting
	"if cline =~ s:no_indent
	if s:Match(v:lnum, s:no_indent)
		let ind = 0
	endif

	return ind
endfunction
