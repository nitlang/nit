# Local setup of services for tests

Some tests and libs require specific external services like postgres.
To simplify the automation and the setup, we just assume these services are accessible at specific hostnames.

When running and testing nit within a docker, it is easy to compose/link nit with other dockers/services.
See also .gitlab-ci.yml

~~~
$ docker run --link postgres [...]
~~~

When running and testing on a local host, one can setup those services locally then add aliases for localhost in `/etc/hosts`.

~~~
$ cat /etc/hosts
[...]
127.0.0.1 postgres
~~~

An other way is to run/test on a local host and have the services running in dockers.

Because accessing a specific container by its name is cumbersome, a proposed way is to:

* run these services with specific and fixed IPs
* add these IPs to `/etc/hosts`

~~~
$ cd misc/docker/ci-local
$ docker-compose up -d
$ cat /etc/hosts
[...]
172.16.238.4 postgres
~~~
