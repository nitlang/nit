The `android` module provides support for the Android platform

# Compilation for Android

The compiler generates an APK file as the output when the `android`
module is imported by the compilation target. The path to the generated
file can be specified using the `-o` and `--dir` options.

# Host system configuration

To compile for Android, you must install the Android SDK and NDK.
The tools `android`, `ndk-build` and `ant` must be in your PATH.

# Configure your Android application

The `app.nit` framework and this project offers some services to
customized the generated Android application.

## Module annotations

* `app_version` specifies the version of the generated APK file.
It takes 3 arguments: the major, minor and revision version numbers.
The special function `git_revision` will use the prefix of the hash of the
latest git commit. The default version is 1.0.

    Example: `app_version(1, 0, git_revision)`

* `app_name` takes a single argument, the visible name of the Android
application. By default, the compiler would use the name of the target
module. This name will be used as the name of the main activity and
as the launcher name.

    Example: `app_name "My App"`

* `java_package` specifies the package used by the generated Java
classes and the APK file. Once the application is published, this
value should not be changed. By default, the compiler will use
the package `org.nitlanguage.{module_name}`.

* Custom information can be added to the Android manifest file
using the annotations `android_manifest`, `android_manifest_application`
and `android_manifest_activity`.

    Example usage to specify an extra permission:

    ~~~
    android_manifest """<uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE"/>"""
    ~~~

* The API version target can be specified with `min_api_version`,
`max_api_version` and `target_api_version`. These take a single
integer as argument. They are applied in the Android manifest as
`minSdkVesion`, `targetSdkVersion` and `maxSdkVersion`.

    See http://developer.android.com/guide/topics/manifest/uses-sdk-element.html

* The annotation `android_activity` defines a Java class used as an
  entrypoint to your application. As of now, this annotation should
  only be used by low level implementations of Nit on Android.
  It's usefulness will be extended in the future to customize user applications.

## Project entry points

Importing `android::landscape` or `android::portrait` locks the generated
application in the specified orientation. This can be useful for games and
other multimedia applications.

# Compilation modes

There are two compilation modes for the Android platform, debug and release.
Theses modes are also applied to the generated Android projects.
The compilation mode is specified as an argument to `nitc`, only
`--release` can be specified as debug is the default behavior.

## Debug mode

Debug mode enables compiling to an APK file without handling signing keys
and their password. The APK file can be installed to a local device with
USB debugging enabled, but it cannot be published on the Play Store.

By default, `nitc` will compile Android applications in debug mode.

## Release mode

Building in release mode will use your private key to sign the
APK file, it can then be published on the Play Store.

1. Have a keystore with a valid key to sign your APK file.

    To create a new keystore, avoid using the default values of `jarsigner`
as they change between versions of the Java SDK. You should instead use a
command similar to the following, replacing `KEYSTORE_PATH` and `KEY_ALIAS`
with the desired values.

    ~~~
    keytool -genkey -keystore KEYSTORE_PATH -alias KEY_ALIAS -sigalg MD5withRSA -keyalg RSA -keysize 1024 -validity 10000
    ~~~

2. Set the environment variables used by `nitc`: `KEYSTORE`, `KEY_ALIAS` and
optionally `TSA_SERVER`. These settings can be set in a startup script such as
`~/.bashrc` or in a local Makefile.

    You can use the following commands by replacing the right hand values
to your own configuration.

    ~~~
    export KEYSTORE=keystore_path
    export KEY_ALIAS=key_alias
    export TSA_SERVER=timestamp_authority_server_url # Optional
    ~~~

3. Call `nitc` with the `--release` options. You will be prompted for the
required passwords as needed by `jarsigner`.
