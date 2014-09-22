This tool downloads files pointed by RSS feeds.

It fetches the content of the RSS feed, then filters it according to custom patterns and to existing folders on disk. Selected elements will be downloaded to the given folder.

This tool must be compiled with its configuration in order to work. See the `sample_config.nit` in `src/`.

# Features and TODO

- [x] Download & parse RSS file
- [x] Generate regular expressions from local folders
- [x] Auto download files matching regular expressions
- [x] Memory to prevent double downloads
- [ ] Blacklist
- [ ] Use a cleaner RSS parser
- [ ] Tolerate more feed formats
