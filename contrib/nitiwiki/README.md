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

~~~raw
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
~~~

### pages

This is where goes all the content of your wiki.
Nitiwiki will render an article for each markdown file found in `pages`.

You can categorize your content in sections using sub-folders:

~~~raw
pages
|- section1
|	`- index.md
|- section2
|	`- index.md
|- page1.md
|- page2.md
`- index.md
~~~

### assets

This is where you store CSS and JavaScript files used in the design of your site.

You can also use this directory to put some images or other files that will be
used in all your pages.

~~~raw
assets
|- css
|- js
`- logo.png
~~~

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

~~~sh
nitiwiki init
~~~

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

#### Write content

Nitiwiki only support content written in
[markdown format](http://daringfireball.net/projects/markdown/).

#### Link wiki articles

In nitiwiki, linking to a section or an article is done using the *wikilinks*.

Wikilinks provide easy linking between pages of the wiki.
To create a wikilink, just put the name of the page to link to in double brackets.
For example `[[WikiLink]]`.

If you ever need to write something like `[[WikiLink]]` without creating a wikilink,
just prefix it with a `\\`, like `\\[[WikiLink]]`.

There are some special linking precedence that come into play when linking between
sections and sub-sections.

Nitiwiki will chose the first entry that match the given wikilinks in that order:
1. Looks in the current section
2. Looks in the current section children recursively
3. Looks in the current section parents until root

To link to or from a subpage, you can use a regular wikilink that does not
contain the name of the parent directory of the subpage.
Nikiwiki descends the directory hierarchy looking for a page that matches your link.

For example, if `FooBar/SubPage` links to `OtherPage`, nikiwiki will first prefer
pointing the link to `FooBar/SubPage/OtherPage` if it exists, next to
`FooBar/OtherPage` and finally to `OtherPage` in the root of the wiki.

You can also specify a link that contains a relative section name,
like `FooBar/OtherPage` to specify what page to link to.

You can also use `/` at the start of a link, to specify exactly which page to link to,
when there are multiple pages with similar names and the link goes to the wrong page by default.
For example, linking from `FooBar/SubPage` to `/OtherPage` will link to the `OtherPage`
in the root of the wiki, even if there is a `FooBar/OtherPage`.

It's also possible to write a wikilink that uses something other than the page
name as the link text.
For example `[[Contact|Contact me!]]` links to the `Contact` page, but the link
will appear like this: `Contact me!`.

You can link to an anchor inside a page, using something like `[[WikiLink#foo]]`.

#### Trails of Pages

Wikilinks, with the directive `trail`, will register the target page as an element of a trail.
Each `trail` are chained together and will display navigational link `prev` for the previous page of the trail, `next` for the next page of the trail and `up` to go to the pages that has used the `trail` wikilink.

For instance, if the page `doc.md` has the following content:

~~~md
To use nitiwiki, first [[trail: install|install it]],
then [[trail: simple_wiki|create a first wiki]].

You can also do advanced things like:

* [[trail: github|editing pages with github]]
* [[trail: templating| adapting the templates]]
~~~

A trail will be made and will consist of the sequence of pages `install`, `simple_wiki`, `github` and `templating`.
On each one of these pages, there will be links for the previous page, the next page and the `doc.md` page.

If a page includes trail wikilinks and is also the target for trail wikilinks, then the two trails are merged and pages will be visitable in a depth-first order.
This nesting of trails can be used to have sections and sub-sections.

#### Render the wiki in HTML

Once you have done your changes, use:

~~~sh
nitiwiki --status
~~~

This will show the impacts of your changes on the wiki structure.

Then type:

~~~sh
nitiwiki --render
~~~

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

Additional macros can be used in specialized templates.

### Main template

The template file `template.html` represents the overall structure of your wiki pages.

~~~html
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
			%TRAIL%
			%BODY%
			%TRAIL%
			%FOOTER%
		</div>
	</body>
</html>
~~~

Additionnal macros:

* `HEADER`: Wiki header (see [Header template](#Header_template))
* `FOOTER`: Wiki footer (see [Footer template](#Footer_template))
* `TOP_MENU`: Wiki top menu (see [Topmenu template](#Topmenu_template))
* `HEADER`: Wiki header (see [Header template](#Header_template))
* `BODY`: Wiki body content
* `TRAIL`: content of the trail navigational links, if any (see [Trails of Pages](#Trails_of_Pages))

### Header template

The template file `header.html` is generated on top of all the wiki pages.

~~~html
<header>
	<a href="#"><img src="%ROOT_URL%/%LOGO%" alt="logo"/></a>
	<h2>%SUBTITLE%</h2>
	<h1>%TITLE%</h1>
</header>
~~~

### Footer template

The template file `footer.html` is generated on the bottom of all the wiki pages.

~~~html
<footer>
	<p>%TITLE% &copy; %YEAR%</p>
	<p>last modification %GEN_TIME%</p>
</footer>
~~~

Additionnal macros:

* `YEAR`: Current year
* `GEN_TIME`: Page generation date

### Topmenu template

The template file `menu.html` contains the menu structure generated on all your pages.

Its content can be static:

~~~html
<nav class="menu">
	<ul class="nav navbar-nav">
		<li><a href="#">Home</a></li>
		<li><a href="#">Page1</a></li>
		<li><a href="#">Page2</a></li>
	</ul>
</nav>
~~~

Or dynamic using the macro `MENUS`:

~~~html
<nav class="menu">
	<ul class="nav navbar-nav">
	%MENUS%
	</ul>
</nav>
~~~

## Advanced usages

### Working with git

nitiwiki allows you to store your wiki changes in git.
Using the option `--fetch` will update the local wiki instance
according to git informations found in the config file.

Be sure to set `wiki.git_origin` and `wiki.git_branch`
in order to correctly pull changes.

To automatically update your wiki when changes are pushed on the
origin repository you can use the following command in a git hook:

~~~sh
nitiwiki --fetch --render
~~~

### Working with a remote server

Sometimes you cannot do what you want on your webserver (like setting crons).
For this purpose, nitiwiki provide a quick way to update a distant instance
through `ssh` using `rsync`.

With the option `--rsync`, nitwiki will update a distant location with the
last rendered output. This way you can manually update your webserver
after changes or set a cron on a different server that you can control.

Using the following command in your cron will update the web server instance
from git:

~~~sh
nitiwiki --fetch --render --rsync
~~~

Be sure to set `wiki.rsync_dir` in order to correctly push your changes.
When using `--rsync`, keep in mind that the rendered output must be configured
to work on the web server.

### Serve and edit with nitiwiki_server

nitiwiki_server is a lightweight web server to publish the generated files
and accept modifications from a web form.

The binary available in `bin/nitiwiki_server` is configured for simple usage or demo.
The source of the server, at `src/wiki_edit`, can be tweaked for more advanced use.
It is also possible to import the source and add an instance of `EditAction` to a custom nitcorn server.

To launch the server, change directory to the root of the wiki and run `nitiwiki_server`.
It uses `config.ini` from the local directory and listen on localhost:8080.
The template should define the macro `%EDIT%` and `config.ini` should define `wiki.edit=/edit/`.
To limit who can edit the wiki, list the md5 sum of accepted passwords (one per line) in the local file `passwords`.
