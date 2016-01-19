Portable game and multimedia framework for Nit

This framework is based on the portability framework _app.nit_ and the OpenGL ES 2.0 standard.

It is modular, different parts of the framework are available through different entry points:

* `gamnit` provides low-level abstractions over some services of OpenGL ES 2.0, like textures, shaders and programs.
  It defines the basic methods to implement in order to obtain a working game: `App::frame_core` to update the screen
  and `App::accept_event` to receive user inputs.

* `flat` provides an easy to use API for 2D games based on sprites.
  Clients of this API must redefine `App::update` to update the game logic and fill `App::sprites` with objects to draw.

* `depth` defines an API for 3D games.
  It is based on a list of `actors`, with `Model` composed of `Mesh` and `Material`.

* `cameras` provides cameras classes to produce MVP matrices which can be fed to shaders.

* `limit_fps` redefines existing services of gamnit to limit the framerate to a client-defined value.

* `network` provides a simple communication framework for multiplayer client/server games.
