# This file is part of NIT ( http://www.nitlanguage.org ).
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
# limitations under the License

# Contains the main components of a webpage for Opportunity
module boilerplate

import template

# Header for a Opportunity page
class OpportunityHeader
	super Template

	# Javascript code that is included in the `OpportunityPage`
	var page_js = "" is writable

	redef fun rendering do
		add """
<!DOCTYPE html>
<html>
<head>
	<title>Opportunity - The meetup planner</title>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
	<script src="//ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js"></script>
	<script src="//netdna.bootstrapcdn.com/bootstrap/3.0.0/js/bootstrap.min.js"></script>
	<script>
		{{{page_js}}}
	</script>
	<style>
		.menu {
			background-color: #0d8921;
			background-repeat: repeat-x;
			color: white;
		}
		.navbar-brand{
			color: white;
		}
		.navbar-brand:hover{
			color: #EEEEEE;
		}
		.navbar-nav{
			color: white;
		}
		.navbar-nav: hover{
			background-color: #0d8921;
			color: white;
		}
		.answer:hover {
			cursor:pointer;
		}
		.opportunity-action:hover {
			cursor:pointer;
		}
	</style>
</head>
<body>
<nav class="menu" role="navigation">
	<div class="container">
		<div class="navbar-header">
			<a class="navbar-brand" href="./" >Opportunity</a>
		</div>
	</div>
</nav>
<div class="container">
"""
	end

end

# Footer for a Opportunity page
class OpportunityFooter
	super Template

	redef fun rendering do
		add """
</div>
</body>
<div class="footer">
	<div class="well well-sm">
		<p class="text-muted text-center">
			Opportunity, the meetup planner.
		</p>
		<p class="text-muted text-center">
			Proudly powered by <a href="http://nitlanguage.org/">Nit</a>!
		</p>
	</div>
</div>
</html>
"""
	end

end

# Any Opportunity page that contains the header, body and footer.
class OpportunityPage
	super Template

	var header = new OpportunityHeader

	var body: Streamable = "" is writable

	var footer = new OpportunityFooter

	redef fun rendering do
		add header
		add body
		add footer
	end

end
