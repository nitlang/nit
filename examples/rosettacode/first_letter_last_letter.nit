#!/usr/bin/env nit
#
# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain

# Task: Last letter-first letter
# SEE: <http://rosettacode.org/wiki/Last letter-first letter>
module first_letter_last_letter

fun search(words: String): Array[String]
do
	var list = words.split("[ \n]".to_re)
	var res = search_2(new Array[String], list)
	return res
end

fun search_2(state, remain: Array[String]): Array[String]
do
	if remain.is_empty then return state
	var last
	var res = state
	if state.is_empty then last = null else last = state.last.chars.last
	for word in remain do
		if last != null and word.chars.first != last then continue
		var new_state = state + [word]
		var new_remain = remain.clone
		new_remain.remove(word)
		var sub_res = search_2(new_state, new_remain)
		if sub_res.length > res.length then
			res = sub_res
		end
	end
	return res
end

var words = """audino bagon baltoy banette bidoof braviary
bronzor carracosta charmeleon cresselia croagunk darmanitan deino
emboar emolga exeggcute gabite girafarig gulpin haxorus heatmor
heatran ivysaur jellicent jumpluff kangaskhan kricketune landorus
ledyba loudred lumineon lunatone machamp magnezone mamoswine nosepass
petilil pidgeotto pikachu pinsir poliwrath poochyena porygon2
porygonz registeel relicanth remoraid rufflet sableye scolipede
scrafty seaking sealeo silcoon simisear snivy snorlax spoink starly
tirtouga trapinch treecko tyrogue vigoroth vulpix wailord wartortle
whismur wingull yamask"""
print search(words).join("\n")
