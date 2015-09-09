Hello world !
Usage of Strings:

Allocations, by type:
		
	-FlatString = 32
	-FlatBuffer = 2
	-Concat = 0
	-RopeBuffer = 0

Calls to length, by type:
	FlatString = 36 (cache misses 8, 22.22%)
	FlatBuffer = 4
Indexed accesses, by type:
	FlatString = 17
Calls to bytelen for each type:
	FlatString = 70
Calls to position for each type:
	FlatString = 35
Calls to bytepos for each type:
	FlatString = 18
Calls to first_byte on FlatString 153
Calls to last_byte on FlatString 103
FlatStrings allocated with length 81 (85.417%)
Length of travel for index distribution:
* null = 20 => occurences 83.333%, cumulative 83.333% 
* 1 = 8 => occurences 21.053%, cumulative 73.684% 
Byte length of the FlatStrings created:
* null = 6 => occurences 4.286%, cumulative 4.286% 
* 1 = 25 => occurences 16.234%, cumulative 20.13% 
* 2 = 31 => occurences 18.452%, cumulative 36.905% 
* 3 = 30 => occurences 16.393%, cumulative 50.273% 
* 4 = 4 => occurences 2.02%, cumulative 48.485% 
* 5 = 19 => occurences 8.92%, cumulative 53.991% 
* 6 = 26 => occurences 11.404%, cumulative 61.842% 
* 9 = 1 => occurences 0.412%, cumulative 58.436% 
* 10 = 10 => occurences 3.876%, cumulative 58.915% 
* 11 = 2 => occurences 0.733%, cumulative 56.41% 
* 12 = 1 => occurences 0.348%, cumulative 54.007% 
* 13 = 1 => occurences 0.333%, cumulative 52.0% 
* 14 = 1 => occurences 0.319%, cumulative 50.16% 
* 15 = 6 => occurences 1.84%, cumulative 50.0% 
* 16 = 7 => occurences 2.053%, cumulative 49.853% 
* 17 = 1 => occurences 0.281%, cumulative 48.034% 
* 25 = 2 => occurences 0.542%, cumulative 46.883% 
* 26 = 1 => occurences 0.261%, cumulative 45.431% 
* 31 = 2 => occurences 0.505%, cumulative 44.444% 
* 32 = 1 => occurences 0.244%, cumulative 43.171% 
* 33 = 1 => occurences 0.236%, cumulative 42.08% 
* 34 = 2 => occurences 0.459%, cumulative 41.284% 
* 36 = 1 => occurences 0.222%, cumulative 40.222% 
* 37 = 1 => occurences 0.216%, cumulative 39.309% 
* 39 = 1 => occurences 0.21%, cumulative 38.445% 
* 40 = 1 => occurences 0.204%, cumulative 37.628% 
* 43 = 1 => occurences 0.199%, cumulative 36.853% 
* 46 = 1 => occurences 0.194%, cumulative 36.117% 
* 51 = 15 => occurences 2.841%, cumulative 38.068% 
* 55 = 1 => occurences 0.184%, cumulative 37.201% 
