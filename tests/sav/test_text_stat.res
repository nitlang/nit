Hello world !
Usage of Strings:

Allocations, by type:
		
	-FlatString = 29
	-FlatBuffer = 2
	-Concat = 0
	-RopeBuffer = 0

Calls to length, by type:
	FlatString = 18 (cache misses 5, 27.77%)
Indexed accesses, by type:
	FlatString = 8
Calls to bytelen for each type:
	FlatString = 61
Calls to position for each type:
	FlatString = 17
Calls to bytepos for each type:
	FlatString = 9
Calls to first_byte on FlatString 191
Calls to last_byte on FlatString 19
FlatStrings allocated with length 78 (86.813%)
Length of travel for index distribution:
* 0 = 11 => occurences 73.333%, cumulative 73.333% 
* 1 = 8 => occurences 27.586%, cumulative 65.517% 
Byte length of the FlatStrings created:
* 0 = 6 => occurences 4.478%, cumulative 4.478% 
* 1 = 24 => occurences 16.216%, cumulative 20.27% 
* 2 = 30 => occurences 18.519%, cumulative 37.037% 
* 3 = 29 => occurences 16.384%, cumulative 50.282% 
* 4 = 3 => occurences 1.563%, cumulative 47.917% 
* 5 = 20 => occurences 9.662%, cumulative 54.106% 
* 6 = 26 => occurences 11.712%, cumulative 62.162% 
* 9 = 1 => occurences 0.422%, cumulative 58.65% 
* 10 = 9 => occurences 3.571%, cumulative 58.73% 
* 11 = 2 => occurences 0.749%, cumulative 56.18% 
* 12 = 1 => occurences 0.356%, cumulative 53.737% 
* 13 = 1 => occurences 0.34%, cumulative 51.701% 
* 14 = 1 => occurences 0.326%, cumulative 49.837% 
* 15 = 7 => occurences 2.188%, cumulative 50.0% 
* 16 = 5 => occurences 1.493%, cumulative 49.254% 
* 17 = 1 => occurences 0.286%, cumulative 47.429% 
* 25 = 2 => occurences 0.551%, cumulative 46.281% 
* 26 = 1 => occurences 0.265%, cumulative 44.828% 
* 31 = 2 => occurences 0.513%, cumulative 43.846% 
* 32 = 1 => occurences 0.248%, cumulative 42.574% 
* 33 = 1 => occurences 0.24%, cumulative 41.487% 
* 34 = 2 => occurences 0.465%, cumulative 40.698% 
* 35 = 1 => occurences 0.225%, cumulative 39.64% 
* 37 = 1 => occurences 0.219%, cumulative 38.731% 
* 39 = 1 => occurences 0.213%, cumulative 37.872% 
* 40 = 1 => occurences 0.207%, cumulative 37.06% 
* 43 = 1 => occurences 0.202%, cumulative 36.29% 
* 46 = 1 => occurences 0.196%, cumulative 35.56% 
* 51 = 14 => occurences 2.682%, cumulative 37.356% 
* 52 = 5 => occurences 0.931%, cumulative 37.244% 
