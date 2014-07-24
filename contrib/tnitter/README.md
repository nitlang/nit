Tnitter is a Twitter-like micro-blogging platform

# Compile and execute

Make sure all the required packages are installed with: `apt-get install libevent-dev libsqlite3-dev`

To compile, run: `make`

To execute, run: `bin/tnitter`

The Web interface will be accessible at http://localhost:8080/

# Main server

The Tnitter application is deployed with other `nitcorn` projects at http://tnitter.xymus.net/

# Notable implementation details

* Implemented in Nit using the `nitcorn` framework.
* On the server side, besides `nitcorn` it uses the Nit modules `sqlite3`, `md5` and `privileges`
* The client-side UI is implemented with bootstrap 3.0 and jquery 1.11
* Passwords are salted and hashed, but sent in clear text to the server
* Launches on localhost on port 80 if running as root, on 8080 otherwise
