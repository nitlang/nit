# NAME

nitweb - provide a web API to nit model and source code.


# SYNOPSIS

nitweb [*options*] FILE...


# DESCRIPTION

`nitweb` use `nitcorn` actions to provide an API to loaded model and source code.

Usage:

~~~sh
nitweb --host localhost --port 3000 lib/core/
~~~

### `GET /` HOME
Show the home page of the webserver.
Display all the loaded model entities in a tree.

### `GET /search/:namespace` SEARCH BY NAMESPACE
Search all model entities matching `namespace`.

It is possible to retrieve the result as a JsonArray instead of raw html
using the uri param `json=true` (default `false`).

### `GET /code/:namespace` SHOW SOURCE CODE
Display the source code of the entity matching `namespace`.

### `GET /doc/:namespace` DOCUMENTATION PAGE
Display a short documentation page about the entity matching `namespace`.

### `GET /random/` RANDOM LIST
Display a random list of entities found in the model.

The list is parametrable with the following uri params:
* `n=10` size of the list (default `10`)
* `k=modules` kind of entities in the list (default `modules`)

It is possible to retrieve the result as a JsonArray instead of raw html
using the uri param `json=true` (default `false`).

# OPTIONS

### `--host`
Host to bind the server on.

### `--port`
Port number to use.

### `-h`, `-?`, `--help`
Show Help (the list of options).

# SEE ALSO

* nitcorn
* nitdoc
