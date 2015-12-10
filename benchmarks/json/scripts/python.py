import sys
import json

json_data=open(sys.argv[1]).read()
data = json.loads(json_data)
