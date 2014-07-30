The nitcorn Web server framework creates server-side Web apps in Nit

# Examples

Want to see `nitcorn` in action? Examples are available at ../../examples/nitcorn/src/.

# Features and TODO list

 - [x] Virtual hosts and routes
 - [x] Configuration change on the fly
 - [x] Sessions
 - [x] Reading cookies
 - [ ] Full cookie support
 - [ ] Close interfaces on the fly
 - [ ] Better logging
 - [ ] Info/status page
 - [ ] `ProxyAction` to redirect a request to an external server
 - [ ] `ModuleAction` which forwards the request to an independant Nit program

## Bugs / Limitations

* The size of requests is limited, so no big uploads

# Credits

This nitcorn library is a fork from an independant project originally created in 2013 by
Jean-Philippe Caissy, Guillaume Auger, Frederic Sevillano, Justin Michaud-Ouellette,
Stephan Michaud and Maxime Bélanger.

It has been adapted to a library, and is currently maintained, by Alexis Laferrière.
