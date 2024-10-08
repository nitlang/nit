# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2006 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2008 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Access to the environment variables of the process
module environ

import text
import file

# TODO prevoir une structure pour recup tout un environ, le modifier et le passer a process

redef class String
	# Return environment value for the symbol.
	# If there is no such environment variable, then return ""
	#
	#     assert "PATH".environ     != ""
	#     assert "NIT %\n".environ  == ""
	fun environ: String
	do
		var res = self.to_cstring.get_environ
		# FIXME: There is no proper way to handle NULL C string yet. What a pitty.
		var nulstr = once ("".to_cstring.get_environ)
		if res != nulstr then
			return res.to_s
		else
			return ""
		end
	end

	# Set the enviroment value of a variable.
	#
	#     "NITis".setenv("fun")
	#     assert "NITis".environ  == "fun"
	fun setenv(v: String) do to_cstring.setenv( v.to_cstring )

	# Search for the program `self` in all directories from `PATH`
	fun program_is_in_path: Bool
	do
		var sep = if is_windows then ";" else ":"
		var full_path = "PATH".environ
		var paths = full_path.split(sep)
		for path in paths do if path.file_exists then
			if path.join_path(self).file_exists then return true
			if is_windows and (path / self + ".exe").file_exists then return true
		end

		return false
	end
end

redef class CString
	private fun get_environ: CString `{ return getenv(self); `}
	private fun setenv(value: CString) `{
#ifdef _WIN32
		_putenv_s(self, value);
#else
		setenv(self, value, 1);
#endif
	`}
end

redef class Sys
	redef init
	do
		var x = "NIT_SRAND".environ
		if x != "" then srand_from(x.to_i)
	end
end
