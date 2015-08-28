Dino vs cavemen portable action game where the player plays the dino

# Project Structure

* `game_logic` defines, as its name implies, the full game logic and the basic entities.
* `graphism` defines how the game is drawn on screen with fully portable code.
* `dino` implements the the portable app structure.
* `dino_android` and `dino_linux` adapt the portable game for specific platforms.
* `fancy_dino` is an optional module which tweaks how the dino itself is drawn on screen
  to create the flat rotation effect.
* `splash` defines the splash screen used while the app loads.
