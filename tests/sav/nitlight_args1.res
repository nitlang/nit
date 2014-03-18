<span class="nitcode"><span class="nc_c"># This file is part of NIT ( http://www.nitlanguage.org ).
</span><span class="nc_c">#
</span><span class="nc_c"># Copyright 2006-2008 Jean Privat &lt;jean@pryen.org&gt;
</span><span class="nc_c">#
</span><span class="nc_c"># Licensed under the Apache License, Version 2.0 (the &quot;License&quot;);
</span><span class="nc_c"># you may not use this file except in compliance with the License.
</span><span class="nc_c"># You may obtain a copy of the License at
</span><span class="nc_c">#
</span><span class="nc_c">#     http://www.apache.org/licenses/LICENSE-2.0
</span><span class="nc_c">#
</span><span class="nc_c"># Unless required by applicable law or agreed to in writing, software
</span><span class="nc_c"># distributed under the License is distributed on an &quot;AS IS&quot; BASIS,
</span><span class="nc_c"># WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
</span><span class="nc_c"># See the License for the specific language governing permissions and
</span><span class="nc_c"># limitations under the License.
</span>
<span class="nc_k">import</span> <span class="nc_k">end</span><span class="nc_cdef"><a id="base_simple3#Object"></a>

<span class="nc_k">interface</span> <span class="nc_def nc_t" title="base_simple3::Object">Object</span>
<span class="nc_k">end</span></span><span class="nc_cdef"><a id="base_simple3#Bool"></a>

<span class="nc_k">enum</span> <span class="nc_def nc_t" title="base_simple3::Bool">Bool</span>
<span class="nc_k">end</span></span><span class="nc_cdef"><a id="base_simple3#Int"></a>

<span class="nc_k">enum</span> <span class="nc_def nc_t" title="base_simple3::Int">Int</span><span class="nc_pdef"><a id="base_simple3#Int#output"></a>
	<span class="nc_k">fun</span> <span class="nc_def" title="base_simple3::Int::output"><span class="nc_i">output</span></span></span> <span class="nc_k">is</span> <span class="nc_k">intern</span>
<span class="nc_k">end</span></span><span class="nc_cdef"><a id="base_simple3#A"></a>

<span class="nc_k">class</span> <span class="nc_def nc_t" title="base_simple3::A">A</span><span class="nc_pdef"><a id="base_simple3#A#init"></a>
	<span class="nc_k">init</span> <span class="nc_k">do</span> <span class="nc_l">5</span><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#Int#output"><span class="nc_i" title="base_simple3#Int#output">output</span></a></span><span class="nc_pdef"><a id="base_simple3#A#run"></a>
	<span class="nc_k">fun</span> <span class="nc_def" title="base_simple3::A::run"><span class="nc_i">run</span></span> <span class="nc_k">do</span> <span class="nc_l">6</span><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#Int#output"><span class="nc_i" title="base_simple3#Int#output">output</span></a></span>
<span class="nc_k">end</span></span><span class="nc_cdef"><a id="base_simple3#B"></a>

<span class="nc_k">class</span> <span class="nc_def nc_t" title="base_simple3::B">B</span><span class="nc_pdef"><a id="base_simple3#B#@val"></a><a id="base_simple3#B#val"></a><a id="base_simple3#B#val="></a>
	<span class="nc_k">var</span> <span class="nc_def nc_i" title="base_simple3::B::val">val</span>: <a href="base_simple3.html#base_simple3#Int"><span class="nc_t" title="base_simple3::Int">Int</span></a></span><span class="nc_pdef"><a id="base_simple3#B#init"></a>
	<span class="nc_k">init</span>(<span class="nc_v nc_i" title="v: Int">v</span>: <a href="base_simple3.html#base_simple3#Int"><span class="nc_t" title="base_simple3::Int">Int</span></a>)
	<span class="nc_k">do</span>
		<span class="nc_l">7</span><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#Int#output"><span class="nc_i" title="base_simple3#Int#output">output</span></a>
		<span class="nc_k">self</span><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#B#val="><span class="nc_i" title="base_simple3#B#val=(val: Int)">val</span></a> = <span class="nc_v nc_i" title="v: Int">v</span>
	<span class="nc_k">end</span></span><span class="nc_pdef"><a id="base_simple3#B#run"></a>
	<span class="nc_k">fun</span> <span class="nc_def" title="base_simple3::B::run"><span class="nc_i">run</span></span> <span class="nc_k">do</span> <a href="base_simple3.html#base_simple3#B#val"><span class="nc_i" title="base_simple3#B#val: Int">val</span></a><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#Int#output"><span class="nc_i" title="base_simple3#Int#output">output</span></a></span>
<span class="nc_k">end</span></span><span class="nc_cdef"><a id="base_simple3#C"></a>

