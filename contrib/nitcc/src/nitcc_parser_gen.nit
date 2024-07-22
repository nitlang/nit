# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Bootstraping the nitcc parser
#
# Instead of commiting a generated parser on each version,
# this program just generate the nitcc_parser using the API of `grammar`
#
# Pros:
#
#  - no generated file commited
#  - easier to modify and bootstrap
#
# Cons:
#
#  - somewhat dublicate the ful grammar of nitcc
#  - need an ad-hoc lexer (nitcc_lexer0.nit)
#
module nitcc_parser_gen

import lrautomaton

var g = new Gram
var p_gr = new Production("grammar")
var p_lex = new Production("lexer")
var p_exprs = new Production("exprs")
var p_expr = new Production("expression")
var p_re = new Production("re")
var p_re1 = new Production("re1")
var p_re2 = new Production("re2")
var p_re3 = new Production("re3")
var p_text = new Production("text")
var p_par = new Production("parser")
var p_ign = new Production("ignored")
var p_rej = new Production("rejected")
var p_prods = new Production("prods")
var p_prod = new Production("production")
var p_ptrans_o = new Production("ptrans_o")
var p_alts = new Production("alts")
var p_alt = new Production("alternative")
var p_altid_o = new Production("altid_o")
var p_altid = new Production("altident")
var p_elems = new Production("elems")
var p_elem_list = new Production("elem_list")
var p_elem = new Production("elem")
var p_pri = new Production("priority")
g.prods.add_all([p_gr, p_re, p_re1, p_re2, p_re3, p_text, p_lex, p_exprs, p_expr, p_par, p_ign, p_rej, p_prods, p_prod, p_ptrans_o, p_alts, p_alt, p_altid_o, p_altid, p_elems, p_elem_list, p_elem, p_pri])
g.prods.add(new Production("atrans"))
g.prods.add(new Production("elemid"))
g.prods.add(new Production("nelem"))
g.prods.add(new Production("tree_part"))

var t_opar = new Token("opar")
var t_cpar = new Token("cpar")
var t_ocur = new Token("ocur")
var t_ccur = new Token("ccur")
var t_pipe = new Token("pipe")
var t_star = new Token("star")
var t_ques = new Token("ques")
var t_plus = new Token("plus")
var t_minus = new Token("minus")
var t_comma = new Token("comma")
var t_colo = new Token("colo")
var t_semi = new Token("semi")
var t_dot = new Token("dot")
var t_eq = new Token("eq")
var t_arrow = new Token("arrow")
var t_str = new Token("str")
var t_id = new Token("id")
var t_kw = new Token("kw")
var t_any = new Token("any")
var t_end = new Token("end")
var t_and = new Token("and")
var t_except = new Token("except")
var t_shortest = new Token("shortest")
var t_longest = new Token("longest")
var t_prefixes = new Token("prefixes")
var t_ch_dec = new Token("ch_dec")
var t_ch_hex = new Token("ch_hex")
g.tokens.add_all([t_opar,
	t_cpar,
	t_ocur,
	t_ccur,
	t_pipe,
	t_star,
	t_ques,
	t_plus,
	t_minus,
	t_comma,
	t_colo,
	t_semi,
	t_dot,
	t_eq,
	t_arrow,
	t_str,
	t_id,
	t_kw,
	t_any,
	t_end,
	t_and,
	t_except,
	t_shortest,
	t_longest,
	t_prefixes,
	t_ch_dec,
	t_ch_hex])

p_gr.new_alt("gr", t_kw, t_id, t_semi, p_lex, p_par)

p_lex.new_alt("lex", t_kw, p_exprs)

p_exprs.new_alt("exprs_many", p_exprs, p_expr)
p_exprs.new_alt0("exprs_none")

p_expr.new_alt("expr", t_id, t_eq, p_re, t_semi)

p_re.new_alt("re_alter", p_re, t_pipe, p_re1)
p_re.new_alt("re_re2", p_re1)

p_re1.new_alt("re_minus", p_re1, t_minus, p_re2)
p_re1.new_alt("re_except", p_re1, t_and, p_re2)
p_re1.new_alt("re_and", p_re1, t_except, p_re2)
p_re1.new_alt("re_re1", p_re2)

p_re2.new_alt("re_conc", p_re2, p_re3)
p_re2.new_alt("re_re3", p_re3)

p_re3.new_alt("re_star", p_re3, t_star)
p_re3.new_alt("re_ques", p_re3, t_ques)
p_re3.new_alt("re_plus", p_re3, t_plus)
p_re3.new_alt("re_shortest", t_shortest, t_opar, p_re, t_cpar)
p_re3.new_alt("re_longest", t_longest, t_opar, p_re, t_cpar)
p_re3.new_alt("re_prefixes", t_prefixes, t_opar, p_re, t_cpar)
p_re3.new_alt("re_par", t_opar, p_re, t_cpar)
p_re3.new_alt("re_class", p_text, t_dot, t_dot, p_text)
p_re3.new_alt("re_openclass", p_text, t_dot, t_dot, t_dot)
p_re3.new_alt("re_any", t_any)
p_re3.new_alt("re_end", t_end)
p_re3.new_alt("re_id", t_id)
p_re3.new_alt("re_text", p_text)

p_text.new_alt("re_str", t_str)
p_text.new_alt("re_ch_dec", t_ch_dec)
p_text.new_alt("re_ch_hex", t_ch_hex)

p_par.new_alt("par", t_kw, p_ign, p_rej, p_prods)

p_ign.new_alt("ign", t_kw, p_elem_list, t_semi)

p_rej.new_alt("rej", t_kw, p_elem_list, t_semi)

p_prods.new_alt("prods_many", p_prods, p_prod)
p_prods.new_alt0("prods_none")

p_prod.new_alt("prod", t_id, p_ptrans_o, t_eq, p_alts, t_semi)

p_ptrans_o.new_alt("ptrans", t_ocur, t_arrow, t_id, t_ccur)
p_ptrans_o.new_alt0("ptrans_none")

p_alts.new_alt("alts_many", p_alts, t_pipe, p_alt)
p_alts.new_alt("alts_one", p_alt)

p_alt.new_alt("alt", p_altid_o, p_elems)

p_altid_o.new_alt0("altid_o_none")
p_altid_o.new_alt("altid_o_one", p_altid)

p_altid.new_alt("altid", t_ocur, t_id, t_colo, t_ccur)

p_elems.new_alt("elems_many", p_elems, p_elem)
p_elems.new_alt0("elems_none")

p_elem_list.new_alt("elem_list_many", p_elem_list, t_comma, p_elem)
p_elem_list.new_alt("elem_list_one", p_elem)

p_elem.new_alt("elem_id", t_id)
p_elem.new_alt("elem_str", p_text)
p_elem.new_alt("elem_par", t_opar, p_alts, t_cpar)
p_elem.new_alt("elem_star", p_elem, t_star)
p_elem.new_alt("elem_ques", p_elem, t_ques)
p_elem.new_alt("elem_plus", p_elem, t_plus)

p_pri.new_alt0("priority_left").phony = true
p_pri.new_alt0("priority_right").phony = true
p_pri.new_alt0("priority_unary").phony = true

g.prepare_for_automaton
var a = new LALR1Automaton(g)
a.build

print "LR automaton: {a.states.length} states (see nitcc0.lr.dot)"
a.to_dot("nitcc0.lr.dot")

a.gen_to_nit("nitcc_parser.nit", "nitcc")

var f = new FileWriter.open("nitcc_lexer.nit")
f.write("import nitcc_lexer0\n")
f.close
