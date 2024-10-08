" This file is part of NIT ( https://nitlanguage.org ).
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
		for file in split(system('nitls -M core .', '\n'))
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

" Get path to the best metadata file named `name`
"
" Returns an empty string if not found.
fun s:NitMetadataFile(name)
	" Where are the generated metadata files?
	if empty($NIT_VIM_DIR)
		let metadata_dir = $HOME . '/.vim/nit'
	else
		let metadata_dir = $NIT_VIM_DIR
	end

	let path = metadata_dir . '/' . a:name

	" Is there generated custom metadata files?
	if ! filereadable(path)
		let path = s:script_dir . '/' . a:name

		" Is there standard metadata files?
		if ! filereadable(path)
			return ''
		endif
	endif

	return path
endfun

" Internal function to search for lines in `path` corresponding to the partial
" word `base`. Adds found and formated match to `matches`.
"
" Will order the results in 5 levels:
" 1. Exact matches
" 2. Common prefix matches
" 3. Substring matches
" 4. Synopsis matches
" 5. Doc matches
fun NitOmnifuncAddFromFile(base, matches, path)
	let prefix_matches = []
	let substring_matches = []
	let synopsis_matches = []
	let doc_matches = []

	let path = s:NitMetadataFile(a:path)
	if empty(path)
		return
	endif

	for line in readfile(path)
		let words = split(line, '#====#', 1)
		let name = get(words, 0, '')

		" Add?
		if name == a:base
			" Exact match
			call s:NitOmnifuncAddAMatch(a:matches, words, name)
		elseif name =~? '^'.a:base
			" Common-prefix match
			call s:NitOmnifuncAddAMatch(prefix_matches, words, name)
		elseif name =~? a:base
			" Substring match
			call s:NitOmnifuncAddAMatch(substring_matches, words, name)
		elseif get(words, 2, '') =~? a:base
			" Match in the synopsis
			call s:NitOmnifuncAddAMatch(synopsis_matches, words, name)
		elseif get(words, 3, '') =~? a:base
			" Match in the longer doc
			call s:NitOmnifuncAddAMatch(doc_matches, words, name)
		endif
	endfor

	" Assemble the final match list
	call extend(a:matches, sort(prefix_matches))
	call extend(a:matches, sort(substring_matches))
	call extend(a:matches, sort(synopsis_matches))
	call extend(a:matches, sort(doc_matches))
endfun

" Internal function to search parse the information from a metadata line
fun s:NitOmnifuncAddAMatch(matches, words, name)
	let pretty = get(a:words, 1, '')
	let synopsis = get(a:words, 2, '')
	let desc = get(a:words, 3, '')
	let desc = join(split(desc, '#nnnn#', 1), "\n")
	if strlen(pretty) > 40
		let pretty = pretty[:39] . '…'
	endif
	call add(a:matches, {'word': a:name, 'abbr': pretty, 'menu': synopsis, 'info': desc, 'dup': 1})
endfun

" Omnifunc using metadata files generated by nitpick to offer better
" contextual autocomplete for Nit source code.
fun NitOmnifunc(findstart, base)
	if a:findstart
		" locate the start of the word
		let line = getline('.')
		let start = col('.') - 1
		while start > 0 && line[start - 1] =~ '\w'
			let start -= 1
		endwhile
		return start
	else
		" find keyword matching with "a:base"
		let matches = []

		" advanced suggestions
		let cursor_line = getline('.')

		" content of the line before the partial word
		let line_prev_cursor = cursor_line[:col('.')-1]

		let prev_char_at = strlen(line_prev_cursor) - 1
		while prev_char_at > 0 && line_prev_cursor[prev_char_at] =~ '\s'
			let prev_char_at -= 1
		endwhile

		" Non whitespace char just before the partial word
		let prev_char = line_prev_cursor[prev_char_at]

		" Nity words on the current line before the partial word
		let prev_words = split(line_prev_cursor, '\W\+')

		" The word right before the partial word
		let prev_word = get(prev_words, -1, '')

		" Have we found a promising heuristic yet?
		let handled = 0

		" Modules
		if prev_word == 'import' && ! (line_prev_cursor =~ 'fun')
			let handled = 1
			call NitOmnifuncAddFromFile(a:base, matches, 'modules.txt')
		endif

		" Classes (instanciable only)
		if prev_word == 'new'
			let handled = 1
			call NitOmnifuncAddFromFile(a:base, matches, 'constructors.txt')
		endif

		" Other class references
		if count(['class', 'super'], prev_word) > 0
			let handled = 1
			call NitOmnifuncAddFromFile(a:base, matches, 'classes.txt')
		endif

		" Types
		if count(['class', 'super', 'nullable', 'isa', 'as'], prev_word) > 0 ||
		 \ line_prev_cursor =~ '[' || prev_char == ':' ||
		 \ (line_prev_cursor =~ 'fun' && line_prev_cursor =~ 'import' && (prev_word == 'import' || prev_char == ','))
			let handled = 1
			call NitOmnifuncAddFromFile(a:base, matches, 'types.txt')
		endif

		" Properties
		if prev_char == '.' || line_prev_cursor =~ '['
			let handled = 1
			call NitOmnifuncAddFromFile(a:base, matches, 'properties.txt')
		endif

		" If is nothing else...
		if !handled
			" It may be a keyword
			if strlen(a:base) > 0
				for keyword in ['module', 'import', 'class', 'abstract', 'interface',
					\'universal', 'enum', 'end', 'fun', 'type', 'init', 'redef', 'is',
					\'do', 'var', 'extern', 'public', 'protected', 'private', 'intrude',
					\'if', 'then', 'else', 'while', 'loop', 'for', 'in', 'and', 'or',
					\'not', 'implies', 'return', 'continue', 'break', 'abort', 'assert',
					\'new', 'isa', 'once', 'super', 'self', 'true', 'false', 'null',
					\'as', 'nullable', 'isset', 'label']

					if keyword =~ '^' . a:base
						call add(matches, keyword)
					endif
				endfor
			endif

			" it may still be a method call or property access
			call NitOmnifuncAddFromFile(a:base, matches, 'properties.txt')
		endif

		return {'words': matches, 'refresh': 'always'}
	endif
