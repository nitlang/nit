<html><head>
		<meta charset="utf-8">
		<title>file base_simple3.nit</title>			<style type="text/css">
			.nitcode a { color: inherit; cursor:pointer; }
.nitcode .titled:hover { text-decoration: underline; } /* underline titles */
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
			<link rel="stylesheet" href="http://netdna.bootstrapcdn.com/bootstrap/3.1.1/css/bootstrap.min.css">
</head><body><pre class='nit_code'><span class="nitcode"><span class="line" id="L1"><span class="nc_c"># This file is part of NIT ( http:&#47;&#47;www.nitlanguage.org ).
</span></span><span class="line" id="L2"><span class="nc_c">#
</span></span><span class="line" id="L3"><span class="nc_c"># Copyright 2006-2008 Jean Privat &lt;jean@pryen.org&gt;
</span></span><span class="line" id="L4"><span class="nc_c">#
</span></span><span class="line" id="L5"><span class="nc_c"># Licensed under the Apache License, Version 2.0 (the &#34;License&#34;);
</span></span><span class="line" id="L6"><span class="nc_c"># you may not use this file except in compliance with the License.
</span></span><span class="line" id="L7"><span class="nc_c"># You may obtain a copy of the License at
</span></span><span class="line" id="L8"><span class="nc_c">#
</span></span><span class="line" id="L9"><span class="nc_c">#     http:&#47;&#47;www.apache.org&#47;licenses&#47;LICENSE-2.0
</span></span><span class="line" id="L10"><span class="nc_c">#
</span></span><span class="line" id="L11"><span class="nc_c"># Unless required by applicable law or agreed to in writing, software
</span></span><span class="line" id="L12"><span class="nc_c"># distributed under the License is distributed on an &#34;AS IS&#34; BASIS,
</span></span><span class="line" id="L13"><span class="nc_c"># WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
</span></span><span class="line" id="L14"><span class="nc_c"># See the License for the specific language governing permissions and
</span></span><span class="line" id="L15"><span class="nc_c"># limitations under the License.
</span></span><span class="line" id="L16">
</span><span class="line" id="L17"><span class="nc_k">import</span> <span class="nc_k">end</span>
</span><span class="line" id="L18">
</span><span class="nc_cdef foldable" id="base_simple3$Object"><span class="line" id="L19"><span class="nc_k">interface</span> <a class="titled" href="#base_simple3$Object" title="class Object"><span class="nc_t nc_def">Object</span></a>
</span><span class="line" id="L20"><span class="nc_k">end</span>
</span></span><span class="line" id="L21">
</span><span class="nc_cdef foldable" id="base_simple3$Bool"><span class="line" id="L22"><span class="nc_k">enum</span> <a class="titled" href="#base_simple3$Bool" title="class Bool"><span class="nc_t nc_def">Bool</span></a>
</span><span class="line" id="L23"><span class="nc_k">end</span>
</span></span><span class="line" id="L24">
</span><span class="nc_cdef foldable" id="base_simple3$Int"><span class="line" id="L25"><span class="nc_k">enum</span> <a class="titled" href="#base_simple3$Int" title="class Int"><span class="nc_t nc_def">Int</span></a>
</span><span class="nc_pdef foldable" id="base_simple3$Int$output"><span class="line" id="L26">	<span class="nc_k">fun</span> <a class="titled" href="#base_simple3$Int$output" title="base_simple3$Int$output"><span class="nc_def"></span><span class="nc_i">output</span></a> <span class="nc_k">is</span> <span class="nc_i">intern</span>
</span></span><span class="line" id="L27"><span class="nc_k">end</span>
</span></span><span class="line" id="L28">
</span><span class="nc_cdef foldable" id="base_simple3$A"><span class="line" id="L29"><span class="nc_k">class</span> <a class="titled" href="#base_simple3$A" title="class A"><span class="nc_t nc_def">A</span></a>
</span><span class="nc_pdef foldable" id="base_simple3$A$init"><span class="line" id="L30">	<span class="nc_k">init</span> <span class="nc_k">do</span> <a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_l">5</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span>.</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span class="nc_i">output</span></a>
</span></span><span class="nc_pdef foldable" id="base_simple3$A$run"><span class="line" id="L31">	<span class="nc_k">fun</span> <a class="titled" href="#base_simple3$A$run" title="base_simple3$A$run"><span class="nc_def"></span><span class="nc_i">run</span></a> <span class="nc_k">do</span> <a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_l">6</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span>.</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span class="nc_i">output</span></a>
</span></span><span class="line" id="L32"><span class="nc_k">end</span>
</span></span><span class="line" id="L33">
</span><span class="nc_cdef foldable" id="base_simple3$B"><span class="line" id="L34"><span class="nc_k">class</span> <a class="titled" href="#base_simple3$B" title="class B"><span class="nc_t nc_def">B</span></a>
</span><span class="nc_pdef foldable" id="base_simple3$B$_val"><a id="base_simple3$B$val"></a><a id="base_simple3$B$val="></a><span class="line" id="L35">	<span class="nc_k">var</span> <a class="titled" href="#base_simple3$B$val" title="base_simple3$B$val"><span class="nc_i nc_def">val</span></a><span>:</span> <a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_t">Int</span></a>
</span></span><span class="nc_pdef foldable" id="base_simple3$B$init"><span class="line" id="L36">	<span class="nc_k popupable" style="border-bottom: solid 2px red" title="Messages" data-content="&lt;div&gt;&lt;div class=&#34;dropdown&#34;&gt; &lt;a data-toggle=&#34;dropdown&#34; href=&#34;#&#34;&gt;&lt;b&gt;1 message(s)&lt;&#47;b&gt; &lt;span class=&#34;caret&#34;&gt;&lt;&#47;span&gt;&lt;&#47;a&gt;&lt;ul class=&#34;dropdown-menu&#34; role=&#34;menu&#34; aria-labelledby=&#34;dLabel&#34;&gt;&lt;li&gt;Warning: init with signature in base_simple3$B&lt;&#47;li&gt;&lt;&#47;ul&gt;&lt;&#47;div&gt;&lt;&#47;div&gt;" data-toggle="popover">init</span><span>(</span><span class="nc_i nc_v titled" title="v: Int">v</span><span>:</span> <a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_t">Int</span></a><span>)</span>
</span><span class="line" id="L37">	<span class="nc_k">do</span>
</span><span class="line" id="L38">		<a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_l">7</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span>.</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span class="nc_i">output</span></a>
</span><span class="line" id="L39">		<a class="titled" href="#base_simple3$B" title="B"><span class="nc_k">self</span></a><a class="titled" href="#base_simple3$B$val=" title="call base_simple3$B$val="><span>.</span></a><a class="titled" href="#base_simple3$B$val=" title="call base_simple3$B$val="><span class="nc_i">val</span></a> <a class="titled" href="#base_simple3$B$val=" title="call base_simple3$B$val="><span>=</span></a> <span class="nc_i nc_v titled" title="v: Int">v</span>
</span><span class="line" id="L40">	<span class="nc_k">end</span>
</span></span><span class="nc_pdef foldable" id="base_simple3$B$run"><span class="line" id="L41">	<span class="nc_k">fun</span> <a class="titled" href="#base_simple3$B$run" title="base_simple3$B$run"><span class="nc_def"></span><span class="nc_i">run</span></a> <span class="nc_k">do</span> <a class="titled" href="#base_simple3$B$val" title="call base_simple3$B$val"><span class="nc_i">val</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span>.</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span class="nc_i">output</span></a>
</span></span><span class="line" id="L42"><span class="nc_k">end</span>
</span></span><span class="line" id="L43">
</span><span class="nc_cdef foldable" id="base_simple3$C"><span class="line" id="L44"><span class="nc_k">class</span> <a class="titled" href="#base_simple3$C" title="class C"><span class="nc_t nc_def">C</span></a>
</span><span class="nc_pdef foldable" id="base_simple3$C$_val1"><a id="base_simple3$C$val1"></a><a id="base_simple3$C$val1="></a><span class="line" id="L45">	<span class="nc_k">var</span> <a class="titled" href="#base_simple3$C$val1" title="base_simple3$C$val1"><span class="nc_i nc_def">val1</span></a><span>:</span> <a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_t">Int</span></a>
</span></span><span class="nc_pdef foldable" id="base_simple3$C$_val2"><a id="base_simple3$C$val2"></a><a id="base_simple3$C$val2="></a><span class="line" id="L46">	<span class="nc_k">var</span> <a class="titled" href="#base_simple3$C$val2" title="base_simple3$C$val2"><span class="nc_i nc_def">val2</span></a><span>:</span> <a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_t">Int</span></a> <span>=</span> <a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_l">10</span></a>
</span></span><span class="line" id="L47"><span class="nc_k">end</span>
</span></span><span class="line" id="L48">
</span><span class="nc_pdef foldable" id="base_simple3$Sys$foo"><span class="line" id="L49"><span class="nc_k">fun</span> <a class="titled" href="#base_simple3$Sys$foo" title="base_simple3$Sys$foo"><span class="nc_def"></span><span class="nc_i">foo</span></a> <span class="nc_k">do</span> <a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_l">2</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span>.</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span class="nc_i">output</span></a>
</span></span><span class="nc_pdef foldable" id="base_simple3$Sys$bar"><span class="line" id="L50"><span class="nc_k">fun</span> <a class="titled" href="#base_simple3$Sys$bar" title="base_simple3$Sys$bar"><span class="nc_def"></span><span class="nc_i">bar</span></a><span>(</span><span class="nc_i nc_v titled" title="i: Int">i</span><span>:</span> <a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_t">Int</span></a><span>)</span> <span class="nc_k">do</span> <span class="nc_i nc_v titled" title="i: Int">i</span><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span>.</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span class="nc_i">output</span></a>
</span></span><span class="nc_pdef foldable" id="base_simple3$Sys$baz"><span class="line" id="L51"><span class="nc_k">fun</span> <a class="titled" href="#base_simple3$Sys$baz" title="base_simple3$Sys$baz"><span class="nc_def"></span><span class="nc_i">baz</span></a><span>:</span> <a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_t">Int</span></a> <span class="nc_k">do</span> <span class="nc_k">return</span> <a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_l">4</span></a>
</span></span><span class="line" id="L52">
</span><span class="nc_pdef foldable" id="base_simple3$Sys$main"><span class="line" id="L53"><a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_l">1</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span>.</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span class="nc_i">output</span></a>
</span><span class="line" id="L54"><a class="titled" href="#base_simple3$Sys$foo" title="call base_simple3$Sys$foo"><span class="nc_i">foo</span></a>
</span><span class="line" id="L55"><a class="titled" href="#base_simple3$Sys$bar" title="call base_simple3$Sys$bar"><span class="nc_i">bar</span></a><span>(</span><a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_l">3</span></a><span>)</span>
</span><span class="line" id="L56"><a class="titled" href="#base_simple3$Sys$baz" title="call base_simple3$Sys$baz"><span class="nc_i">baz</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span>.</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span class="nc_i">output</span></a>
</span><span class="line" id="L57">
</span><span class="line" id="L58"><span class="nc_k">var</span> <span class="nc_i nc_v titled" title="a: A">a</span> <span>=</span> <a class="titled" href="#base_simple3$A$init" title="call base_simple3$A$init"><span class="nc_k">new</span></a> <a class="titled" href="#base_simple3$A" title="A"><span class="nc_t">A</span></a>
</span><span class="line" id="L59"><span class="nc_i nc_v titled" title="a: A">a</span><a class="titled" href="#base_simple3$A$run" title="call base_simple3$A$run"><span>.</span></a><a class="titled" href="#base_simple3$A$run" title="call base_simple3$A$run"><span class="nc_i">run</span></a>
</span><span class="line" id="L60">
</span><span class="line" id="L61"><span class="nc_k">var</span> <span class="nc_i nc_v titled" title="b: B">b</span> <span>=</span> <a class="titled" href="#base_simple3$B$init" title="call base_simple3$B$init"><span class="nc_k">new</span></a> <a class="titled" href="#base_simple3$B" title="B"><span class="nc_t">B</span></a><span>(</span><a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_l">8</span></a><span>)</span>
</span><span class="line" id="L62"><span class="nc_i nc_v titled" title="b: B">b</span><a class="titled" href="#base_simple3$B$run" title="call base_simple3$B$run"><span>.</span></a><a class="titled" href="#base_simple3$B$run" title="call base_simple3$B$run"><span class="nc_i">run</span></a>
</span><span class="line" id="L63">
</span><span class="line" id="L64"><span class="nc_k">var</span> <span class="nc_i nc_v titled" title="c: C">c</span> <span>=</span> <a class="titled" href="#base_simple3$C$init" title="call base_simple3$C$init"><span class="nc_k">new</span></a> <a class="titled" href="#base_simple3$C" title="C"><span class="nc_t">C</span></a><span>(</span><a class="titled" href="#base_simple3$Int" title="Int"><span class="nc_l">9</span></a><span>)</span>
</span><span class="line" id="L65"><span class="nc_i nc_v titled" title="c: C">c</span><a class="titled" href="#base_simple3$C$val1" title="call base_simple3$C$val1"><span>.</span></a><a class="titled" href="#base_simple3$C$val1" title="call base_simple3$C$val1"><span class="nc_i">val1</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span>.</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span class="nc_i">output</span></a>
</span><span class="line" id="L66"><span class="nc_i nc_v titled" title="c: C">c</span><a class="titled" href="#base_simple3$C$val2" title="call base_simple3$C$val2"><span>.</span></a><a class="titled" href="#base_simple3$C$val2" title="call base_simple3$C$val2"><span class="nc_i">val2</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span>.</span></a><a class="titled" href="#base_simple3$Int$output" title="call base_simple3$Int$output"><span class="nc_i">output</span></a>
</span></span></span></pre><script src="http://code.jquery.com/jquery-1.11.0.min.js"></script>
<script src="http://netdna.bootstrapcdn.com/bootstrap/3.1.1/js/bootstrap.min.js"></script>
<script>$(".popupable").popover({html:true, placement:'top'})/*initialize bootstrap popover*/</script></body></html>