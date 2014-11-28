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
.nitcode .foldable { display: block } /* for block productions*/
.nitcode .line{ display: block } /* for lines */
.nitcode .line:hover{ background-color: #FFFFE0; } /* current line */
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
</head><body><h3 id='test_doc2'>module test_doc2</h1><h5 id='test_doc2#Object#foo1'>prop test_doc2#Object#foo1</h3><div class="nitdoc"><p class="synopsys">Test code</p><pre class="nitcode"><span class="nitcode"><span class="line" id="L1"><span class="nc_k">assert</span> <span class="nc_k">true</span> <span># tested
</span></span><span class="line" id="L2"><span></span></span></span></pre></div><h5 id='test_doc2#Object#foo2'>prop test_doc2#Object#foo2</h3><div class="nitdoc"><p class="synopsys">Test code</p><pre class="nitcode"><span class="nitcode"><span class="line" id="L1"><span class="nc_k">assert</span> <span class="nc_k">true</span> <span># tested
</span></span><span class="line" id="L2"><span></span></span></span></pre></div><h5 id='test_doc2#Object#foo3'>prop test_doc2#Object#foo3</h3><div class="nitdoc"><p class="synopsys">Test code</p><pre class="nitcode"><span class="nitcode"><span class="line" id="L1"><span class="nc_k">assert</span> <span class="nc_k">true</span> <span># tested
</span></span><span class="line" id="L2"><span></span></span></span></pre></div><h5 id='test_doc2#Object#foo4'>prop test_doc2#Object#foo4</h3><div class="nitdoc"><p class="synopsys">Test code</p><pre class="rawcode">assert false # not tested (and not highlighted)
</pre></div><h5 id='test_doc2#Object#foo5'>prop test_doc2#Object#foo5</h3><div class="nitdoc"><p class="synopsys">Test code</p><pre class="nitcode"><span class="nitcode"><span class="line" id="L1"><span class="nc_k">assert</span> <span class="nc_k">false</span> <span># not tested (but highlighted)
</span></span><span class="line" id="L2"><span></span></span></span></pre></div><script src="http://code.jquery.com/jquery-1.11.0.min.js"></script>
<script src="http://netdna.bootstrapcdn.com/bootstrap/3.1.1/js/bootstrap.min.js"></script>
<script>$(".popupable").popover({html:true, placement:'top'})/*initialize bootstrap popover*/</script></body></html>