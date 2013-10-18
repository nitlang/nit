#!/usr/bin/perl

# Alterner.pl
#
# Copyright 2011 Jean Privat <jean@pryen.org>
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

use strict;
use File::Basename;

# Default values for options
my $directory = "alt"; # The directory where alternatives will be generated.
my $start = "//"; # The marker at the begin of a directive (usually the start of a comment).
my $end = ""; # The marker at the end of the line (usually the end of a comment)
my $altsep = "."; # The separator used in generated file between the basename and the altmark.

sub usage(;$) {
	my $msg = shift;
	my $usage = "Usage: alterner.pl [-d dir] [--start pat] [--end pat] file...";
	if (defined $msg) {
		print STDERR $msg . "\n" . $usage . "\n";
		exit 1;
	} else {
		print $usage . "\n";
		exit 0;
	}
}

# Process arguments.
my $stop = 0;
while (@ARGV && !$stop) {
	my $arg = $ARGV[0];
	my $val = $ARGV[1];
	if ($arg eq "-d") {
		$directory = $val or usage "$arg requires a directory.";
		shift @ARGV;
		shift @ARGV;
	} elsif ($arg eq "--start") {
		$start = $val or usage "$arg requires a pattern.";
		shift @ARGV;
		shift @ARGV;
	} elsif ($arg eq "--end") {
		$end = $val or usage "$arg requires a pattern.";
		shift @ARGV;
		shift @ARGV;
	} elsif ($arg eq "--altsep") {
		$altsep = $val or usage "$arg requires a pattern.";
		shift @ARGV;
		shift @ARGV;
	} elsif ($arg eq "-h" || $arg eq "--help") { 
		shift @ARGV;
		usage
	} elsif ($arg eq "--") { 
		shift @ARGV;
		$stop = 1;
	} elsif ($arg =~ /^-/) {
		usage "Unknown argument $arg.";
	} else {
		$stop = 1;
	}
}

if ($#ARGV == -1) {
	usage("No input file.");
}

# Is $_[0] triggers the alternative directive $[1]?
sub triggers_alt($$) {
	my $number = shift;
	my $directive = shift;
	foreach my $a (split ",", $directive) {
		if ($a =~ /^(\d+)-(\d+)$/) {
			if ($1 <= $number && $number <= $2) {
				return 1;
			}
		} else {
			if ($number == $a) {
				return 1;
			}
		}
	}
	return 0;
}

# Generate alternatives from the specified input-file using a specific altmark
sub process_alts($$) {
	my $file = shift;
	my $altmark = shift;
	# Read the file
	open my $in, "<", $file or die "$file: $!";
	my @lines = <$in>;
	close($file);

	my $prefix = $start . $altmark;

	# Collect alternatives
	my %alt;
	foreach my $l (@lines) {
		while ($l =~ /\Q$prefix\E([\d,-]+)(\Q$start\E|\b)/g) {
			for my $a (split /[,-]/, $1) {
				$alt{$a} = 1;
			}
		}
	}
	my @alt = sort(keys(%alt));

	my @files;
	# Process each alternatives
	foreach my $alt (@alt) {
		# Exctact the basename and the suffix
		my ($name, $path, $suffix) = fileparse($file, qr/\.[^\.]*/);

		# Compute filename of the alternative
		my $outfile = $name . $altsep . $altmark . $alt . $suffix;
		if (defined $directory && $directory ne ".") {
			$outfile = $directory . "/" . $outfile;
			if (! -d $directory) {
				mkdir $directory or die "$directory: $!";
			}
		}
		push @files, $outfile;

		# Write the alternative
		open my $out, ">", $outfile or die "$outfile: $!";
		print "$outfile\n";
		foreach my $l (@lines) {
			my $l2 = $l;
			my $selected;
			while ($l =~ /(\Q$prefix\E([\d,-]+)(\Q$start\E|\b))/g) {
				if (triggers_alt $alt, $2) {
					$selected = $1;
				}
			}
			if ($selected && $l =~ /^(\s*)(.*)(\s*)(\Q$selected\E)([ \t]*)(.*)([ \t]*\Q$end\E\s*)$/) {
				$l2 = "$1$6$3$4$5$2$7";
			}
			print $out $l2 or die "$outfile: $!";
		}
		close $out;
	}
	return @files;
}

# Generate combination of alternatives from the specified input-file
sub process_xalts($) {
	my $file = shift;
	# Read the file
	open my $in, "<", $file or die "$file: $!";
	my @lines = <$in>;
	close($file);

	# Collect combination of alternatives
	my %alt;
	foreach my $l (@lines) {
		while ($l =~ /\Q$start\E(\d*alt)\d+(\Q$start\E|\b)/g) {
			$alt{$1} = $1;
		}
	}
	my @alt = sort(keys(%alt));

	my @files = $file;
	# Process each combination of alternatives
	foreach my $alt (@alt) {
		my @newfiles;
		foreach my $f (@files) {
			push @newfiles, process_alts($f, $alt);
		}
		push @files, @newfiles;
	}
}

# Do the job
foreach my $file (@ARGV) {
	process_xalts($file);
}
