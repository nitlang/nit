#!/bin/bash
# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

usage()
{
	e=`basename "$0"`
	cat<<END
Usage: $e modulenames
END
}

find_nitc()
{
	recent=`ls -t ../src/nitc ../src/nitc_[0-9] ../bin/nitc ../c_src/nitc 2>/dev/null | head -1`
	if [[ "x$recent" == "x" ]]; then
		echo 'Could not find nitc, aborting'
		exit 1
	fi
	echo 'Using nitc from: '$recent
	NITC=$recent
}

# The default nitc compiler
[ -z "$NITC" ] && find_nitc

if [ $# = 0 ]; then
	usage;
	exit
fi

ok=""
nok=""

# Process each files given as arguments
for ii in "$@"; do
	if [ ! -f $ii ]; then
		echo "File '$ii' does not exist."
		continue
	fi

	# Prepare the includes
	tmp=${ii/../AA}
	if [ "x$tmp" = "x$ii" ]; then
		oincludes="-I . -I ../lib/standard -I ../lib/standard/collection"
	else
		oincludes=""
	fi

	# Process each alternatives in the current file
	for alt in "$ii" `./alterner.pl --start '#' "$ii"`; do
		f=`basename "$ii" .nit`
		d=`dirname "$ii"`
		ff="$f"
		i="$ii"
		includes="$oincludes -I alt"

		echo -n "=> $i: "

		# Clean-up before compile and tests
		rm -rf .nit_compile 2> /dev/null

		# Compile
		# The point of ICode testing is to validate analysis/optimizations
		# Force '--global' option !
		$NITC $OPT --global --output-format icode "$i" $includes 2> "out/$ff.cmp.err" > "out/$ff.compile.log"
		ERR=$?
		if [ "$ERR" != 0 ]; then
			# Could not compile
			echo "! [======= fail: Compilation error =======]"
			nok="$nok $ff"
		else
			TEST_FILE=$d/$ff.tests
			if [ ! -f $TEST_FILE ]; then
				# Could not find the .tests file associated with this test
				echo ". [======= fail: Cannot open test file =======]"
				nok="$nok $ff"
				continue
			fi
			echo "."

			# Execute tests
			# Each lines in the .tests file describe a test to execute on the generated
			# ICode. The file has 4 parameters:
			# - The class
			# - The method
			# - The type of test
			# - Arguments for the test
			# We use the class to open the right icode file.
			# We use a special method named "no-file" to ensure that the class file does not exist.
			# If the method is different from "no-file" then we search in said method for the expression given
			# with the _arguments_ field. This expression will be evaluated as a awk regexp.
			# We have two types of tests : 
			# - has : the given argument must be found for the test to be successful
			# - no :  the given argument must NOT be found for the test to be successful
			cptr=0
			while IFS=, read CLASS METHOD TYPE ATTR
			do
				ICODE_FILE=$d/.nit_compile/$CLASS.icode
				let cptr+=1
				echo -n '==> Test #'$cptr' ...... '

				if [ -f $ICODE_FILE ]; then
					# Check if the file should exist
					if [ "x$METHOD" = "xno-file" ]; then
						# this is not normal, the file should not exist
						echo "Failed"
						nok="$nok $ff#$cptr"
						continue
					fi

					# Use awk to get the method in the file and search in it for the argument
					awk '
					BEGIN{
						process=0
					}
					/'"$METHOD"'/{
						process=1
					}
					/^$/ {
						process=0
					}
					/'"$ATTR"'/{
						if(process){
							exit -3
						}
					}
					' $ICODE_FILE
					awkstatus=$?

					if [ $awkstatus -ne 0 ] ; then
						# Found the value !
						if [ "x$TYPE" = "xno" ]; then
							# Should not have beed found
							echo "Failed"
							nok="$nok $ff#$cptr"
						elif [ "x$TYPE" = "xhas" ]; then
							# Should have been found
							echo "Ok"
							ok="$ok $ff#$cptr"
						else
							echo "Test file format error !!!"
							exit -1
						fi
					else
						# Value not found
						if [ "x$TYPE" = "xno" ]; then
							# Should not have beed found
							echo "Ok"
							ok="$ok $ff#$cptr"
						elif [ "x$TYPE" = "xhas" ]; then
							# Should have been found
							echo "Failed"
							nok="$nok $ff#$cptr"
						else
							echo "Test file format error !!!"
							exit -1
						fi
					fi
				else
					# The class file was not found
					if [ "x$METHOD" = "xno-file" ]; then
						# this is normal
						echo "Ok"
						ok="$ok $ff#$cptr"
					else
						# Should have been found
						echo "Failed"
						nok="$nok $ff#$cptr"
					fi
				fi
			done < $TEST_FILE
		fi
	done
done

echo "ok: " `echo $ok | wc -w` "/" `echo $ok $nok $nos | wc -w`

if [ -n "$nok" ]; then
	echo "fail: $nok"
	echo "There were $(echo $nok | wc -w) errors !"
fi
if [ -n "$nos" ]; then
	echo "no sav: $nos"
fi

if [ -n "$nok" ]; then
	exit 1
else
	exit 0
fi
