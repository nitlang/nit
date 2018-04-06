# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Rubix-cube modelization library
#
# As for now the library supports basic representation of a Rubix-cube
# The library is built for speed, most operations cost no allocations to perform.
# This does however mean that the library is NOT thread-safe and should be handled
# with the appropriate mutual-exclusion mechanisms to avoid memory corruption
# or unintended side-effects on a single cube.
#
# The library supports the singmaster notation as a way to perform operations
# on a Rubix cube.
#
# No solver is (yet) provided along with the library.
module rubix

import console

private fun array1d_copy_to(fromarr: Array[Int], oarr: Array[Int]) do
	while oarr.length > fromarr.length do oarr.pop
	while oarr.length < fromarr.length do oarr.push 0
	fromarr.copy_to(0, fromarr.length, oarr, 0)
end

private fun front_face: Int do return 0
private fun left_face: Int do return 1
private fun top_face: Int do return 2
private fun right_face: Int do return 3
private fun bottom_face: Int do return 4
private fun back_face: Int do return 5

private fun top_ln: Int do return 0
private fun mid_ln: Int do return 1
private fun bottom_ln: Int do return 2

private fun left_col: Int do return 0
private fun mid_col: Int do return 1
private fun right_col: Int do return 2

private fun clock: Int do return 0
private fun counterclock: Int do return 1

private fun square: String do return once "■"

redef class Int

	# Returns a coloured square for a defined colour id
	#
	# Assume colours are:
	#
	# * Green -> 0
	# * White (replaced with light gray) -> 1
	# * Red -> 2
	# * Yellow -> 3
	# * Orange (replaced with purple) -> 4
	# * Blue -> 5
	#
	private fun rubix_colour: String do
		if self == 0 then return square.green
		if self == 1 then return square.light_gray
		if self == 2 then return square.red
		if self == 3 then return square.yellow
		if self == 4 then return square.purple
		if self == 5 then return square.blue
		abort
	end
end

