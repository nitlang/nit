<html><head>
<meta charset="utf-8">
<style type="text/css">
code {margin: 0 2px;
padding: 0px 5px;
border: 1px solid #ddd;
background-color: #f8f8f8;
border-radius: 3px;}
pre {
background-color: #f8f8f8;
border: 1px solid #ddd;
font-size: 13px;
line-height: 19px;
overflow: auto;
padding: 6px 6px;
border-radius: 3px;
}
.rawcode[title] {
border-color: red;
}
.nitcode a { color: inherit; text-decoration: inherit; } /* hide links */
.nitcode a:hover { text-decoration: underline; } /* underline links */
.nitcode span[title]:hover { text-decoration: underline; } /* underline titles */
/* lexical raw tokens. independent of usage or semantic: */
.nitcode .nc_c { color: gray; font-style: italic; } /* comment */
.nitcode .nc_d { color: #3D8127; font-style: italic; } /* documentation comments */
.nitcode .nc_k { font-weight: bold; } /* keyword */
.nitcode .nc_o {} /* operator */
.nitcode .nc_i {} /* standard identifier */
.nitcode .nc_t { color: #445588; font-weight: bold; } /* type/class identifier */
.nitcode .nc_a { color: #445588; font-style: italic; } /* old style attribute identifier */
.nitcode .nc_l { color: #009999; } /* char and number literal */
.nitcode .nc_s { color: #8F1546; } /* string literal */
/* syntactic token usage. added because of their position in the AST */
.nitcode .nc_ast { color: blue; } /* assert label */
.nitcode .nc_la { color: blue; } /* break/continue label */
.nitcode .nc_m { color: #445588; } /* module name */
/* syntactic groups */
.nitcode .nc_def { font-weight: bold; color: blue; } /* name used in a definition */
  .nitcode .nc_def.nc_a { color: blue; } /* name used in a attribute definition */
  .nitcode .nc_def.nc_t { color: blue; } /* name used in a class or vt definition */
.nitcode .nc_ss { color: #9E6BEB; } /* superstrings */
.nitcode .nc_cdef {} /* A whole class definition */
.nitcode .nc_pdef {} /* A whole property definition */
/* semantic token usage */
.nitcode .nc_v { font-style: italic; } /* local variable or parameter */
.nitcode .nc_vt { font-style: italic; } /* virtual type or formal type */

.nitcode .nc_error { border: 1px red solid;} /* not used */

</style>
</head><body>
<a id='test_doc'></a><h1>module test_doc</h1><a id='test_doc::A'></a><h2>class test_doc#A</h2><div class="nitdoc"><p class="synopsys">Synopsys</p><p>Paragraph
same paragraph</p><p>Other paragraph with <code class="nitcode"><span class="nitcode"><span class="nc_i">code</span></span></code></p><ul><li>bullet</li><li>other buller</li><li>last
but long
bullet</li></ul><pre class="nitcode"><span class="nitcode"><span class="nc_k"></span><span class="nc_i">some</span>
<span class="nc_i">block</span>
<span class="nc_k"></span>some
block
</span></pre><p>a first example</p><pre class="nitcode"><span class="nitcode"><span class="nc_k"></span><span class="nc_k">assert</span> <span class="nc_l">1</span> <span class="nc_o">+</span> <span class="nc_l">1</span> <span class="nc_o">==</span> <span class="nc_l">2</span>
<span class="nc_k"></span>assert 1 + 1 == 2
</span></pre><p>and a last example to illustrate the <code class="nitcode"><span class="nitcode"><span class="nc_i">to_s</span></span></code> method on <code class="nitcode"><span class="nitcode"><span class="nc_k"></span><span class="nc_v nc_i"></span><span class="nc_t"></span><span class="nc_t">A</span></span></code>.</p><pre class="nitcode"><span class="nitcode"><span class="nc_k"></span><span class="nc_k">var</span> <span class="nc_v nc_i">a</span> = <span class="nc_k">new</span> <span class="nc_t">A</span>
<span class="nc_k">assert</span> <span class="nc_i">a</span><span class="nc_o">.</span><span class="nc_i">to_s</span> <span class="nc_o">==</span> <span class="nc_s">&quot;A&quot;</span>
<span class="nc_k"></span>var a = new A
assert a.to_s == &quot;A&quot;
</span></pre></div></body></html>