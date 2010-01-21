# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# iregisters slot allocation
package allocate_iregister_slots

import icode
private import primitive_info

# The main class that performs the iregister slot allocation
# The algorithm is quite naive but works
# Things TODO:
#  * flow control
#  * register aliasing
#  * IMove optimization
class IRegisterSlotAllocationVisitor
special ICodeVisitor
	# The visitor works in two pass:
	# First pass is used to detect first and last iregisters occurences and slot groups
	# Second pass is used to assign an effective slot to iregsiters
	var _pass: Int = 0

	# Update locality information of r according to the current iroutine
	fun mark_locality(r: IRegister)
	do
		if r._is_local and r._local_iroutine != _current_ir then
			if r._local_iroutine == null then
				r._local_iroutine = _current_ir
			else
				r._is_local = false
			end
		end
	end

	redef fun visit_iregister_read(ic: ICode, r: IRegister)
	do
		var pass = _pass
		if pass == 0 then
			mark_locality(r)
			r._last = ic
			r._slot_index = null
		else if pass == 1 and r._last == ic then
			free(r)
		end
	end

	redef fun visit_iregister_write(ic: ICode, r: IRegister)
	do
		var pass = _pass
		if pass == 0 then
			mark_locality(r)
			r._slot_index = null
			# The first write make it live
			if r._first == null then r._first = ic
			# A read iregistre is still live on a write
			if r._last != null then r._last = ic
		else if pass == 1 then
			if r._first == ic then
				register(r)
			else if r._last == ic then
				free(r)
			end
		end
	end


	# The current loop/closure.
	# Iregister from outside a loop/closure cannot die inside the loop/closure
	# So, the only register that can die in loops/closure are those born inside the loop/closure
	var _current_live: List[IRegister] = new List[IRegister]

	var _deferred: List[IRegister] = new List[IRegister]

	# Free the deferred that can be freed
	# "Can" because of neested loops/closures
	# new_def will be cleared and used as the new _deferred attribute
	fun deferred_free(new_def: List[IRegister])
	do
		var old_def = _deferred
		if not old_def.is_empty then
			new_def.clear
			_deferred = new_def
			for r in old_def do
				free(r)
			end
		end
	end

	redef fun visit_icode(ic)
	do
		if _pass == 1 and ic isa ILoop then
			var old_live = _current_live
			var new_live = new List[IRegister]
			_current_live = new_live
			super
			_current_live = old_live
			deferred_free(new_live)
		else
			super
		end
	end

	redef fun visit_closure_defs(closdefs)
	do
		if _pass == 1 then
			var old_live = _current_live
			var new_live = new List[IRegister]
			_current_live = new_live
			super
			_current_live = old_live
			deferred_free(new_live)
		else
			super
		end
	end

	# The current iroutine
	# Used to detect locality of iregisters
	var _current_ir: IRoutine

	redef fun visit_iroutine(ir)
	do
		var res = ir.result
		if _pass == 0 then
			var old_ir = _current_ir
			_current_ir = ir
			for r in ir.params do
				r._first = self
				mark_locality(r)
			end
			super
			if res != null then
				res._last = self
				mark_locality(res)
			end
			_current_ir = old_ir
		else
			var old_tag_slots = _tag_slots
			_tag_slots = new SlotGroup
			var old_std_slots = _std_slots
			if ir isa IClosureDef then
				_std_slots = new SlotGroup
			end
			for r in ir.params do
				register(r)
			end
			super
			if res != null then free(res)
			ir._tag_slots_nb = _tag_slots._next_index
			_tag_slots = old_tag_slots
			ir._std_slots_nb = _std_slots._next_index
			_std_slots = old_std_slots
		end
	end

	# Global slots are used for non local registers and some main iroutine registers
	var _global_slots: SlotGroup = new SlotGroup

	# Standad slots are used for local generic registers
	# In main iroutine, _global_slots == _std_slots
	var _std_slots: SlotGroup

	# Tag slots are used to store local tagged object registers
	var _tag_slots: SlotGroup = new SlotGroup

	# Assign a slot to a register according to its locality and its type
	fun register(r: IRegister)
	do
		if r._last == null then return
		assert r._slot_index == null
		_current_live.add(r)
		r._born = _current_live
		if not r._is_local then
			_global_slots.register(r)
		else if r.stype.is_tagged then
			r._in_tag_slots = true
			_tag_slots.register(r)
		else
			_std_slots.register(r)
		end
	end

	# Release a register, thus its slot can be reused
	fun free(r: IRegister)
	do
		var i = r._slot_index
		if i == null then return
		if r._born != _current_live then
			_deferred.add(r)
		else if r._last != null then
			if r._in_tag_slots then
				_tag_slots.free(r)
			else if r._is_local then
				_std_slots.free(r)
			else
				_global_slots.free(r)
			end
			r._last = null # Free a register only once
		end
	end

	# Run the slot allocation
	fun iroutine_slot_allocation
	do
		var ir = _current_ir
		visit_iroutine(ir)
		_pass = 1
		visit_iroutine(ir)
	end

	init(ir: IRoutine)
	do
		_current_ir = ir
		_std_slots = _global_slots
	end
end

# Group or equivalent slots shared by registers
class SlotGroup
	# The free slots in the group
	var _free: List[Int] = new List[Int]

	# The next free slot
	var _next_index: Int = 0

	# Assign a slot to the register
	fun register(r: IRegister)
	do
		if _free.is_empty then
			r._slot_index = _next_index
			_next_index += 1
		else
			r._slot_index = _free.pop
		end
	end

	# Reuse the slot of the register
	fun free(r: IRegister)
	do
		_free.push(r._slot_index.as(not null))
	end
end

redef class IRoutine
	# The number of standard slots (stored in an array)
	readable var _std_slots_nb: Int = 0

	# The number of tag slots
	readable var _tag_slots_nb: Int = 0

	fun allocate_iregister_slots
	do
		var v = new IRegisterSlotAllocationVisitor(self)
		v.iroutine_slot_allocation
	end
end

redef class IRegister
	# The slot index of the register in its slot group
	# Is null if the iregister is dead
	# (or if iregister slot allocation is not performed yet)
	readable writable var _slot_index: nullable Int

	# Is the register local to a single iroutine?
	readable writable var _is_local: Bool = true

	# If is_local, then what iroutine
	readable writable var _local_iroutine: nullable IRoutine

	# Is the register stored in the tag slot group?
	readable writable var _in_tag_slots: Bool = false

	# Tag to be sure that info in the object are computed by the same analysis
	var _analysis_mark: nullable IRegisterSlotAllocationVisitor = null

	# What is the first occurences of the iregister
	# So that a slot is not needed before
	var _first: nullable Object = null

	# What is the last occurences of the iregister
	# So that a slot may be no more needed after
	# ("may" because of loops/closure)
	var _last: nullable Object = null

	# In which loop/closure the iregister is born
	# So it can die immediatly if this is the current loop/closure
	var _born: nullable Object = null
end
