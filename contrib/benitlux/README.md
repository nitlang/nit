Benitlux is an unofficial mailing list to keep faithful bargoers informed of the current beer offer at the excellent Brasserie Bénélux <http://brasseriebenelux.com/>.

This project is composed of two softwares:

* a Web interface to subscribe and unsubscribe,
* and a daily background program which updates the BD and send emails.

The web interface is currently published at <http://benitlux.xymus.net/>

# Compile and execute

Make sure all the required packages are installed. Under Debian or Ubuntu, you can use: `apt-get install libevent-dev libsqlite3-dev libcurl4-gnutls-dev sendmail`

To compile, run: `make`

To launch the daily background program, run: `bin/benitlux_daily` (the argument `-e` activates sending emails)

To launch the Web interface, run: `bin/benitlux_web`

The Web interface will be accessible at <http://localhost:8080/>

# Features and TODO

- [x] Web page parser
- [x] Daily mailer
- [x] Web interface
- [x] Serialization and deserialization of data classes
- [ ] Android app
- [ ] iOS app
- [ ] Charlevoix location support
- [ ] Customize mails (daily, on change, per locations)
- [ ] Authenticate unsubscribe actions over GET
- [ ] Social network and location updates
- [ ] Event updates
