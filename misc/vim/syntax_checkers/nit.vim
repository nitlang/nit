"============================================================================
"File:        nit.vim
"Description: Syntax checking plugin for syntastic.vim
"Maintainer:  Alexis Laferrière <alexis.laf@xymus.net>
"License:     This program is free software. It comes without any warranty,
"             to the extent permitted by applicable law. You can redistribute
"             it and/or modify it under the terms of the Do What The Fuck You
"             Want To Public License, Version 2, as published by Sam Hocevar.
"             See http://sam.zoy.org/wtfpl/COPYING for more details.
"
"	g:syntastic_nitc specifies custom path to compiler
"	g:syntastic_nit_dir specifies the NIT_DIR env variable
"	g:syntastic_nit_args specifies extra arguments to call nitc
"	g:syntastic_nit_include_dirs lists directories to include, must be a list
"============================================================================
if exists("loaded_nit_syntax_checker")
	finish
endif
let loaded_nit_syntax_checker = 1

" check if nitc is accessible
if exists('g:syntastic_nitc')
	let s:nitc = g:syntastic_nitc
else
	let s:nitc = "nitc"
endif

if !executable(s:nitc)
	if exists('g:syntastic_nitc')
		echo "Syntastic for Nit error: Custom nitc cannot be found at: " . g:syntastic_nitc
	endif
	finish
endif

function! SyntaxCheckers_nit_GetLocList()
	let makeprg = s:nitc . " --no-color --only-metamodel 2>&1 " . shellescape(expand("%"))

	" custom NIT_DIR
	if exists('g:syntastic_nit_dir')
		let makeprg = "NIT_DIR=" . g:syntastic_nit_dir . " " . makeprg
		echo makeprg
	endif

	" custom options for nit compiler
	if exists('g:syntastic_nit_options')
		let makeprg .= " " . g:syntastic_nit_options
	endif

	" custom dirs to include for compiler
	if exists('g:syntastic_nit_include_dirs')
		for d in g:syntastic_nit_include_dirs
			let makeprg .= " -I " . d
		endfor
	end

	" possible combinations of error messages
	let ef_start = [ '%f:%l\,%c--%*[0-9]:', '%f:%l\,%c--%*[0-9]\,%*[0-9]:', '%f:%l\,%c:' ]
	let ef_type = [ ' %tarning: ', '' ]

	" generate errorformat from combinations
	let errorformat = ""
	for s in ef_start
		for t in ef_type
			let errorformat .= s . t . '%m,'
		endfor
	endfor

	return SyntasticMake({ 'makeprg': makeprg, 'errorformat':errorformat })
endfunction
