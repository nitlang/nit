import sys
import csv

lst = list();
with open(sys.argv[1], 'r') as f:
    reader = csv.reader(f, delimiter=':', quoting=csv.QUOTE_NONE)
    for row in reader:
        list.append(lst, row)
