# Welcome to NitRPG!

NitRPG is a Role Playing Game that takes place on [GitHub](https://github.com/).

In NitRPG, GitHub users are represented by players that battle on repo for
nitcoins and glory.

## Features

* Auto-update with GitHub hooks
* Display repo statistics
* Display players statsitics
* Repo actions are rewarded by nitcoins
* Players can unlock achievements

## How to install

From the `nit` root:

~~~bash
> cd contrib/nitrpg
> make
~~~

### Configuring the GitHub hook

NitRPG needs you to add a new GitHub hook on your repo to keep the game
`listener` up-to-date automatically.

Hook configuration:

* **Payload URL**: URL and port to the listener (ex: `http://yourdomain.com:8080`)
* **Content type**: `application/json`
* **Wich events**: `Send me everything`

Be sure to set the hook as `Active` in the GitHub admin panel.

### Starting the listener

The `listener` program is used to listen to GitHub hooks and update game data.
It should alwaysd be up if you want your game to be kept up-to-date.

To run the listener:

	./listener <host> <port>

The arguments `host` and `port` must correspond to what you entered in your
GitHub hook settings.

### Starting the web server

The `web` program act as a [nitcorn](http://nitlanguage.org/doc/stdlib/module_nitcorn__nitcorn.html) webserver that display the game results live.

To run the webserver:

	./web <host> <port> <root>

The arguments `host` and `port` must correspond to what you entered in your
GitHub hook settings.
The `root` argument is used to specify the path from the domain url to the
NitRPG root.

For example, if NitRPG is installed in `yourdomain.com/nitrpg`:

	./web localhost 3000 "/nitrpg"

Leave it empty if NitRPG is installed at the root of the domain:

	./web localhost 3000 ""

The webserver can then be accessed at `http://yourdomain.com:3000/nitrpg/`.

## RoadMap

NitRPG stills under heavy development.
Incomming features contain (but are not limited to):

* Periodized stats (weekly, monthly, yearly, overall)
* Display graphs with stats
* More achievements
* Shop: exchange Nitcoins against glorifying items

You can suggest new achievements or ideas in the
[NitRPG RoadMap Issue](https://github.com/privat/nit/issues/1161).
