Sample portable 3D app implemented with the gamnit depth framework

This application uses the _depth_ framework to load and display 3D models.
It also applies the _flat_ framework to display the static UI elements (like the "Next model" label).

The pretty earth model (`GlobeModel`) is implemented by a material with a custom graphical program.
It renders the earth with an displaced surface, a cloud layer, city lights and Phong lighting effects on the water.

# Variations

* For the desktop, the application is compiled to `bin/model_viewer`.

	This variation can show more models specified on the command line.

	~~~raw
	bin/model_viewer [path_to_model ...]
	~~~

* For Android, the standard application is compiled to `bin/model_viewer.apk`.
* The virtual reality variant `bin/model_viewer_vr.apk` targets Android and uses Google Cardboard for head tracking.

# Art

* 3D models `Tree_01` and `Oak_Fall_01` were created by Kenney.nl and published under CC0.
* 3D model `Quandtum_BA-2_v1_1` was created by Quandtum and published under CC0.
* Some textures on the `Quandtum_BA-2_v1_1` model have been created with images from goodtextures.com.
  These images can be used in free softwares, some restrictions still applies for modifications and other uses.
* Globe textures credit: NASA, Visible Earth
