# This file is part of NIT (https://nitlanguage.org).
#
# Copyright 2014 Frédéric Vachon <fredvac@gmail.com>
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

# Services allowing to launch activities and start/stop services using
# `android.content.Intent` for the android platform.
#
# By default, API 10 is imported. Import more recent API to suit your needs.
#
# There's two ways of defining which activity/service to be launched :
# * Provide an explicit class to be launched with `set_class_name`
# * Provide a description of the activity to perform and let the system determine the best application to run
#
# To provide a description, you need to assign values using one or more of these
# methods :
# * `action=`
# * `data=`
# * `add_category`
# * `mime_type=`
#
# The Intent class wraps most of the `android.content.Intent` constants and is
# designed to be used with this syntax :
# * Action : `intent_action.main.to_s`
# * Category : `intent_category.home.to_s`
# * Extra : `intent_extra.phone_number.to_s`
# * Flag : `intent_flag.activity_brought_to_front`
#
# For further details about these constants meaning, refer to the official
# android Intent documentation : [[Android Intent documentation|http://developer.android.com/reference/android/content/Intent.html]]
module intent

import intent_api10
