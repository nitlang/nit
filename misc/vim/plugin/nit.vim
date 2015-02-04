" This file is part of NIT ( http://www.nitlanguage.org ).
"
" Licensed under the Apache License, Version 2.0 (the "License");
" you may not use this file except in compliance with the License.
" You may obtain a copy of the License at
"
"		 http://www.apache.org/licenses/LICENSE-2.0
"
" Unless required by applicable law or agreed to in writing, software
" distributed under the License is distributed on an "AS IS" BASIS,
" WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
" See the License for the specific language governing permissions and
" limitations under the License.

" Nit plugin for Vim, provides some advanced features

if v:version < 700
	finish
endif

if exists("loaded_nit_plugin")
	finish
endif
let loaded_nit_plugin = 1

" Scan all relevant Nit modules for the current directory to autocomplete
"
" The guard `g:nit_complete_done` ensures that its body is executed only
" once. The call to `nitls -M` analyzses the current directory. However,
" updating the module list can be forced using ForceNitComplete.
"
" To activate, add the following line to ~/.vimrc
"
" autocmd Filetype nit call NitComplete()
function NitComplete()
	if !exists("g:nit_complete_done")
		let g:nit_complete_done = 1

		" Reset or backup the original complete
		if !exists("g:nit_complete_backup")
			let g:nit_complete_backup = &complete
		else
			silent let &complete = g:nit_complete_backup
			silent set complete?
		endif

		" This gives us better results for Nit
		set noignorecase
		set completeopt=longest,menuone

		" Do not predict small 3 letters keywords (or their prefix), they slow down
		" prediction and some also require double-enter on end of line.
		let g:acp_behaviorKeywordIgnores = ['new', 'var', 'in', 'do', 'els', 'end', 'ret', 'for', 'fun']

		" Use nitls to compute all interesting files from the current directory and the standard library
		for file in split(system('nitls -M standard .', '\n'))
			silent let &complete = &complete . ',s' . file
			silent set complete?
		endfor

		" Compatibility with AutoComplPop
		let g:acp_completeOption = &complete
		let g:acp_ignorecaseOption = &ignorecase

		" Redraw in case the user pressed some keys while waiting
		redraw!
	endif
endfunction

" Force updating the Nit modules used for autocomplete
"
" It is recommended to manually call this function as needed. It can be mapped
" to a key with:
"
" map <F2> :call ForceNitComplete()
"
" For small projects (or fast computers) you might want to call it on each
" file save or load.
function ForceNitComplete()
	unlet! g:nit_complete_done
	call NitComplete()
endfunction
