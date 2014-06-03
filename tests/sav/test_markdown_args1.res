<html><head>
<meta charset="utf-8">
<link rel="stylesheet" href="http://netdna.bootstrapcdn.com/bootstrap/3.1.1/css/bootstrap.min.css">
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
h5 {font-weight:bold;}
.nitcode a { color: inherit; cursor:pointer; }
.nitcode .popupable:hover { text-decoration: underline; cursor:help; } /* underline titles */
pre.nitcode .foldable { display: block } /* for block productions*/
pre.nitcode .line{ display: block } /* for lines */
pre.nitcode .line:hover{ background-color: #FFFFE0; } /* current line */
.nitcode :target { background-color: #FFF3C2 } /* target highlight*/
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
.popover { max-width: 800px !important; }

</style>
</head><body><h3 id='test_doc'>module test_doc</h1><h4 id='test_doc#A'>class test_doc#A</h2><div class="nitdoc"><p class="synopsys">Synopsys</p><p>Paragraph
same paragraph</p><p>Other paragraph with <code class="nitcode"><span class="nitcode"><span class="line" id="L1"><span class="nc_i">code</span><span></span></span></span></code></p><ul><li>bullet</li><li>other buller</li><li>last
but long
bullet</li></ul><pre class="nitcode"><span class="nitcode"><span class="line" id="L1"><span class="nc_i">some</span>
</span><span class="line" id="L2"><span class="nc_i">block</span>
</span><span class="line" id="L3"><span></span></span></span></pre><p>a first example</p><pre class="nitcode"><span class="nitcode"><span class="line" id="L1"><span class="nc_k">assert</span> <span class="nc_l">1</span> <span class="nc_o">+</span> <span class="nc_l">1</span> <span class="nc_o">==</span> <span class="nc_l">2</span>
</span><span class="line" id="L2"><span></span></span></span></pre><p>and a last example to illustrate the <code class="nitcode"><span class="nitcode"><span class="line" id="L1"><span class="nc_i">to_s</span><span></span></span></span></code> method on <code class="nitcode"><span class="nitcode"><span class="line" id="L1"><span class="nc_t">A</span><span></span></span></span></code>.</p><pre class="nitcode"><span class="nitcode"><span class="line" id="L1"><span class="nc_k">var</span> <span class="nc_i">a</span> <span>=</span> <span class="nc_k">new</span> <span class="nc_t">A</span>
</span><span class="line" id="L2"><span class="nc_k">assert</span> <span class="nc_i">a</span><span>.</span><span class="nc_i">to_s</span> <span class="nc_o">==</span> <span class="nc_s">&quot;A&quot;</span>
</span><span class="line" id="L3"><span></span></span></span></pre></div><script src="http://code.jquery.com/jquery-1.11.0.min.js"></script>
<script src="http://netdna.bootstrapcdn.com/bootstrap/3.1.1/js/bootstrap.min.js"></script>
<script>$(".popupable").popover({html:true, placement:'top'})/*initialize bootstrap popover*/</script></body></html>