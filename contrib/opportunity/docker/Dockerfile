FROM nitlang/nit
RUN apt-get update && apt-get install gettext libevent-dev libsqlite3-dev -y
WORKDIR /nit/contrib/opportunity
RUN sed -i 's/localhost/0.0.0.0/' src/opportunity_web.nit \
	&& make \
	# Move the database to the directory db. Add a symlink since its name is hard-coded in the application :(
	&& mkdir -p db/ \
	&& touch db/opportunity \
	&& ln -s db/opportunity .
EXPOSE 8080
VOLUME /nit/contrib/opportunity/db/
CMD bin/opportunity_web 0.0.0.0:8080
