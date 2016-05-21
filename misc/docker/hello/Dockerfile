FROM nitlang/nit

# Create a workdir
RUN mkdir -p /root/work
WORKDIR /root/work

# Copy the source code in /root/work/
COPY . /root/work/

# Compile
RUN nitc src/hello.nit --dir . \
        # Clear disk space
        && ccache -C
# You can also use a Makefile or what you want

# Say what to run
CMD ["./hello"]
