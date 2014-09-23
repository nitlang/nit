# nitiwiki, a simple wiki manager based on markdown.

Basically, nitiwiki compiles a set of markdown files into an HTML wiki.

The wiki content is structured by `sections` represented by the wiki folders. Sections can contain `articles` represented by markdown files.

Features:

* automatic wiki structure from folders hierarchy
* automatic site menu
* automatic sitemap
* automatic summaries
* easy and rapid templating
* customizable section templates and menus
* rsync synchronization
* git synchronization

## Wiki structure

Basic wiki structure:

	root
	|- assets
	|- out
	|- pages
	|- templates
	|	|- footer.html
	|	|- header.html
	|	|- menu.html
	|	`- template.html
	`- config.ini

### pages

This is where goes all the content of your wiki.
Nitiwiki will render an article for each markdown file found in `pages`.

You can categorize your content in sections using sub-folders:

	pages
	|- section1
	|	`- index.md
	|- section2
	|	`- index.md
	|- page1.md
	|- page2.md
	`- index.md

### assets

This is where you store CSS and JavaScript files used in the design of your site.

You can also use this directory to put some images or other files that will be
used in all your pages.

	assets
	|- css
	|- js
	`- logo.png

### templates

This folder contains the templates used to generate the HTML pages of your wiki.

The main template is called `template.html`.
It contains the HTML structure of your pages and some macros that will be replaced
by the wiki articles.

### out

This is where your wiki will be rendered by nitiwiki.
Do not put anything in this folder since it will be overwritten at the
next wiki rendering.

The wiki rendering consists in:

1. copy the `assets` directory to `out`
2. copy attached article files from `pages` to `out`
3. translate markdown files from `pages` to html files in `out`

### config.ini

This is the main config file of your wiki. For more details see [Configure the wiki](#Configure_the_wiki).

## Manage the wiki

### Create a new wiki

Just move to the directory where you want to store your source files and type:

	nitiwiki init

This command will import the base structure of your wiki in the current directory.
At this point nitiwiki has created the main configuration file of your site:
`config.ini`.

### Configure the wiki

All the nitiwiki configuration is done using
[ini files](http://en.wikipedia.org/wiki/INI_file).

The wiki configuration is contained in the `config.ini` file located at the root
directory of your wiki.
This file can be edited to change nitiwiki settings.

Settings:

* `wiki.name`: Displayed name
* `wiki.desc`: Long description
* `wiki.logo`: Logo image url
* `wiki.root_url`: Base url used to resolve links
* `wiki.root_dir`: Absolute path of base directory
* `wiki.source_dir`: Source directory (relative path from `wiki.root_dir`)
* `wiki.out_dir`: Output directory (relative)
* `wiki.assets_dir`: Assets directory (relative)
* `wiki.templates_dir`: Templates directory (relative)
* `wiki.template`: Wiki main template file
* `wiki.header`: Wiki main header template file
* `wiki.footer`: Wiki main footer template file
* `wiki.menu`: Wiki main menu template file
* `wiki.rsync_dir`: Directory used to rsync output
* `wiki.git_origin`: Git origin used to fetch data
* `wiki.git_branch`: Git branch used to fetch data

For more details on each option see `WikiConfig`.

### Add content

To add content in your wiki simply add markdown files (with `.md` extension) into the `pages/` folder.

Once you have done your changes, use:

	nitiwiki --status

This will show the impacts of your changes on the wiki structure.

Then type:

	nitiwiki --render

This will the generate the html output of your new content.
The option `--force` can be used to regenerate all the wiki.
This can be uselful when you perform changes on the template files.

### Configure sections

Section appearance can be customized using config files.

Each section in the `pages/` folder can contain a `config.ini` file.
Options set on a section will be propagated to all its children unless
they have their own config file.

Allowed options are:

* `section.title`: Custom title for this section
* `section.template`: Custom template file
* `section.header`: Custom header template file
* `section.footer`: Custom footer template file
* `section.menu`: Custom menu template file
* `section.is_hidden`: Set this to `true` will hide the section in all menus and
  sitemaps.

## Customize templates

Templating your wiki involves modifying 4 template files:

* `template.html`
* `header.html`
* `footer.html`
* `menu.html`

Each of these file contains an HTML skeletton used by nitiwiki to render your files.
Templates can contains macros marked `%MACRO%` that will be replaced by dynamic content.

Every template can access to:

* `ROOT_URL`: Wiki root url
* `TITLE`: Wiki name
* `SUBTITLE`: Wiki description
* `LOGO`: Wiki logo image path

Additionnal macros can be used in specialized templates.

### Main template

The template file `template.html` represents the overall structure of your wiki pages.

	<!DOCTYPE html>
	<html>
		<head>
			<title>%TITLE%</title>
			<link href="%ROOT_URL%/assets/css/main.css" rel="stylesheet">
		</head>
		<body>
			%HEADER%
			%TOP_MENU%
			<div>
				%BODY%
				%FOOTER%
			</div>
		</body>
	</html>

Additionnal macros:

* `HEADER`: Wiki header (see [Header template](#Header_template))
* `FOOTER`: Wiki footer (see [Footer template](#Footer_template))
* `TOP_MENU`: Wiki top menu (see [Topmenu template](#Topmenu_template))
* `HEADER`: Wiki header (see [Header template](#Header_template))
* `BODY`: Wiki body content

### Header template

The template file `header.html` is generated on top of all the wiki pages.

	<header>
		<a href="#"><img src="%ROOT_URL%/%LOGO%" alt="logo"/></a>
		<h2>%SUBTITLE%</h2>
		<h1>%TITLE%</h1>
	</header>

### Footer template

The template file `footer.html` is generated on the bottom of all the wiki pages.

	<footer>
		<p>%TITLE% &copy; %YEAR%</p>
		<p>last modification %GEN_TIME%</p>
	</footer>

Additionnal macros:

* `YEAR`: Current year
* `GEN_TIME`: Page generation date

### Topmenu template

The template file `menu.html` contains the menu structure generated on all your pages.

Its content can be static:

	<nav class="menu">
		<ul class="nav navbar-nav">
			<li><a href="#">Home</a></li>
			<li><a href="#">Page1</a></li>
			<li><a href="#">Page2</a></li>
		</ul>
	</nav>

Or dynamic using the macro `MENUS`:

	<nav class="menu">
		<ul class="nav navbar-nav">
		%MENUS%
		</ul>
	</nav>

## Advanced usages

### Working with git

nitiwiki allows you to store your wiki changes in git.
Using the option `--fetch` will update the local wiki instance
according to git informations found in the config file.

Be sure to set `wiki.git_origin` and `wiki.git_branch`
in order to correctly pull changes.

To automatically update your wiki when changes are pushed on the
origin repository you can use the following command in a git hook:

	nitiwiki --fetch --render

### Working with a remote server

Sometimes you cannot do what you want on your webserver (like setting crons).
For this purpose, nitiwiki provide a quick way to update a distant instance
through `ssh` using `rsync`.

With the option `--rsync`, nitwiki will update a distant location with the
last rendered output. This way you can manually update your webserver
after changes or set a cron on a different server that you can control.

Using the following command in your cron will update the web server instance
from git:

	nitiwiki --fetch --render --rsync

Be sure to set `wiki.rsync_dir` in order to correctly push your changes.
When using `--rsync`, keep in mind that the rendered output must be configured
to work on the web server and set `wiki.root_url` accordingly.
