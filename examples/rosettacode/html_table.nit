# This file is part of NIT ( http://www.nitlanguage.org )
# This program is public domain
#
# Task: Create HTML tables
# SEE: <http://rosettacode.org/wiki/Create_an_HTML_table>

fun create_table(s: String, ligne:String): String do
	var table = ""
	var columns = get_column(s.split(";"))
	var values = get_ligne(ligne.split(";"))

	table = "<table style=\"text-align:center; border: 1px solid\">{columns}"
	table = table + "\n" + values + "\n</table>"
	return table
end

fun get_ligne(other: Array[String]): String do
	var values = ""
	for x in [0..other.length[ do
		values +=  "<tr>"
		other[x] = other[x].replace('[', "")
		other[x] = other[x].replace(']', "")
		other[x] = other[x].replace(' ', "")
		
		var a = other[x].split(",")
		for y in a do values += "<td>{y}</td>"
		values += "</tr>"
	end
	return values
end

fun get_column(other: Array[String]): String do
	var columns = ""
	for x in other do columns += "<th>{x}</th>"
	return columns
end

create_table("A;B;C;D", "[1,2,3,4]; [5,2,3,8]").write_to_file("table.html")
