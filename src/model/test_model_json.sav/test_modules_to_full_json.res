{
	"name": "excluded",
	"class_name": "MModule",
	"full_name": "excluded::excluded",
	"mdoc": null,
	"visibility": "public",
	"modifiers": ["module"],
	"location": {
		"column_end": 0,
		"column_start": 0,
		"line_end": 0,
		"line_start": 0,
		"file": "test_location"
	},
	"mpackage": {
		"full_name": "excluded"
	},
	"mgroup": {
		"full_name": "excluded>"
	},
	"intro_mclasses": [],
	"mclassdefs": [],
	"intro_mclassdefs": [],
	"redef_mclassdefs": [],
	"imports": []
}
{
	"name": "game",
	"class_name": "MModule",
	"full_name": "test_prog::game",
	"mdoc": {
		"content": "A game abstraction for RPG.",
		"location": {
			"column_end": 0,
			"column_start": 1,
			"line_end": 16,
			"line_start": 15,
			"file": "test_location"
		}
	},
	"visibility": "public",
	"modifiers": ["module"],
	"location": {
		"column_end": 3,
		"column_start": 1,
		"line_end": 45,
		"line_start": 15,
		"file": "test_location"
	},
	"mpackage": {
		"full_name": "test_prog"
	},
	"mgroup": {
		"full_name": "test_prog>game>"
	},
	"intro_mclasses": [{
		"full_name": "test_prog::Game"
	}],
	"mclassdefs": [{
		"full_name": "test_prog$Game"
	}],
	"intro_mclassdefs": [{
		"full_name": "test_prog$Game"
	}],
	"redef_mclassdefs": [],
	"imports": [{
		"full_name": "test_prog::rpg"
	}]
}
{
	"name": "platform",
	"class_name": "MModule",
	"full_name": "test_prog::platform",
	"mdoc": {
		"content": "Declares base types allowed on the platform.",
		"location": {
			"column_end": 0,
			"column_start": 1,
			"line_end": 16,
			"line_start": 15,
			"file": "test_location"
		}
	},
	"visibility": "public",
	"modifiers": ["module"],
	"location": {
		"column_end": 17,
		"column_start": 1,
		"line_end": 59,
		"line_start": 15,
		"file": "test_location"
	},
	"mpackage": {
		"full_name": "test_prog"
	},
	"mgroup": {
		"full_name": "test_prog>platform>"
	},
	"intro_mclasses": [{
		"full_name": "test_prog::Object"
	}, {
		"full_name": "test_prog::Int"
	}, {
		"full_name": "test_prog::Float"
	}, {
		"full_name": "test_prog::Bool"
	}, {
		"full_name": "test_prog::String"
	}, {
		"full_name": "test_prog::List"
	}],
	"mclassdefs": [{
		"full_name": "test_prog$Object"
	}, {
		"full_name": "test_prog$Int"
	}, {
		"full_name": "test_prog$Float"
	}, {
		"full_name": "test_prog$Bool"
	}, {
		"full_name": "test_prog$String"
	}, {
		"full_name": "test_prog$List"
	}],
	"intro_mclassdefs": [{
		"full_name": "test_prog$Object"
	}, {
		"full_name": "test_prog$Int"
	}, {
		"full_name": "test_prog$Float"
	}, {
		"full_name": "test_prog$Bool"
	}, {
		"full_name": "test_prog$String"
	}, {
		"full_name": "test_prog$List"
	}],
	"redef_mclassdefs": [],
	"imports": []
}
{
	"name": "careers",
	"class_name": "MModule",
	"full_name": "test_prog::careers",
	"mdoc": {
		"content": "Careers of the game.\n\nAll characters can have a `Career`.\nA character can also quit its current career and start a new one.\n\nAvailable careers:\n\n * `Warrior`\n * `Magician`\n * `Alcoholic`",
		"location": {
			"column_end": 0,
			"column_start": 1,
			"line_end": 25,
			"line_start": 15,
			"file": "test_location"
		}
	},
	"visibility": "public",
	"modifiers": ["module"],
	"location": {
		"column_end": 3,
		"column_start": 1,
		"line_end": 69,
		"line_start": 15,
		"file": "test_location"
	},
	"mpackage": {
		"full_name": "test_prog"
	},
	"mgroup": {
		"full_name": "test_prog>rpg>"
	},
	"intro_mclasses": [{
		"full_name": "test_prog::Career"
	}, {
		"full_name": "test_prog::Warrior"
	}, {
		"full_name": "test_prog::Magician"
	}, {
		"full_name": "test_prog::Alcoholic"
	}],
	"mclassdefs": [{
		"full_name": "test_prog$Career"
	}, {
		"full_name": "test_prog$Warrior"
	}, {
		"full_name": "test_prog$Magician"
	}, {
		"full_name": "test_prog$Alcoholic"
	}],
	"intro_mclassdefs": [{
		"full_name": "test_prog$Career"
	}, {
		"full_name": "test_prog$Warrior"
	}, {
		"full_name": "test_prog$Magician"
	}, {
		"full_name": "test_prog$Alcoholic"
	}],
	"redef_mclassdefs": [],
	"imports": [{
		"full_name": "test_prog::platform"
	}]
}
{
	"name": "character",
	"class_name": "MModule",
	"full_name": "test_prog::character",
	"mdoc": {
		"content": "Characters are playable entity in the world.",
		"location": {
			"column_end": 0,
			"column_start": 1,
			"line_end": 16,
			"line_start": 15,
			"file": "test_location"
		}
	},
	"visibility": "public",
	"modifiers": ["module"],
	"location": {
		"column_end": 3,
		"column_start": 1,
		"line_end": 68,
		"line_start": 15,
		"file": "test_location"
	},
	"mpackage": {
		"full_name": "test_prog"
	},
	"mgroup": {
		"full_name": "test_prog>rpg>"
	},
	"intro_mclasses": [{
		"full_name": "test_prog::Character"
	}],
	"mclassdefs": [{
		"full_name": "test_prog$Character"
	}],
	"intro_mclassdefs": [{
		"full_name": "test_prog$Character"
	}],
	"redef_mclassdefs": [],
	"imports": [{
		"full_name": "test_prog::races"
	}, {
		"full_name": "test_prog::careers"
	}]
}
{
	"name": "combat",
	"class_name": "MModule",
	"full_name": "test_prog::combat",
	"mdoc": {
		"content": "COmbat interactions between characters.",
		"location": {
			"column_end": 0,
			"column_start": 1,
			"line_end": 16,
			"line_start": 15,
			"file": "test_location"
		}
	},
	"visibility": "public",
	"modifiers": ["module"],
	"location": {
		"column_end": 3,
		"column_start": 1,
		"line_end": 67,
		"line_start": 15,
		"file": "test_location"
	},
	"mpackage": {
		"full_name": "test_prog"
	},
	"mgroup": {
		"full_name": "test_prog>rpg>"
	},
	"intro_mclasses": [{
		"full_name": "test_prog::Weapon"
	}, {
		"full_name": "test_prog::Combatable"
	}],
	"mclassdefs": [{
		"full_name": "test_prog$Weapon"
	}, {
		"full_name": "test_prog$Combatable"
	}, {
		"full_name": "test_prog::combat$Character"
	}, {
		"full_name": "test_prog::combat$Dwarf"
	}],
	"intro_mclassdefs": [{
		"full_name": "test_prog$Weapon"
	}, {
		"full_name": "test_prog$Combatable"
	}],
	"redef_mclassdefs": [{
		"full_name": "test_prog::combat$Character"
	}, {
		"full_name": "test_prog::combat$Dwarf"
	}],
	"imports": [{
		"full_name": "test_prog::character"
	}]
}
{
	"name": "races",
	"class_name": "MModule",
	"full_name": "test_prog::races",
	"mdoc": {
		"content": "Races of the game.\n\nAll characters belong to a `Race`.\n\nAvailable races:\n\n * `Human`\n * `Dwarf`\n * `Elf`",
		"location": {
			"column_end": 0,
			"column_start": 1,
			"line_end": 24,
			"line_start": 15,
			"file": "test_location"
		}
	},
	"visibility": "public",
	"modifiers": ["module"],
	"location": {
		"column_end": 3,
		"column_start": 1,
		"line_end": 78,
		"line_start": 15,
		"file": "test_location"
	},
	"mpackage": {
		"full_name": "test_prog"
	},
	"mgroup": {
		"full_name": "test_prog>rpg>"
	},
	"intro_mclasses": [{
		"full_name": "test_prog::Race"
	}, {
		"full_name": "test_prog::Human"
	}, {
		"full_name": "test_prog::Dwarf"
	}, {
		"full_name": "test_prog::Elf"
	}],
	"mclassdefs": [{
		"full_name": "test_prog$Race"
	}, {
		"full_name": "test_prog$Human"
	}, {
		"full_name": "test_prog$Dwarf"
	}, {
		"full_name": "test_prog$Elf"
	}],
	"intro_mclassdefs": [{
		"full_name": "test_prog$Race"
	}, {
		"full_name": "test_prog$Human"
	}, {
		"full_name": "test_prog$Dwarf"
	}, {
		"full_name": "test_prog$Elf"
	}],
	"redef_mclassdefs": [],
	"imports": [{
		"full_name": "test_prog::platform"
	}]
}
{
	"name": "rpg",
	"class_name": "MModule",
	"full_name": "test_prog::rpg",
	"mdoc": {
		"content": "A worlg RPG abstraction.",
		"location": {
			"column_end": 0,
			"column_start": 1,
			"line_end": 16,
			"line_start": 15,
			"file": "test_location"
		}
	},
	"visibility": "public",
	"modifiers": ["module"],
	"location": {
		"column_end": 13,
		"column_start": 1,
		"line_end": 21,
		"line_start": 15,
		"file": "test_location"
	},
	"mpackage": {
		"full_name": "test_prog"
	},
	"mgroup": {
		"full_name": "test_prog>rpg>"
	},
	"intro_mclasses": [],
	"mclassdefs": [],
	"intro_mclassdefs": [],
	"redef_mclassdefs": [],
	"imports": [{
		"full_name": "test_prog::combat"
	}]
}
{
	"name": "test_prog",
	"class_name": "MModule",
	"full_name": "test_prog::test_prog",
	"mdoc": {
		"content": "A test program with a fake model to check model tools.",
		"location": {
			"column_end": 0,
			"column_start": 1,
			"line_end": 16,
			"line_start": 15,
			"file": "test_location"
		}
	},
	"visibility": "public",
	"modifiers": ["module"],
	"location": {
		"column_end": 13,
		"column_start": 1,
		"line_end": 26,
		"line_start": 15,
		"file": "test_location"
	},
	"mpackage": {
		"full_name": "test_prog"
	},
	"mgroup": {
		"full_name": "test_prog>"
	},
	"intro_mclasses": [{
		"full_name": "test_prog::Starter"
	}, {
		"full_name": "test_prog::Sys"
	}],
	"mclassdefs": [{
		"full_name": "test_prog$Starter"
	}, {
		"full_name": "test_prog$Sys"
	}],
	"intro_mclassdefs": [{
		"full_name": "test_prog$Starter"
	}, {
		"full_name": "test_prog$Sys"
	}],
	"redef_mclassdefs": [],
	"imports": [{
		"full_name": "test_prog::game"
	}]
}
{
	"name": "test_prog-m",
	"class_name": "MModule",
	"full_name": "test_prog-m",
	"mdoc": null,
	"visibility": "public",
	"modifiers": ["module"],
	"location": {
		"column_end": 0,
		"column_start": 0,
		"line_end": 0,
		"line_start": 0,
		"file": "test_location"
	},
	"mpackage": null,
	"mgroup": null,
	"intro_mclasses": [],
	"mclassdefs": [],
	"intro_mclassdefs": [],
	"redef_mclassdefs": [],
	"imports": [{
		"full_name": "test_prog::test_prog"
	}]
}
