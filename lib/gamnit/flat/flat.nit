# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Simple API for 2D games, built around `Sprite` and `App::update`
#
# Client programs should implement `App::update` to execute game logic and
# add instances of `Sprite` to `App::sprites` and `App::ui_sprites`.
# At each frame, all sprites are drawn to the screen.
#
# This system relies on two cameras `App::world_camera` and `App::ui_camera`.
#
# * `App::world_camera` applies a perspective effect to draw the game world.
#   This camera is designed to be moved around to see the world as well as to
#   zoom in and out. It is used to position the sprites in `App::sprites`.
#
# * `App::ui_camera` is a simple orthogonal camera to display UI objects.
#   This camera should mostly be still, it can still move for chock effects
#   and the like. It can be used to standardize the size of the UI across
#   devices. It is used to position the sprites in `App::ui_sprites`.
#
# See the sample game at `contrib/asteronits/` and the basic project template
# at `lib/gamnit/examples/template/`.
module flat

import gamnit::flat_core

# Extra optional features
import gamnit::limit_fps
import gamnit::keys
import gamnit::camera_control
import gamnit::tileset
import gamnit::bmfont
import app::audio
