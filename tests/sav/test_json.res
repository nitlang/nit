../lib/json/json_reader.nit: In function 'JsonObject_json_to_string___impl':
../lib/json/json_reader.nit:96:11: warning: assignment discards 'const' qualifier from pointer target type [enabled by default]
../lib/json/json_writer.nit: In function 'Map_to_json___impl':
../lib/json/json_writer.nit:34:23: warning: assignment discards 'const' qualifier from pointer target type [enabled by default]
../lib/json/json_writer.nit:36:23: warning: assignment discards 'const' qualifier from pointer target type [enabled by default]
{"int":"1234","float":"0.1234","str":"str","null": null}
{"int":1234,"float":0.123400,"str":"str","null":null}
{
  "int":1234,
  "float":0.123400,
  "str":"str",
  "null":null
}
{"arr":"123","obj":"{"int":"123","float":"-234.449997"}"}
{"arr":[1,2,3],"obj":{"int":123,"float":-234.449997}}
{
  "arr":[
    1,
    2,
    3
  ],
  "obj":{
    "int":123,
    "float":-234.449997
  }
}
{"arr":"12.3str","obj":"{"int":"123","float":"-234.449997"}"}
{"arr":[1,2.300000,null,"str"],"obj":{"int":123,"float":-234.449997}}
{
  "arr":[
    1,
    2.300000,
    null,
    "str"
  ],
  "obj":{
    "int":123,
    "float":-234.449997
  }
}
