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
* 0 = 20 => occurences 83.333%, cumulative 83.333% 
* 1 = 8 => occurences 21.053%, cumulative 73.684% 
Byte length of the FlatStrings created:
* 0 = 6 => occurences 4.317%, cumulative 4.317% 
* 1 = 25 => occurences 16.34%, cumulative 20.261% 
* 2 = 31 => occurences 18.563%, cumulative 37.126% 
* 3 = 30 => occurences 16.484%, cumulative 50.549% 
* 4 = 3 => occurences 1.523%, cumulative 48.223% 
* 5 = 20 => occurences 9.434%, cumulative 54.245% 
* 6 = 26 => occurences 11.454%, cumulative 62.115% 
* 9 = 1 => occurences 0.413%, cumulative 58.678% 
* 10 = 10 => occurences 3.891%, cumulative 59.144% 
* 11 = 2 => occurences 0.735%, cumulative 56.618% 
* 12 = 1 => occurences 0.35%, cumulative 54.196% 
* 13 = 1 => occurences 0.334%, cumulative 52.174% 
* 14 = 1 => occurences 0.321%, cumulative 50.321% 
* 15 = 6 => occurences 1.846%, cumulative 50.154% 
* 16 = 7 => occurences 2.059%, cumulative 50.0% 
* 17 = 1 => occurences 0.282%, cumulative 48.169% 
* 25 = 2 => occurences 0.543%, cumulative 47.011% 
* 26 = 1 => occurences 0.262%, cumulative 45.55% 
* 31 = 2 => occurences 0.506%, cumulative 44.557% 
* 32 = 1 => occurences 0.244%, cumulative 43.276% 
* 33 = 1 => occurences 0.237%, cumulative 42.18% 
* 34 = 2 => occurences 0.46%, cumulative 41.379% 
* 36 = 1 => occurences 0.223%, cumulative 40.312% 
* 37 = 1 => occurences 0.216%, cumulative 39.394% 
* 39 = 1 => occurences 0.211%, cumulative 38.526% 
* 40 = 1 => occurences 0.205%, cumulative 37.705% 
* 43 = 1 => occurences 0.2%, cumulative 36.926% 
* 46 = 1 => occurences 0.195%, cumulative 36.187% 
* 51 = 16 => occurences 3.036%, cumulative 38.33% 
* 52 = 5 => occurences 0.923%, cumulative 38.192% 
