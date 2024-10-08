#!/usr/bin/perl

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

# fact_parser, a Sablecc postprocessor.
#
# Factorize comon actions in a generated sablecc parser file
# Synopsys: fact_parser < infile > outfile

use warnings;

%actions = (); # body of an action -> id of the first action with this body
%dupl = (); # id of a duplicate action -> id of the first action with this body

@text = (); # Resulting file
$start = 0; # current mode: 0=begin of file; 1=after an action; 2=inside an action
$tot = 0; # original total number of actions
$cpt = 0; # final total number of action
while (<>) {
	# Process the body of the action?
	if ($start == 2) {
		push @action, $_;
		if (/ new (?!Array)/) { $has_new = 1; }
	}

	# Start a new action?
	if (/private class ReduceAction(\d+)/) {
		$tot++;
		$start = 2;
		$nb = $1; # Identifier of the action
		$head = $_; # The declaration line
		@action = (); # Body of the action
		$has_new = 0; # Is a new something used?
	}

	# Process the begin of the file?
	if ($start == 0) { push @text, $_; }

	# End of an action?
	if ($start == 2 and /^end/) {
		# Build the action body by filtering useless new
		$action = "";
		foreach $l (@action) {
			if ($has_new or $l !~ / isa (?!Array)/) { $action .= $l; }
		}

		# Is it an original action?
		if (not defined $actions{$action}) {
			# Yes, so register it
			$actions{$action} = $nb;
			push @text, $head, $action;
			$cpt++;
		} else {
			# No, so link the duplicate to the original
			$mainnb = $actions{$action};
			$dupl{$nb} = $mainnb;
		}
		$start = 1;
	}
}

# Substitute duplicate actions with the originals in the whole file
foreach (@text) {
	if (/ReduceAction(\d+)/ && defined $dupl{$1}) {
		$d = $dupl{$1};
		s/$1/$d/;
	}
}

print STDERR "* fact_parser: $tot -> $cpt\n";

print @text;
