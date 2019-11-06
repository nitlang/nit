# Supported tags and respective Dockerfile links

* [latest](https://github.com/nitlang/nit/blob/master/misc/docker/Dockerfile)
* [full](https://github.com/nitlang/nit/blob/master/misc/docker/full/Dockerfile)

## What is Nit?

Nit is an expressive language with a script-like syntax, a friendly type-system and aims at elegance, simplicity and intuitiveness.

Nit has a simple straightforward style and can usually be picked up quickly, particularly by anyone who has programmed before.
While object-oriented, it allows procedural styles.

More information on

* Website <http://www.nitlanguage.org>
* Github <https://github.com/nitlang/nit>
* Chatroom <https://gitter.im/nitlang/nit>

## How to use this image

You can use these images to build then run your programs.

### Experimenting with Nit

~~~
host$ docker run -ti nitlang/nit
root@ce9b671dd9fc:/nit# nitc examples/hello_world.nit
root@ce9b671dd9fc:/nit# ./hello_world
hello world
~~~

### Build and Run Programs

In your Dockerfile, write something like:

~~~Dockerfile
FROM nitlang/nit

# Create a workdir
RUN mkdir -p /work
WORKDIR /work

# Copy the source code in /work/
COPY . /work/

# Compile
RUN nitc src/hello.nit --dir . \
	# Clear disk space
	&& ccache -C
# You can also use a Makefile or any build system you want.

# Run
CMD ["./hello"]
~~~

Then, build and execute

~~~
host$ docker build -t nithello .
host$ docker run --rm nithello
hello!
~~~

See the full example at <https://github.com/nitlang/nit/blob/master/misc/docker/hello/Dockerfile>
