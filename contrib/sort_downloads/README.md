Script to sort content of a folder in many folders according to their names.

This scripts sorts files from a given directory to subfolders in the destination directory. It uses directory names as patterns to sort the files and thus moves each file to a directory with a similar name. Multiple directories may be used to specify the patterns to look for, but the files will only be copied to subfolders in the target directory. This features ensures a clean support for a multi-disk system.

# Installation and usage

If you're lucky enough to have a Nit interpreter, directly run `src/sort_downloads.nit`.

Otherwise, compile with `make` and run with `bin/sort_downloads`.

Check `sort_downloads --help` for command line options.

# Configuration

The main configuration is in the header of `sort_downloads.nit`, in the config class. You may modify it as you need. Notice that the `~` is supported.

You can also have alternative configurations by adding another Nit module, refining the Config class and calling super as main. See the scenario "Sort only older files" for an example.

# Scenarios

Here are some usage scenario.

## Music downloads

You download all of your music to the `~/Downloads` directory but want to sort them in the subfolders of `~/Music`. You must first make sure that there are the appropriate folders in the `~/Music` directory, probably one per artist. Then modify the Config class in `sort_downloads.nit` with something like this:

    class Config
	    var source_dir = "~/Downloads/"
	    var dest_dir = "~/Music/"
	    var regex_source_dirs: Array[String] = ["~/Music/"]
	    var elapsed_days = 0
    end

## New hard drive

Your old hard drive is full and you bought a new one. You now want to copy your music only on the new hard drive without having to recreate all the folders. You can still use the old folders as a reference for patterns and only copy to the new hard drive. Modify the Config class like so:

    class Config
	    var source_dir = "~/Downloads/"
	    var dest_dir = "/media/new-drive/Music/"
	    var regex_source_dirs: Array[String] = ["~/Music/", dest_dir] # here we use the local variable dest_dir
	    var elapsed_days = 0
    end

## Multiple configurations, sort videos

If you need more than one configuration, let's say to sort videos, you can use Nit class refinement. Create a separate Nit module next to `src/sort_downloads.nit` named `sort_videos.nit` and use something like:

~~~nitish
#!/usr/bin/env nit

import sort_downloads

redef class Config
	redef fun source_dir do return "/media/new-drive/video-downloads"
	redef fun dest_dir do return "/media/new-drive/Videos"
	redef fun regex_source_dirs do return ["~/Videos", dest_dir]
	redef fun elapsed_days do return 0
end

super # this executes the program
~~~

## Sort only older files

You want to automate the process with a cron entry, but still want to have your files available in the download directory for a few days. You can use the `elapsed_days` attribute of the Config class. When set to 7, only files that have not been modified for 7 days will be sorted and moved.

# Author and license

Created by Alexis Laferrière

Licensed under the Apache License Version 2.0
