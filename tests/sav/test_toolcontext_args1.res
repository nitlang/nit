# generated bash completion file for DUMMY_TOOL DUMMY_VERSION
_DUMMY_TOOL()
{
	local cur prev opts
	COMPREPLY=()
	cur="${COMP_WORDS[COMP_CWORD]}"
	prev="${COMP_WORDS[COMP_CWORD-1]}"
	opts="--warn --quiet --stop-on-first-error --no-color --log --log-dir --help --version --set-dummy-tool --verbose --bash-completion --option-a --option-b"
	if [[ ${cur} == -* ]] ; then
		COMPREPLY=( $(compgen -W "${opts}" -- ${cur}) )
		return 0
	fi
} &&
complete -o default -F _DUMMY_TOOL DUMMY_TOOL
