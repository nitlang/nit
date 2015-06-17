#!/bin/bash

LIB_7="vim build-essential ccache libgc-dev graphviz libunwind7-dev pkg-config"
LIB_8="vim build-essential ccache libgc-dev graphviz libunwind8-dev pkg-config"
MSG_VIM="Do you want to set your vim for NIT ? [Y/n] "

. /etc/os-release

function vim_conf {

	if [ $1 = "old" ]; then

		NIT_PATH=$PWD
		mkdir -p ~/.vim/autoload ~/.vim/bundle
		echo ".Vim directory created [OK]"

		# Check if crul is instaled or not
		CURL=$(dpkg-query -W -f='${Status}\n' "curl")
		if [ "$CURL" != "install ok installed" ]; then
			echo "Curl instalation ...."
			apt-get install curl
		fi

		curl -LSso ~/.vim/autoload/pathogen.vim https://tpo.pe/pathogen.vim

		echo "call pathogen#infect()" >> /etc/vim/vimrc
		echo "syntax on" >> /etc/vim/vimrc
		echo "filetype plugin indent on" >> /etc/vim/vimrc
		echo "Pathogen installation [OK]"

		# NIT SUPPORT
		cd ~/.vim/bundle
		ln -s $NIT_PATH/misc/vim nit
		echo "Nit support [OK]"

		# SYNTAX CHECKER
		git clone https://github.com/scrooloose/syntastic.git
		echo "Syntax checker [OK]"

	else
		echo "Vim new instalation"
	fi

}

function vim_call {
	echo $MSG_VIM
	echo $1
	read enter
	if [ $enter = "y" -o $enter = "" ]; then
		vim_conf $1		
	else
		echo "Vim configuration [ABORT]"
	fi
}

if [ $ID = "debian" ]; then
	if [ $VERSION_ID = "7" ]; then
		apt-get install $LIB_7
		vim_call old
	else
		apt-get install $LIB_8
		vim_call new
	fi
fi
if [ $ID = "ubuntu" ]; then
	if [ $VERSION_ID = "12.04" ]; then
		apt-get install $LIB_7
		vim_call old
	else
		apt-get install $LIB_8
		vim_call new
	fi
fi