endfun

" Show doc for the entity under the cursor in the preview window
fun Nitdoc(...)
	if a:0 == 0 || empty(a:1)
		" Word under cursor
		let word = expand("<cword>")
	else
		let word = join(a:000, ' ')
	endif

	" All possible docs (there may be more than one entity with the same name)
	let docs = []
	let prefix_matches = []
	let substring_matches = []
	let synopsis_matches = []
	let doc_matches = []

	" Search in all metadata files
	for file in ['modules', 'classes', 'properties']
		let path = s:NitMetadataFile(file.'.txt')
		if empty(path)
			continue
		endif

		for line in readfile(path)
			let words = split(line, '#====#', 1)
			let name = get(words, 0, '')
			if name =~ '^'.word.'\>'
				" Exact match
				call s:NitdocAdd(docs, words)
			elseif name =~? '^'.word
				" Common-prefix match
				call s:NitdocAdd(prefix_matches, words)
			elseif name =~? word
				" Substring match
				call s:NitdocAdd(substring_matches, words)
			elseif get(words, 2, '') =~? word
				" Match in the synopsis
				call s:NitdocAdd(synopsis_matches, words)
			elseif get(words, 3, '') =~? word
				" Match in the longer doc
				call s:NitdocAdd(doc_matches, words)
			endif
		endfor
	endfor

	" Unite all results in prefered order
	call extend(docs, sort(prefix_matches))
	call extend(docs, sort(substring_matches))
	call extend(docs, sort(synopsis_matches))
	call extend(docs, sort(doc_matches))

	" Found no doc, give up
	if empty(docs) || !(join(docs, '') =~ '\w')
		echo 'Nitdoc found nothing for "' . word . '"'
		return
	endif

	" Open the preview window on a temp file
	execute "silent pedit " . tempname()

	" Change to preview window
	wincmd P

	" Show all found doc one after another
	for doc in docs
		if doc =~ '\w'
			silent put = doc
			silent put = ''
		endif
	endfor
	execute 0
	delete " the first empty line

	" Set options
	setlocal buftype=nofile
	setlocal noswapfile
	setlocal syntax=none
	setlocal bufhidden=delete

	" Change back to the source buffer
	wincmd p
	redraw!
endfun

" Internal function to search parse the information from a metadata line
fun s:NitdocAdd(matches, words)
	let desc = get(a:words, 3, '')
	let desc = join(split(desc, '#nnnn#', 1), "\n")
	call add(a:matches, desc)
endfun

" Call `git grep` on the word under the cursor
"
" In the preview window, list introductions, declarations and then all matches.
fun NitGitGrep()
	let word = expand("<cword>")
	let out = tempname()
	execute 'silent !(git grep -n -e "\<\\(module\\|class\\|universal\\|interface\\|subset\\|var\\|fun\\)\> \<'.word.'\>" --and --not -e redef -- ''*.nit'';'.
		\'git grep -n "redef \<\\(class\\|universal\\|interface\\|subset\\|var\\|fun\\)\> \<'.word.'\>" -- ''*.nit'';'.
		\'echo; git grep -n -e "\<'.word.'\>" --and --not -e "\<\\(module\\|class\\|universal\\|interface\\|subset\\|var\\|fun\\)\> \<'.word.'\>" -- ''*.nit'') > '.out

	" Open the preview window on a temp file
	execute "silent pedit " . out

	" Change to preview window
	wincmd P

	" Set options
	setlocal buftype=nofile
	setlocal noswapfile
	setlocal syntax=none
	setlocal bufhidden=delete

	" Change back to the source buffer
	wincmd p
	redraw!
endfun

" Call `nit` on the current file
fun NitExecute()
	let path = expand('%')

	if &modified
		let path = tempname() . '.nit'
		execute '%write '. path
	endif

	execute '!nit "' . path . '"'
endfun
command NitExecute call NitExecute()

if !exists("g:nit_disable_omnifunc") || !g:nit_disable_omnifunc
	" Activate the omnifunc on Nit files
	autocmd FileType nit set omnifunc=NitOmnifunc
endif

" Define the user command Nitdoc for ease of use
command -nargs=* Nitdoc call Nitdoc("<args>")

let s:script_dir = fnamemodify(resolve(expand('<sfile>:p')), ':h')
