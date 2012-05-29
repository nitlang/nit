"============================================================================
"File:        nit.vim
"Description: Syntax checking plugin for syntastic.vim
"Maintainer:  Alexis Laferrière <alexis.laf@xymus.net>
"License:     This program is free software. It comes without any warranty,
"             to the extent permitted by applicable law. You can redistribute
"             it and/or modify it under the terms of the Do What The Fuck You
"             Want To Public License, Version 2, as published by Sam Hocevar.
"             See http://sam.zoy.org/wtfpl/COPYING for more details.
"============================================================================
if exists("loaded_nit_syntax_checker")
	finish
endif
let loaded_nit_syntax_checker = 1

" check if nitc is accessible
if !executable("nitc")
	finish
endif

function! SyntaxCheckers_nit_GetLocList()
	let makeprg = "nitc --no-color --only-metamodel 2>&1 " . shellescape(expand("%"))
	" possible combinations of error messages
	let ef_start = [ '%f:%l\,%c--%*[0-9]:', '%f:%l\,%c--%*[0-9]\,%*[0-9]:', '%f:%l\,%c:' ]
	let ef_type = [ ' %tarning: ', ' %trror: ', ' Syntax %trror: ' ]

	" generate errorformat from combinations
	let errorformat = ""
	for s in ef_start
		for t in ef_type
			let errorformat .= s . t . '%m,'
		endfor
	endfor

	return SyntasticMake({ 'makeprg': makeprg, 'errorformat':errorformat })
endfunction
