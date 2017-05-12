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

# Popcorn threaded tasks
#
# Tasks allow you to execute code in another thread than the app listening loop.
# Useful when you want to run some tasks periodically.
#
# Let's say you want to purge the `downloads/` directory of your app every hour:
#
# ~~~nitish
# class PurgeTask
#	super PopTask
#
#	var dir: String
#
#	redef fun main do
#		loop
#			dir.rmdir
#			3600.sleep
#		end
#	end
# end
#
# var app = new App
#
# # Register a new task
# app.register_task(new PurgeTask("downloads/"))
#
# # Add your handlers
# # app.use('/', new MyHandler)
#
# # Run the tasks
# app.run_tasks
#
# # Start the app
# app.listen("0.0.0.0", 3000)
# ~~~
module pop_tasks

import pop_handlers
import pthreads

# An abstract Popcorn task
#
# Redefine the `main` method to do something
#
# TODO provide a CRON-like syntax like SpringBoot?
abstract class PopTask
	super Thread

	redef fun main do return null
end

redef class App

	# Tasks to run
	var tasks = new Array[PopTask]

	# Register a new task in `self`
	fun register_task(task: PopTask) do tasks.add task

	# Run all registered tasks
	fun run_tasks do for task in tasks do task.start
end
