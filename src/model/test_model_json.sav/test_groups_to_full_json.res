{
	"name": "test_prog",
	"class_name": "MGroup",
	"full_name": "test_prog>",
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
	"modifiers": ["group"],
	"location": {
		"column_end": 0,
		"column_start": 0,
		"line_end": 0,
		"line_start": 0,
		"file": "test_location"
	},
	"is_root": true,
	"mpackage": {
		"full_name": "test_prog"
	},
	"default_mmodule": {
		"full_name": "test_prog::test_prog"
	},
	"parent": null,
	"mmodules": [{
		"full_name": "test_prog::test_prog"
	}],
	"mgroups": [{
		"full_name": "test_prog>examples>"
	}, {
		"full_name": "test_prog>game>"
	}, {
		"full_name": "test_prog>platform>"
	}, {
		"full_name": "test_prog>rpg>"
	}]
}
{
	"name": "examples",
	"class_name": "MGroup",
	"full_name": "test_prog>examples>",
	"mdoc": null,
	"visibility": "public",
	"modifiers": ["group"],
	"location": {
		"column_end": 0,
		"column_start": 0,
		"line_end": 0,
		"line_start": 0,
		"file": "test_location"
	},
	"is_root": false,
	"mpackage": {
		"full_name": "test_prog"
	},
	"default_mmodule": null,
	"parent": {
		"full_name": "test_prog>"
	},
	"mmodules": [{
		"full_name": "test_prog::game_examples"
	}],
	"mgroups": []
}
{
	"name": "game",
	"class_name": "MGroup",
	"full_name": "test_prog>game>",
	"mdoc": {
		"content": "Gaming group",
		"location": {
			"column_end": 0,
			"column_start": 0,
			"line_end": 1,
			"line_start": 1,
			"file": "test_location"
		}
	},
	"visibility": "public",
	"modifiers": ["group"],
	"location": {
		"column_end": 0,
		"column_start": 0,
		"line_end": 0,
		"line_start": 0,
		"file": "test_location"
	},
	"is_root": false,
	"mpackage": {
		"full_name": "test_prog"
	},
	"default_mmodule": {
		"full_name": "test_prog::game"
	},
	"parent": {
		"full_name": "test_prog>"
	},
	"mmodules": [{
		"full_name": "test_prog::game"
	}],
	"mgroups": []
}
{
	"name": "platform",
	"class_name": "MGroup",
	"full_name": "test_prog>platform>",
	"mdoc": {
		"content": "Fictive Crappy Platform.",
		"location": {
			"column_end": 0,
			"column_start": 0,
			"line_end": 1,
			"line_start": 1,
			"file": "test_location"
		}
	},
	"visibility": "public",
	"modifiers": ["group"],
	"location": {
		"column_end": 0,
		"column_start": 0,
		"line_end": 0,
		"line_start": 0,
		"file": "test_location"
	},
	"is_root": false,
	"mpackage": {
		"full_name": "test_prog"
	},
	"default_mmodule": {
		"full_name": "test_prog::platform"
	},
	"parent": {
		"full_name": "test_prog>"
	},
	"mmodules": [{
		"full_name": "test_prog::platform"
	}],
	"mgroups": []
}
{
	"name": "rpg",
	"class_name": "MGroup",
	"full_name": "test_prog>rpg>",
	"mdoc": {
		"content": "Role Playing Game group",
		"location": {
			"column_end": 0,
			"column_start": 0,
			"line_end": 1,
			"line_start": 1,
			"file": "test_location"
		}
	},
	"visibility": "public",
	"modifiers": ["group"],
	"location": {
		"column_end": 0,
		"column_start": 0,
		"line_end": 0,
		"line_start": 0,
		"file": "test_location"
	},
	"is_root": false,
	"mpackage": {
		"full_name": "test_prog"
	},
	"default_mmodule": {
		"full_name": "test_prog::rpg"
	},
	"parent": {
		"full_name": "test_prog>"
	},
	"mmodules": [{
		"full_name": "test_prog::careers"
	}, {
		"full_name": "test_prog::character"
	}, {
		"full_name": "test_prog::combat"
	}, {
		"full_name": "test_prog::races"
	}, {
		"full_name": "test_prog::rpg"
	}],
	"mgroups": []
}
{
	"name": "excluded",
	"class_name": "MGroup",
	"full_name": "excluded>",
	"mdoc": null,
	"visibility": "public",
	"modifiers": ["group"],
	"location": {
		"column_end": 0,
		"column_start": 0,
		"line_end": 0,
		"line_start": 0,
		"file": "test_location"
	},
	"is_root": true,
	"mpackage": {
		"full_name": "excluded"
	},
	"default_mmodule": {
		"full_name": "excluded::excluded"
	},
	"parent": null,
	"mmodules": [{
		"full_name": "excluded::excluded"
	}],
	"mgroups": []
}
