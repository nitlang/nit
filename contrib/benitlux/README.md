An unofficial app and mailing list to keep faithful bargoers informed of the beers available at the excellent Brasserie Bénélux.

This project is composed of three softwares:

* A mobile app and social network,
* a server with a RESTful API for the mobile app and a web interface to subscribe to the mailing list
* and a daily background program which updates the DB and send emails.

The mobile app is available on the Nit F-Droid repository, see http://nitlanguage.org/fdroid.
The web interface is currently published at http://benitlux.xymus.net.

# Compile and execute

First, choose a server and set the `SERVER` environment variable accordingly.
It can be localhost, a local development server or the official server.

* `SERVER` defaults to `localhost:8080`.
  This is enough to test running the server and the GNU/Linux client on the same machine.

* Set `SERVER=192.168.0.1` or to your IP to quickly setup a development server.
  This allows you to work and test both the clients and the server.

* Set `SERVER=benitlux.xymus.net` to use the official server, it should work with all clients.
  It is not advised to use the official server with unstable clients.

## Mobile client

Build and run on GNU/Linux with `make bin/benitlux && bin/benitlux`

Build and install for Android with: `make bin/benitlux.apk && adb install -rd bin/benitlux.apk`

Build and simulate for iOS with: `make bin/benitlux.app && ios-sim launch bin/benitlux.app`

## Server

Install all required development packages. Under Debian or Ubuntu, you can use: `apt-get install libevent-dev libsqlite3-dev libcurl4-gnutls-dev sendmail`

Compile with: `make`

Launch the daily background program with: `bin/benitlux_daily` (the argument `-e` sends the emails)

Launch the server with: `bin/benitlux_web`

The Web interface will be accessible at <http://localhost:8080/>

# Features and TODO

- [x] Web page parser
- [x] Daily mailer
- [x] Web interface
- [x] Serialization and deserialization of data classes
- [x] Android app
- [x] iOS app
- [ ] Charlevoix location support
- [ ] Authenticate unsubscribe actions over GET
- [x] Social network and location updates
- [ ] Event updates
