Opportunity is a web-application written in Nit to plan meetups with people in real-life (or on the internet, why not !).

It runs on Nit's official web server: Nitcorn, available along with the compiler for the language on Github <https://github.com/privat/nit>.

# Compile and execute

To compile the software, make sure you have all the dependencies for the Nit compiler at hand, make the compiler.

In addition to those, you will also need libevent-dev and libsqlite3-dev.

Under Debian or any Debian-based distribution of Linux, you can use apt-get install for those.
If you run an RPM based distribution, yum install should work as well.

For those who run an OSX-based system, macports or brew might have the packages you need to run Opportunity.

There is no support for Windows yet.

Then change directory to Opportunity, and use the command make here as well.

This will make an executable for opportunity in the bin folder that you can run from a terminal as usual.

# Features/TODO

- [x] Creation and visualization of Meetups
- [x] Adding people to meetups
- [x] Change answers
- [ ] Edit an Existing Meetup
- [ ] More security and stability for the software
- [ ] Full support of a REST API for eventual extern clients
- [ ] Maybe support another DB
