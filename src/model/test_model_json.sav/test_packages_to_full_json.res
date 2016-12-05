{
	"name": "test_prog",
	"class_name": "MPackage",
	"full_name": "test_prog",
	"mdoc": {
		"content": "Test program for model tools.\n\nThis program creates a fake model that can be used to test tools like:\n\n* `nitdoc`\n* `nitmetrics`\n* `nitx`\n* or others `modelbuilder`.\n\nAn image:\n\n![Tinks3D](../../contrib/tinks/doc/tinks3d.png)",
		"location": {
			"column_end": 0,
			"column_start": 0,
			"line_end": 12,
			"line_start": 1,
			"file": "test_location"
		}
	},
	"visibility": "public",
	"modifiers": ["package"],
	"location": {
		"column_end": 0,
		"column_start": 0,
		"line_end": 0,
		"line_start": 0,
		"file": "test_location"
	},
	"root": {
		"full_name": "test_prog>"
	},
	"mgroups": [{
		"full_name": "test_prog>game>"
	}, {
		"full_name": "test_prog>platform>"
	}, {
		"full_name": "test_prog>rpg>"
	}, {
		"full_name": "test_prog>"
	}],
	"ini": {
		"upstream.issues": "https://github.com/nitlang/nit/issues",
		"upstream.homepage": "http://nitlanguage.org",
		"upstream.git.directory": "tests/test_prog",
		"upstream.browse": "https://github.com/nitlang/nit/tree/master/tests/test_prog",
		"source.exclude": "game/excluded.nit:game/excluded_dir",
		"package.license": "Apache-2.0",
		"package.more_contributors": "Riri <riri@example.com>, Fifi (http://www.example.com/~fifi), Loulou",
		"package.maintainer": "John Doe <jdoe@example.com> (http://www.example.com/~jdoe), Spider-Man",
		"package.tags": "test,game",
		"package.version": "0.1",
		"package.name": "test_prog"
	}
}
{
	"name": "excluded",
	"class_name": "MPackage",
	"full_name": "excluded",
	"mdoc": null,
	"visibility": "public",
	"modifiers": ["package"],
	"location": {
		"column_end": 0,
		"column_start": 0,
		"line_end": 0,
		"line_start": 0,
		"file": "test_location"
	},
	"root": {
		"full_name": "excluded>"
	},
	"mgroups": [{
		"full_name": "excluded>"
	}]
}
