#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Create an HTML table
# SEE: <http://rosettacode.org/wiki/Create_an_HTML_table>

fun html_table(headers: Array[String], values: Array[Array[Int]]): String
do
	var result = "<table><thead><tr>"
	for v in headers do result += "<th>{v}</th>"
	result+="</thead><tbody>"
	for row in values do
		result += "<tr>"
		for value in row do
			result += "<td>{value}</td>"
		end
	end
	result += "</tr></tbody></table>"
	return result
end

print html_table(["","X","Y","Z"],[[10,20,20,10],[15,23,21,23],[12,10,11,9]])
