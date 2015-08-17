# NAME

nitdbg_client - network client for remote debugging.

# SYNOPSIS

nitdbg_client [*options*]...

# DESCRIPTION

`nitdbg_client` connects to a `nit` debugger server and controls it.

See the interpreter command `nit(1)` for details about remote debugging.

# OPTIONS

### `--host`
Sets the host to debug from, use IPV4 only. (Defaults to 127.0.0.1).

### `--port`
Sets the debug port (Defaults to 22125).

Must be contained between 0 and 65535

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
