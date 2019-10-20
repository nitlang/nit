# generated bash completion file for DUMMY_TOOL DUMMY_VERSION
_DUMMY_TOOL()
{
	local cur prev opts
	COMPREPLY=()
	cur="${COMP_WORDS[COMP_CWORD]}"
	prev="${COMP_WORDS[COMP_CWORD-1]}"
	opts="--warn --warning --quiet --stop-on-first-error --keep-going --no-color --log --log-dir --nit-dir --help --version --set-dummy-tool --verbose --bash-completion --stub-man --no-contract --full-contract --in-out-invariant --no-self-contract --option-a --option-b"
	if [[ ${cur} == -* ]] ; then
		COMPREPLY=( $(compgen -W "${opts}" -- ${cur}) )
		return 0
	fi
} &&
complete -o default -F _DUMMY_TOOL DUMMY_TOOL