# In-memory representation of a Rubix Cube
#
# Faces are represented in memory as if they were a flattened cube like:
#
# ~~~raw
#       B B B
#       B B B
#       B B B
#       U U U
#       U U U
#       U U U
# L L L F F F R R R
# L L L F F F R R R
# L L L F F F R R R
#       D D D
#       D D D
#       D D D
# ~~~
#
# All the commands detailed in the class respect the Singmaster notation
class RubixCube
	# Faces of the Cube
	#
	# 0 - Front
	# 1 - Left
	# 2 - Up
	# 3 - Right
	# 4 - Down
	# 5 - Back
	#
	# Each line is:
	#
	# 0 - Top line
	# 1 - Middle line
	# 2 - Down line
	var faces: Array[Array[Array[Int]]]

	# Build a new Rubix Cube with a solved layout
	init solved do
		var faces = new Array[Array[Array[Int]]]
		var colour = 0
		for i in [0 .. 6[ do
			var face = new Array[Array[Int]]
			faces.add face
			for j in [0 .. 3[ do
				var line = new Array[Int]
				for k in [0 .. 3[ do
					line.add colour
				end
				face.add line
			end
			colour += 1
		end
		init faces
	end

	# Build a new Rubix Cube with a scrambled layout
	#
	# NOTE: The layout is not random, but scrambled nonetheless
	init scrambled do
		var colours = once [0, 1, 2, 3, 4, 5]
		var colour_pos = 0
		var faces = new Array[Array[Array[Int]]]
		var increment = 1
		for i in [0 .. 6[ do
			var face = new Array[Array[Int]]
			faces.add face
			for j in [0 .. 3[ do
				var line = new Array[Int]
				for k in [0 .. 3[ do
					line.add colours[colour_pos]
					colour_pos += increment
					if colour_pos > 5 then
						increment = -1
						colour_pos = 5
					end
					if colour_pos < 0 then
						increment = 1
						colour_pos = 0
					end
				end
				face.add line
			end
		end
		init faces
	end

	# Reset the Rubix Cube to a solved position
	fun reset do
		for i in [0 .. 6[ do
			var face = faces[i]
			for j in [0 .. 3[ do
				var line = face[j]
				for k in [0 .. 3[ do
					line[k] = i
				end
			end
		end
	end

	# Checks if both objects are Rubix cubes and their content is equivalent
	#
	# NOTE: Rotationed versions are not yet considered equal
	redef fun ==(o) do
		if not o isa RubixCube then return false
		for mf in faces, tf in o.faces do
			for ml in mf, tl in tf do
				for mc in ml, tc in tl do if mc != tc then return false
			end
		end
		return true
	end

	# Is `self` a solved Rubix Cube ?
	fun is_solved: Bool do
		for face_id in [0 .. 6[ do
			var i = faces[face_id]
			var colour = i.first.first
			for j in [0 .. 3[ do
				var ln = i[j]
				for k in [0 .. 3[ do
					if ln[k] != colour then return false
				end
			end
		end
		return true
	end

	redef fun to_s do
		var buf = new Buffer
		buf.append(single_face(back_face))
		buf.append(single_face(top_face))
		buf.append(three_faces(left_face, front_face, right_face))
		buf.append(single_face(bottom_face))
		return buf.to_s
	end

	private fun single_face(face_id: Int): Text do
		var b = new Buffer
		var face = faces[face_id]
		for i in [0 .. 3[ do
			var ln = face[i]
			b.append("{" " * 6}{ln[0].rubix_colour} {ln[1].rubix_colour} {ln[2].rubix_colour}{" " * 6}\n")
		end
		return b
	end

	private fun three_faces(face1, face2, face3: Int): Text do
		var b = new Buffer
		var face_ids = [face1, face2, face3]
		for i in [0 .. 3[ do
			for j in face_ids do
				var face = faces[j]
				var ln = face[i]
				b.append("{ln[0].rubix_colour} {ln[1].rubix_colour} {ln[2].rubix_colour} ")
			end
			b.add '\n'
		end
		return b
	end

	private var rot_ln_buffer = new Array[Array[Int]].with_capacity(4)
	private fun rotate_line(ln_id: Int, direction: Int) do
		var line_data = rot_ln_buffer
		if line_data.is_empty then for i in [0 .. 4[ do line_data.add(new Array[Int])
		array1d_copy_to(faces[front_face][ln_id], line_data[0])
		array1d_copy_to(faces[left_face][ln_id], line_data[1])
		array1d_copy_to(faces[back_face][2 - ln_id], line_data[2])
		array1d_copy_to(faces[right_face][ln_id], line_data[3])
		if direction == counterclock then
			line_data[3].swap_at(0, 2)
			line_data[2].swap_at(0, 2)
			rot_ln_buffer.rotate_left
		else if direction == clock then
			line_data[1].swap_at(0, 2)
			line_data[2].swap_at(0, 2)
			rot_ln_buffer.rotate_right
		else
			abort
		end
		array1d_copy_to(line_data[0], faces[front_face][ln_id])
		array1d_copy_to(line_data[1], faces[left_face][ln_id])
		array1d_copy_to(line_data[2], faces[back_face][2 - ln_id])
		array1d_copy_to(line_data[3], faces[right_face][ln_id])
	end

	private var colbuf = new Array[Int].with_capacity(3)
	private fun coldata(face_id: Int, col_id: Int): Array[Int] do
		if colbuf.is_empty then for i in [0 .. 3[ do colbuf.add 0
		var face = faces[face_id]
		for i in [0 .. 3[ do colbuf[i] = face[i][col_id]
		return colbuf
	end

	private fun set_coldata(face_id, col_id: Int, coldata: Array[Int]) do
		var face = faces[face_id]
		for i in [0 .. 3[ do face[i][col_id] = coldata[i]
	end

	private var rot_col_buffer = new Array[Array[Int]].with_capacity(4)
	private fun rotate_column(col_id: Int, direction: Int) do
		var col_data = rot_col_buffer
		if col_data.is_empty then for i in [0 .. 4[ do col_data.add(new Array[Int])
		array1d_copy_to(coldata(front_face, col_id), rot_col_buffer[0])
		array1d_copy_to(coldata(top_face, col_id), rot_col_buffer[1])
		array1d_copy_to(coldata(back_face, col_id), rot_col_buffer[2])
		array1d_copy_to(coldata(bottom_face, col_id), rot_col_buffer[3])
		if direction == clock then
			rot_col_buffer.rotate_left
		else if direction == counterclock then
			rot_col_buffer.rotate_right
		else
			abort
		end
		set_coldata(front_face, col_id, rot_col_buffer[0])
		set_coldata(top_face, col_id, rot_col_buffer[1])
		set_coldata(back_face, col_id, rot_col_buffer[2])
		set_coldata(bottom_face, col_id, rot_col_buffer[3])
	end

	private var r90_cache = new Array[Array[Int]]
	private fun rotate_l90_face(face_id: Int) do
		var lines = r90_cache
		if lines.is_empty then for i in [0 .. 3[ do lines.add(new Array[Int])
		array1d_copy_to(faces[face_id][top_ln], lines[0])
		array1d_copy_to(faces[face_id][mid_ln], lines[1])
		array1d_copy_to(faces[face_id][bottom_ln], lines[2])
		for i in [0 .. 3[ do lines[i].swap_at(0, 2)
		set_coldata(face_id, left_col, lines[0])
		set_coldata(face_id, mid_col, lines[1])
		set_coldata(face_id, right_col, lines[2])
	end

	private fun rotate_r90_face(face_id: Int) do
		var lines = r90_cache
		if lines.is_empty then for i in [0 .. 3[ do lines.add(new Array[Int])
		array1d_copy_to(faces[face_id][top_ln], lines[0])
		array1d_copy_to(faces[face_id][mid_ln], lines[1])
		array1d_copy_to(faces[face_id][bottom_ln], lines[2])
		set_coldata(face_id, right_col, lines[0])
		set_coldata(face_id, mid_col, lines[1])
		set_coldata(face_id, left_col, lines[2])
	end

	# U command
	fun clock_U do
		rotate_line(top_ln, clock)
		rotate_r90_face(top_face)
	end

	# U' command
	fun cclock_U do
		rotate_line(top_ln, counterclock)
		rotate_l90_face(top_face)
	end

	# D command
	fun clock_D do
		rotate_line(bottom_ln, counterclock)
		rotate_r90_face(bottom_face)
	end

	# D' command
	fun cclock_D do
		rotate_line(bottom_ln, clock)
		rotate_l90_face(bottom_face)
	end

	# L command
	fun clock_L do
		rotate_column(left_col, clock)
		rotate_r90_face(left_face)
	end

	# L' command
	fun cclock_L do
		rotate_column(left_col, counterclock)
		rotate_l90_face(left_face)
	end

	# R command
	fun clock_R do
		rotate_column(right_col, counterclock)
		rotate_r90_face(right_face)
	end

	# R' command
	fun cclock_R do
		rotate_column(right_col, clock)
		rotate_l90_face(right_face)
	end

	# M command
	fun clock_M do rotate_column(mid_col, clock)

	# M' command
	fun cclock_M do rotate_column(mid_col, counterclock)

	# E command
	fun clock_E do rotate_line(mid_ln, counterclock)

	# E' command
	fun cclock_E do rotate_line(mid_ln, clock)

	# F command
	fun clock_F do
		cube_Y_rotation
		clock_L
		ccube_Y_rotation
	end

	# F' command
	fun cclock_F do
		cube_Y_rotation
		cclock_L
		ccube_Y_rotation
	end

	# B command
	fun clock_B do
		ccube_Y_rotation
		clock_L
		cube_Y_rotation
	end

	# B' command
	fun cclock_B do
		ccube_Y_rotation
		cclock_L
		cube_Y_rotation
	end

	# S command
	fun clock_S do
		cube_Y_rotation
		clock_M
		ccube_Y_rotation
	end

	# S' command
	fun cclock_S do
		cube_Y_rotation
		cclock_M
		ccube_Y_rotation
	end

	# u command
	fun clock_u do
		clock_U
		cclock_E
	end

	# u' command
	fun cclock_u do
		cclock_U
		clock_E
	end

	# l command
	fun clock_l do
		clock_L
		clock_M
	end

	# l' command
	fun cclock_l do
		cclock_L
		cclock_M
	end

	# f command
	fun clock_f do
		clock_F
		clock_S
	end

	# f' command
	fun cclock_f do
		cclock_F
		cclock_S
	end

	# r command
	fun clock_r do
		clock_R
		cclock_M
	end

	# r' command
	fun cclock_r do
		cclock_R
		clock_M
	end

	# b command
	fun clock_b do
		clock_B
		cclock_S
	end

	# b' command
	fun cclock_b do
		cclock_B
		clock_S
	end

	# d command
	fun clock_d do
		clock_D
		clock_E
	end

	# d' command
	fun cclock_d do
		cclock_D
		cclock_E
	end

	# Y command
	fun cube_Y_rotation do
		clock_U
		cclock_E
		cclock_D
	end

	# Y' command
	fun ccube_Y_rotation do
		cclock_U
		clock_E
		clock_D
	end

	# X command
	fun cube_X_rotation do
		cclock_L
		cclock_M
		clock_R
	end

	# X' command
	fun ccube_X_rotation do
		clock_L
		clock_M
		cclock_R
	end

	# Z command
	fun cube_Z_rotation do
		ccube_Y_rotation
		cube_X_rotation
		cube_Y_rotation
	end

	# Z' command
	fun ccube_Z_rotation do
		cube_Y_rotation
		cube_X_rotation
		ccube_Y_rotation
	end

	# Applies a command `cmd` to `self`, returns the number of operations performed during the command
	fun do_cmd(cmd: String): Int do
		if cmd == "" then return 0
		var iters = 1
		var cmdln = cmd.length
		if cmd[cmdln - 1] == '2' then
			iters = 2
		end
		var cmd1 = cmd[0]
		var cmd2 = '\0'
		if cmdln > 1 then
			cmd2 = cmd[1]
			if cmd2 == '2' then cmd2 = '\0'
		end
		for i in [1 .. iters] do
			if cmd1 == 'U' then
				if cmd2 == '\'' then
					cclock_U
				else
					clock_U
				end
			else if cmd1 == 'L' then
				if cmd2 == '\'' then
					cclock_L
				else
					clock_L
				end
			else if cmd1 == 'F' then
				if cmd2 == '\'' then
					cclock_F
				else
					clock_F
				end
			else if cmd1 == 'R' then
				if cmd2 == '\'' then
					cclock_R
				else
					clock_R
				end
			else if cmd1 == 'B' then
				if cmd2 == '\'' then
					cclock_B
				else
					clock_B
				end
			else if cmd1 == 'D' then
				if cmd2 == '\'' then
					cclock_D
				else
					clock_D
				end
			else if cmd1 == 'M' then
				if cmd2 == '\'' then
					cclock_M
				else
					clock_M
				end
			else if cmd1 == 'E' then
				if cmd2 == '\'' then
					cclock_E
				else
					clock_E
				end
			else if cmd1 == 'S' then
				if cmd2 == '\'' then
					cclock_S
				else
					clock_S
				end
			else if cmd1 == 'u' then
				if cmd2 == '\'' then
					cclock_u
				else
					clock_u
				end
			else if cmd1 == 'l' then
				if cmd2 == '\'' then
					cclock_l
				else
					clock_l
				end
			else if cmd1 == 'f' then
				if cmd2 == '\'' then
					cclock_f
				else
					clock_f
				end
			else if cmd1 == 'r' then
				if cmd2 == '\'' then
					cclock_r
				else
					clock_r
				end
			else if cmd1 == 'b' then
				if cmd2 == '\'' then
					cclock_b
				else
					clock_b
				end
			else if cmd1 == 'd' then
				if cmd2 == '\'' then
					cclock_d
				else
					clock_d
				end
			else if cmd1 == 'X' then
				if cmd2 == '\'' then
					ccube_X_rotation
				else
					cube_X_rotation
				end
			else if cmd1 == 'Y' then
				if cmd2 == '\'' then
					ccube_Y_rotation
				else
					cube_Y_rotation
				end
			else if cmd1 == 'Z' then
				if cmd2 == '\'' then
					ccube_Z_rotation
				else
					cube_Z_rotation
				end
			else
				abort
			end
		end
		return iters
	end
end

redef fun force_console_colors do return true
