Error: cannot find module `sublib/foo`.
Error: cannot find module `foo.nit`.
Error: cannot find module `./foo`.
Error: cannot find module `foo/`.
Error: cannot find module `foo::foo`.
Error: cannot find module `sublib/foo`.
Error: cannot find module `foo.nit`.
Error: cannot find module `./foo`.
Error: cannot find module `foo/`.
Error: cannot find module `foo::foo`.
foo: module?
	module foo::foo at sublib/foo.nit
foo: group?
	nothing
  model: mpackages=1 mmodules=1
  mb: identified modules=1; parsed modules=0
sublib/foo: module?
	nothing
sublib/foo: group?
	nothing
  model: mpackages=1 mmodules=1
  mb: identified modules=1; parsed modules=0
sublib/foo.nit: module?
	module foo::foo at sublib/foo.nit
sublib/foo.nit: group?
	nothing
  model: mpackages=1 mmodules=1
  mb: identified modules=1; parsed modules=0
foo.nit: module?
	nothing
foo.nit: group?
	Error: `sublib/foo.nit` is not a directory.
  model: mpackages=1 mmodules=1
  mb: identified modules=1; parsed modules=0
./foo: module?
	nothing
./foo: group?
	nothing
  model: mpackages=1 mmodules=1
  mb: identified modules=1; parsed modules=0
foo/: module?
	nothing
foo/: group?
	nothing
  model: mpackages=1 mmodules=1
  mb: identified modules=1; parsed modules=0
foo::foo: module?
	nothing
foo::foo: group?
	nothing
  model: mpackages=1 mmodules=1
  mb: identified modules=1; parsed modules=0
scan_full found 2 modules
  model: mpackages=1 mmodules=1
  mb: identified modules=1; parsed modules=0
parse found 1 modules
  model: mpackages=1 mmodules=1
  mb: identified modules=1; parsed modules=1
parse_full found 1 modules
  model: mpackages=1 mmodules=1
  mb: identified modules=1; parsed modules=1
