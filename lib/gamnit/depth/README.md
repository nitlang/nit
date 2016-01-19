gamnit depth, a framework to create portable 3D games in Nit.

This framework is based on a list of `Actor`, in `app::actors`, which are drawn to the screen at each frame. Each actor is composed of a model and other information specific to this instance: position in the world, rotation and scaling. Each `Model` is either a composite of models or it is composed of a `Mesh` defining its geometry and a `Material` defining how to draw the model. `Material` can be subclassed to use custom shaders.

# Assets

gamnit depth is built upon to portability framework _app.nit_ which provides a simple system to package and use asset files. Every file in the `assets/` folder at the root of a projet is packaged with the program at compilation for mobiles devices. These files can be loaded during execution using the many subclasses of `Asset`.

~~~
var my_texture = new Texture("textures/texture.png")
var my_sound = new Sound("sounds/my_sound.mp3")
var my_model = new Model("models/my_model.obj")
var my_text = new TextAsset("simple_text_file.txt")
~~~

# In relation to gamnit _flat_

gamnit flat is a framework for 2D games based on simple sprites and two drawing contexts: UI and world.

The UI context works well with _depth_. It should be used to display simple 2D UI elements and to create menus with ease.

However, the world context is difficultly compatible with _depth_. Only the `world_camera` from the _flat_ framework is used to display the world objects in the _depth_ framework as well.

# Examples

Take a look at the `model_viewer` project for a basic usage of the _depth_ framework combined with the _flat_ framework for the UI. Becaus of its simple goal, this projet has no game logic and only manipulates graphical objects. This projet is located in the `contrib` folder of the Nit repository.
