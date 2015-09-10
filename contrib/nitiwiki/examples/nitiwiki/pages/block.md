# Test of code highlighting

A basic block.

    print(["hello", "world"].join(", "))

A fenced block.

~~~
print(["hello", "world"].join(", "))
~~~

A fenced block with metainfo, so it can be highlighted with an external tool.

~~~html
<table class="hello"><tr>
<td>Hello</td>
<td>World</td>
</tr></table>
~~~

A special block where the rendering is delegated to pandoc.
For instance, to render tables.

~~~pandoc
what     how
------ -----
hello     10
world   9001
~~~

This try some exploit
~~~raw'"; echo pwned >&2 #
Hello<br/>
World
~~~
