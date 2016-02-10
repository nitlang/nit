iOS support for _app.nit_

# System configuration

Configure your system for OS X by installing Xcode and brew.
Follow the instructions in `README.md` at the root of the repository.

Optionally, install ios-sim to run compiled apps in the simulator: `brew install ios-sim`

# Compile and run a simple application

Let's use the `hello_ios` example in the folder `lib/ios/examples/`.

Compile with: `nitc hello_world.nit`

Run in the simulator with: `ios-sim hello_world.app`

# Portable calculator application

See the calculator example at `examples/calculator` for a portable application working on GNU/Linux, OS X, iOS and Android.
The iOS version is compiled with `make bin/calculator.app`.
