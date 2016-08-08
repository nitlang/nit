# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>
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

# Configuration file and options for Popcorn apps
#
# `pop_config` provide a configuration framework for Popcorn apps based on ini
# files.
#
# By default `AppConfig` provides `app.host` and `app.port` keys, it's all we
# need to start an app:
#
# ~~~
# import popcorn
# import popcorn::pop_config
#
# # Parse app options
# var opts = new AppOptions.from_args(args)
#
# # Build config from options
# var config = new AppConfig.from_options(opts)
#
# # Use options
# var app = new App
# app.listen(config.app_host, config.app_port)
# ~~~
#
# For more advanced uses, `AppConfig` and `AppOptions` can be specialized to
# offer additional config options:
#
# ~~~
# import popcorn
# import popcorn::pop_config
#
# class MyConfig
#	super AppConfig
#
#	# My secret code I don't want to share in my source repository
#	var secret: String = value_or_default("secret", "my-secret")
#
#	redef init from_options(options) do
#		super
#		if options isa MyOptions then
#			var secret = options.opt_secret.value
#			if secret != null then self["secret"] = secret
#		end
#	end
# end
#
# class MyOptions
#	super AppOptions
#
#	var opt_secret = new OptionString("My secret string", "--secret")
#
#	redef init do
#		super
#		add_option opt_secret
#	end
# end
#
# class SecretHandler
#	super Handler
#
#	# Config to use to access `secret`
#	var config: MyConfig
#
#	redef fun get(req, res) do
#		res.send config.secret
#	end
# end
#
# var opts = new MyOptions.from_args(args)
# var config = new MyConfig.from_options(opts)
#
# var app = new App
# app.use("/secret", new SecretHandler(config))
# app.listen(config.app_host, config.app_port)
# ~~~
module pop_config

import ini
import opts

# Configuration file for Popcorn apps
#
# ~~~
# import popcorn
# import popcorn::pop_config
#
# # Build config from default values
# var config = new AppConfig("app.ini")
#
# # Change config values
# config["app.port"] = 3001.to_s
#
# # Use options
# var app = new App
# app.listen(config.app_host, config.app_port)
# ~~~
class AppConfig
	super ConfigTree

	# Kind of options used by this config
	type OPTIONS: AppOptions

	# Default configuration file path
	var default_config_file: String = "app.ini"

	# Web app host name
	#
	# * key: `app.host`
	# * default: `localhost`
	var app_host: String is lazy do return value_or_default("app.host", "localhost")

	# Web app port
	#
	# * key: `app.port`
	# * default: `3000`
	var app_port: Int is lazy do return value_or_default("app.port", "3000").to_i

	# Init `self` from a `AppOptions` option values
	init from_options(opts: OPTIONS) do
		init(opts.opt_config.value or else default_config_file)
		var opt_host = opts.opt_host.value
		if opt_host != null then self["app.host"] = opt_host
		var opt_port = opts.opt_port.value
		if opt_port > 0 then self["app.port"] = opt_port.to_s
	end

	# Return the registered value for `key` or `default`
	protected fun value_or_default(key: String, default: String): String do
		return self[key] or else default
	end
end

# Options configuration for Popcorn apps
#
# Use the `AppOptions` class in your app to parse command line args:
# ~~~
# import popcorn
# import popcorn::pop_config
#
# # Parse app options
# var opts = new AppOptions.from_args(args)
#
# # Build config from options
# var config = new AppConfig.from_options(opts)
#
# # Use options
# var app = new App
# app.listen(config.app_host, config.app_port)
# ~~~
class AppOptions
	super OptionContext

	# Help option.
	var opt_help = new OptionBool("Show this help message", "-h", "--help")

	# Path to app config file.
	var opt_config = new OptionString("Path to app config file", "--config")

	# Host name to bind on (will overwrite the config one).
	var opt_host = new OptionString("Host to bind the server on", "--host")

	# Port number to bind on (will overwrite the config one).
	var opt_port = new OptionInt("Port number to use", -1, "--port")

	# You should redefined this method to add your options
	init do
		super
		add_option(opt_help, opt_config, opt_host, opt_port)
	end

	# Initialize `self` and parse `args`
	init from_args(args: Collection[String]) do
		init
		parse(args)
	end
end
