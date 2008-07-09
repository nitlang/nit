# This file is part of NIT ( http://www.nitlanguage.org ).
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

import symbol

# TODO prevoir une structure pour recup tout un environ, le modifier et le passer a process

redef class Symbol
	# Return environement valued for this symbol
	meth environ: String
	do
		environ_default = "" # FIXME: Why this ?!?
		return new String.from_cstring(to_s.to_cstring.get_environ)
	end

	# set environement value for this symbol
	meth environ=(v: String) do to_s.to_cstring.set_environ(v.to_cstring, 1)
	
	# set default environement value for this symbol
	meth environ_default=(v: String) do to_s.to_cstring.set_environ(v.to_cstring, 0)
		
	# Unset the environement value of this symbol
	meth unset do to_s.to_cstring.unset_environ
end

redef class NativeString
# Refinned to add environement bindings
	private meth get_environ: NativeString is extern "string_NativeString_NativeString_get_environ_0"
	private meth put_environ is extern "string_NativeString_NativeString_put_environ_0" # this one is a bit compilcated to use ... so we dosen't use
	private meth unset_environ is extern "string_NativeString_NativeString_unset_environ_0"
	private meth set_environ(value : NativeString, overwrite : Int) is extern "string_NativeString_NativeString_set_environ_2"
end