<span class="nc_k">class</span> <span class="nc_def nc_t" title="base_simple3::C">C</span><span class="nc_pdef"><a id="base_simple3#C#@val1"></a><a id="base_simple3#C#val1"></a><a id="base_simple3#C#val1="></a>
	<span class="nc_k">var</span> <span class="nc_def nc_i" title="base_simple3::C::val1">val1</span>: <a href="base_simple3.html#base_simple3#Int"><span class="nc_t" title="base_simple3::Int">Int</span></a></span><span class="nc_pdef"><a id="base_simple3#C#@val2"></a><a id="base_simple3#C#val2"></a><a id="base_simple3#C#val2="></a>
	<span class="nc_k">var</span> <span class="nc_def nc_i" title="base_simple3::C::val2">val2</span>: <a href="base_simple3.html#base_simple3#Int"><span class="nc_t" title="base_simple3::Int">Int</span></a> = <span class="nc_l">10</span></span>
<span class="nc_k">end</span></span><span class="nc_pdef"><a id="base_simple3#Object#foo"></a>

<span class="nc_k">fun</span> <span class="nc_def" title="base_simple3::Object::foo"><span class="nc_i">foo</span></span> <span class="nc_k">do</span> <span class="nc_l">2</span><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#Int#output"><span class="nc_i" title="base_simple3#Int#output">output</span></a></span><span class="nc_pdef"><a id="base_simple3#Object#bar"></a>
<span class="nc_k">fun</span> <span class="nc_def" title="base_simple3::Object::bar"><span class="nc_i">bar</span></span>(<span class="nc_v nc_i" title="i: Int">i</span>: <a href="base_simple3.html#base_simple3#Int"><span class="nc_t" title="base_simple3::Int">Int</span></a>) <span class="nc_k">do</span> <span class="nc_v nc_i" title="i: Int">i</span><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#Int#output"><span class="nc_i" title="base_simple3#Int#output">output</span></a></span><span class="nc_pdef"><a id="base_simple3#Object#baz"></a>
<span class="nc_k">fun</span> <span class="nc_def" title="base_simple3::Object::baz"><span class="nc_i">baz</span></span>: <a href="base_simple3.html#base_simple3#Int"><span class="nc_t" title="base_simple3::Int">Int</span></a> <span class="nc_k">do</span> <span class="nc_k">return</span> <span class="nc_l">4</span></span>

<span class="nc_pdef"><a id="base_simple3#Sys#main"></a><span class="nc_l">1</span><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#Int#output"><span class="nc_i" title="base_simple3#Int#output">output</span></a>
<a href="base_simple3.html#base_simple3#Object#foo"><span class="nc_i" title="base_simple3#Object#foo">foo</span></a>
<a href="base_simple3.html#base_simple3#Object#bar"><span class="nc_i" title="base_simple3#Object#bar(i: Int)">bar</span></a>(<span class="nc_l">3</span>)
<a href="base_simple3.html#base_simple3#Object#baz"><span class="nc_i" title="base_simple3#Object#baz: Int">baz</span></a><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#Int#output"><span class="nc_i" title="base_simple3#Int#output">output</span></a>

<span class="nc_k">var</span> <span class="nc_v nc_i" title="a: A">a</span> = <span class="nc_k">new</span> <a href="base_simple3.html#base_simple3#A"><span class="nc_t" title="base_simple3::A">A</span></a>
<span class="nc_v nc_i" title="a: A">a</span><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#A#run"><span class="nc_i" title="base_simple3#A#run">run</span></a>

<span class="nc_k">var</span> <span class="nc_v nc_i" title="b: B">b</span> = <span class="nc_k">new</span> <a href="base_simple3.html#base_simple3#B"><span class="nc_t" title="base_simple3::B">B</span></a>(<span class="nc_l">8</span>)
<span class="nc_v nc_i" title="b: B">b</span><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#B#run"><span class="nc_i" title="base_simple3#B#run">run</span></a>

<span class="nc_k">var</span> <span class="nc_v nc_i" title="c: C">c</span> = <span class="nc_k">new</span> <a href="base_simple3.html#base_simple3#C"><span class="nc_t" title="base_simple3::C">C</span></a>(<span class="nc_l">9</span>)
<span class="nc_v nc_i" title="c: C">c</span><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#C#val1"><span class="nc_i" title="base_simple3#C#val1: Int">val1</span></a><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#Int#output"><span class="nc_i" title="base_simple3#Int#output">output</span></a>
<span class="nc_v nc_i" title="c: C">c</span><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#C#val2"><span class="nc_i" title="base_simple3#C#val2: Int">val2</span></a><span class="nc_o">.</span><a href="base_simple3.html#base_simple3#Int#output"><span class="nc_i" title="base_simple3#Int#output">output</span></a></span>
</span>