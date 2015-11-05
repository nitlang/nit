// This file is part of NIT ( http://www.nitlanguage.org )
//
// Copyright 2014 Johan Kayser <kayser.johan@gmail.com>
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Checks that the text in the input is numeric and not null
// and then if two currencies where chosen sends a dictionary to Nit.
$( "#button" ).click(function() {
	$("#pre-input").removeClass("has-error");
	if (($('#input').val() == "")||($.isNumeric($('#input').val()) == false)) {
		$("#pre-input").addClass("has-error");
	}
	else
	{
		if (($('#from').val() != null) && ($('#to').val() != null)) {
			var dictionary = {
				value: parseFloat($('#input').val()).toFixed(2),
				from: $('#from').val(),
				to: $('#to').val(),
			}
			converterModule.postMessage(dictionary);
		}
	}
});
