# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Source this script inside a bash or sh session to setup:
#
# * PATH
# * MANPATH
# * bash_completion
#
# If `install` is given as an argument, then the script sourcing is automatically inserted in the `.profile`.

# Final function that sets up the shell environment.
__nit_env() {
	#echo "Install in $1:"

	local str="$1/bin"
	echo "$PATH" | grep -q "$str" || export PATH="$str:$PATH"
	str="$1/share/bin"
	echo "$MANPATH" | grep -q "$str" || export MANPATH="$str:$MANPATH"

	if [ -n "$BASH" -a -n "$PS1" ]; then
		. "$1/misc/bash_completion/nit"
	fi

}

# Fast setup when invoked from .profile (see `install` at the end)
#
# Because [d]ash does not support argument to source (`.`),
# we pass the root dir as a local environment variable.
if [ -n "$NIT_DIR" ]; then
	__nit_env "$NIT_DIR"
	return 2> /dev/null # `return` fails if invoked as is; i.e. not trough source (`.`)
	exit
fi

# Guess the nit root directory and return it in `dirname`.
__nit_env_guess() {
	dirname=$NIT_DIR
	[ -f "$dirname/src/nitc.nit" ] && return 0

	dirname=$PWD
	[ -f "$dirname/src/nitc.nit" ] && return 0

	if [ -n "$BASH_SOURCE" ]; then
		dirname=`dirname "$BASH_SOURCE"`/..
		[ -f "$dirname/src/nitc.nit" ] && return 0
	fi

	dirname=`dirname "$0"`/..
	[ -f "$dirname/src/nitc.nit" ] && return 0

	echo "Cannot find the Nit root directory. Run the script from the Nit root directory."
	return 1
}

# Main method of the script.
#
# A function is used so that `return` have a sane effect
__nit_env_main() {
	local install
	local dirname

	# Install required?
	if [ "$1" = "install" ]; then
		install=true
		shift
	fi

	# Get the root directory
	case "$#" in
		1)
			# Get it from the argument
			dirname=$1
			if [ ! -f "$dirname/src/nitc.nit" ]; then
				if [ -d "$dirname/" ]; then
					echo "$dirname: not a Nit root directory"
				else
					echo "$dirname: not a directory"
				fi
				return 1
			fi
			;;
		0)
			# Guess it
			__nit_env_guess || return 1
			;;
		*) echo "usage: source nit_env.sh [install] [path/to/nitdir]"
			return 1
			;;
	esac

	# Get a canonical path
	local ret=`pwd`
	cd $dirname > /dev/null
	local fulldir=`pwd`
	cd "$ret"

	# Check misuse
	if [ -n "$BASH" -a "$0" = "$BASH_SOURCE" ]; then
		echo "nit_env.sh should be sourced not executed as is. E.g. run with 'source ./nit_env.sh'"
	fi

	# Setup the environment
	__nit_env "$fulldir"

	# Register in the .profile if required
	if [ -n "$install" ]; then
		local ne="$fulldir/misc/nit_env.sh"
		local str="test -r \"$ne\" && NIT_DIR=\"$fulldir\" . \"$ne\""
		if [ -f "$HOME/.profile" ]; then
			echo "$str" >> "$HOME/.profile"
			echo "successfuly registered nit in .profile"
		elif [ -f "$HOME/.bashrc" ]; then
			echo "$str" >> "$HOME/.bashrc"
			echo "successfuly registered nit in .bashrc"
		elif [ -f "$HOME/.bash_profile" ]; then
			echo "$str" >> "$HOME/.bash_profile"
			echo "succesfuly registerd nit .bash_profile"
		elif [ -f "$HOME/.zshrc" ]; then
			echo "$str" >> "$HOME/.zshrc"
			echo "successfuly registered nit in .zshrc"
		else
			echo "$str" > "$HOME/.profile"
			echo "couldn't find .bashrc, .bash_profile, .profile. Created .profile and registered nit in it"
		fi
	fi
}

__nit_env_main "$@"
