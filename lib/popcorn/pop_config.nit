# This file is part of NIT ( https://nitlanguage.org ).
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
# # Build config from options
# var config = new AppConfig
# config.parse_options(args)
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
#	fun secret: String do return opt_secret.value or else ini["secret"] or else "my-secret"
#
#	# opt --secret
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
# var config = new MyConfig
# config.parse_options(args)
#
# var app = new App
# app.use("/secret", new SecretHandler(config))
# app.listen(config.app_host, config.app_port)
# ~~~
module pop_config

import config

# Configuration file for Popcorn apps
#
# ~~~
# import popcorn
# import popcorn::pop_config
#
# # Build config from default values
# var config = new AppConfig
# config.parse_options(args)
#
# # Change config values
# config.ini["app.port"] = 3001.to_s
#
# # Use options
# var app = new App
# app.listen(config.app_host, config.app_port)
# ~~~
class AppConfig
	super IniConfig

	redef var default_config_file: String = "app.ini"

	# Host name to bind on (will overwrite the config one).
	var opt_host = new OptionString("Host to bind the server on", "--host")

	# Web app host name
	#
	# * key: `app.host`
	# * default: `localhost`
	fun app_host: String do return opt_host.value or else ini["app.host"] or else "localhost"

	# Port number to bind on (will overwrite the config one).
	var opt_port = new OptionInt("Port number to use", -1, "--port")

	# Web app port
	#
	# * key: `app.port`
	# * default: `3000`
	fun app_port: Int do
		var opt = opt_port.value
		if opt > -1 then return opt
		var val = ini["app.port"]
		if val != null then return val.to_i
		return 3000
	end

	# Displayed host name
	#
	# Specify this option if you need a qualified hostname to use within your handlers
	# and `app_host` requires something else like an IP to bind.
	# Really useful if the popcorn app runs behind a proxy.
	#
	# Default is `"{app_host}:{app_port}"`
	var opt_hostname = new OptionString("Displayed host name", "--hostname")

	# Displayed host name config
	#
	# * key: `app.hostname`
	# * default: `"{app_host}:{app_port}"`
	fun app_hostname: String do
		var opt = opt_hostname.value
		if opt != null then return opt
		var cfg = ini["app.hostname"]
		if cfg != null then return cfg
		var res = app_host
		if app_port != 80 then res = "{res}:{app_port}"
		return res
	end

	init do
		super
		add_option(opt_host, opt_port, opt_hostname)
	end
end
