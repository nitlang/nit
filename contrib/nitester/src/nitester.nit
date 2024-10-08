# This file is part of NIT (https://nitlanguage.org).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Tester of Nit engines on an MPI cluster
module nitester

import mpi
import signals
import opts

# Any processor, worker or controller
#
# All data and methods within this class are shared by the controller and the
# workers.
abstract class Processor
	super SignalHandler

	# Controller rank is always 0
	var controller_rank: Rank = 0.rank

	# Rank on this processor
	fun rank: Rank is abstract

	# Where to store data for transfer between nodes
	#
	# Require: `buffer.length % 4 == 0`
	var buffer = new CIntArray(1024)

	# Run in verbose mode, display more text
	var verbose = 0

	init
	do
		# OpenMPI sends a SIGTERM to all nodes upon receiving a SIGTERM or SIGINT
		# on the first process.
		handle_signal(sigterm, true)
	end

	# Tag of a new task packet of size `tasks_per_packet`
	var task_tag: Tag = 0.tag

	# Tag to return a set of `Result` thought `buffer`
	var result_tag: Tag = 1.tag

	# Tag to notify `Worker` when to quit
	var quit_tag: Tag = 2.tag

	# Tag to request more work from the `Controller` by a `Worker`
	var need_work_tag: Tag = 4.tag

	# Tag to notify `Controller` that the sender `Worker` is done
	var done_tag: Tag = 5.tag

	# Number of tasks within each task assignation with `task_tag`
	var tasks_per_packet = 1

	# Run the main logic of this node
	fun run is abstract

	# Hash or name of the branch to test
	var branch_hash: String is noinit

	# Engines targeted by this execution
	var engines: Array[String] is noinit

	# All known engines, used to detect errors in `engines`
	var all_engines: Array[String] = ["nitcs", "nitcsg", "nitcg", "nitce", "niti", "emscripten"]

	# Programs to test in this execution
	var test_programs: Array[String] is noinit

	# Root of the temporary directory
	var tmp_dir = "/dev/shm/"

	# `ccache` directory
	var ccache_dir = "/dev/shm/nit_ccache"

	# Read command line options
	fun read_cli_options
	do
		var opt_ctx = new OptionContext
		var opt_hash = new OptionString(
			"Branch to test",
			"--hash", "-h")
		opt_hash.mandatory = true
		var opt_engines = new OptionString(
			"Engines to test, separated with commas ({all_engines.join(", ")} or all)",
			"--engine", "-e")
		var opt_help = new OptionBool("Print this help message", "--help", "-h")
		var opt_verbose = new OptionCount(
			"Be verbose, repeat to increase verbose level (max with -vvv)",
			"--verbose", "-v")
		var opt_cleanup = new OptionBool(
			"Clean up all nitester files (and do not run tests)",
			"--cleanup", "-C")

		opt_ctx.add_option(opt_hash, opt_engines, opt_help, opt_verbose, opt_cleanup)
		opt_ctx.parse args

		# --help?
		if opt_help.value then opt_ctx.usage_error null

		# --verbose?
		verbose = opt_verbose.value

		# --cleanup?
		if opt_cleanup.value then
			assert tmp_dir.file_exists
			for file in tmp_dir.files do if file.has_prefix("nit") then
				var full_path = tmp_dir / file
				if full_path == ccache_dir then continue

				assert full_path.file_exists

				var stat = full_path.file_lstat
				if stat.is_dir then
					full_path.rmdir
				else
					full_path.file_delete
				end
			end
			mpi.finalize
			exit 0
		end

		# any files?
		var rest = opt_ctx.rest
		if rest.is_empty then opt_ctx.usage_error "This tool needs at least one test_program.nit"
		test_programs = rest

		# hash
		branch_hash = opt_hash.value.as(not null)

		# gather and check engines
		var engines_str = opt_engines.value
		var engines
		if engines_str == null then
			# default
			engines = ["nitcs"]
		else
			engines = engines_str.split(',')

			if engines.has("all") then
				# all engines
				engines = all_engines
			end
		end

		# check validity of targetted engines
		var unknown_engines = new Array[String]
		for engine in engines do if not all_engines.has(engine) then unknown_engines.add engine

		if not unknown_engines.is_empty then
			opt_ctx.usage_error "Unknown engines: {unknown_engines.join(", ")} (expected one or most of {all_engines.join(", ")})"
		end
		self.engines = engines
	end

	# All tasks to be performed
	var tasks = new Array[TesterTask]

	# Gather and register all tasks
	fun create_tasks
	do
		# At this point we are in our local nit
		var skip_path = "tests/turing.skip"
		var skip
		if skip_path.file_exists then
			var skip_file = new FileReader.open(skip_path)
			skip = skip_file.read_lines
			skip_file.close
		else
			skip = new Array[String]
		end

		for engine in engines do for prog in test_programs do
			# Is is blacklisted?
			for s in skip do if not s.is_empty and prog.has(s) then
				if verbose > 0 and rank == 0 then print "Skipping test '{prog}' because of '{s}' in turing.skip"
				continue label
			end

			tasks.add new TesterTask(engine, prog)
		end label
	end
end

# Single controller to dispatch tasks, gather results and produce stats
class Controller
	super Processor

	redef fun rank do return controller_rank

	# Id as `Int` of the next task to distribute
	var next_task_id = 0

	redef fun receive_signal(signal)
	do
		shutdown
		print_results

		mpi.finalize
		exit 0
	end

	redef fun run
	do
		read_cli_options
		create_tasks
		distribute_tasks
		print_results
	end

	# Cumulated results from workers
	var results = new ResultSet

	# Maintain communication with workers to distribute tasks and receiver results
	fun distribute_tasks
	do
		var at_work = new Array[Rank]

		# send initial tasks
		for r in [1..comm_world.size[ do
			var sent = send_task_to(r.rank)
			if sent then
				at_work.add r.rank
			else
				mpi.send_empty(r.rank, quit_tag, comm_world)
			end
		end

		var status = new Status
		# await results and send new tasks
		while not at_work.is_empty do
			check_signals

			# Double probe to avoid bug with some implementation of MPI
			mpi.probe(new Rank.any, new Tag.any, comm_world, status)
			mpi.probe(new Rank.any, new Tag.any, comm_world, status)

			if status.tag == result_tag then
				# Receive results fron a worker
				var count = status.count(new DataType.int)
				mpi.recv_into(buffer, 0, count, status.source, status.tag, comm_world)

				# Parse results from C array to `Result` instances
				#
				# Each result is on 4 ints: task id, arg, alt and result.
				#
				# See the comments where the data is produced in `Worker::work_on_tasks` for more informationé
				assert count % 4 == 0
				for t in (count/4).times do
					var tt = t*4

					var task_id = buffer[tt]
					var arg = buffer[tt+1]
					var alt = buffer[tt+2]
					var res = buffer[tt+3]

					var result = new Result(tasks[task_id], arg, alt)

					if res == 1 then result.ok = true
					if res == 2 then result.ok_empty = true
					if res == 3 then result.no_sav = true
					if res == 4 then result.fixme = true
					if res == 5 then result.fail = true
					if res == 6 then result.soso = true
					if res == 7 then result.skip = true
					if res == 8 then result.todo = true
					if res == 9 then result.skip_exec = true
					if res == 0 then result.unknown = true

					results.add result

					if verbose > 0 and results.length % 25 == 0 then print_short_results
				end

			else if status.tag == need_work_tag then
				# A worker needs more work
				mpi.recv_empty(status.source, status.tag, comm_world)
				var sent = send_task_to(status.source)
				if not sent then
					# no more work, quit
					mpi.send_empty(status.source, quit_tag, comm_world)
				end
			else if status.tag == done_tag then
				# A worker is done and will quit
				mpi.recv_empty(status.source, status.tag, comm_world)
				at_work.remove(status.source)

				if verbose > 0 then print "Worker {status.source} is done ({at_work.length} still at work)"
			else
				print "Unexpected tag {status.tag}"
				shutdown
				break
			end
		end
		status.free
	end

	# Send a packet of tasks to worker at `rank`
	fun send_task_to(rank: Rank): Bool
	do
		if next_task_id >= tasks.length then return false

		buffer[0] = next_task_id
		next_task_id += tasks_per_packet

		mpi.send_from(buffer, 0, 1, rank, task_tag, comm_world)

		if verbose > 1 then print "sent tasks [{buffer[0]}..{next_task_id}[ to worker {rank}"
		return true
	end

	# Display the accumulated results received from workers
	fun print_results
	do
		print "# results #"
		print "* {results.length} total"
		print "* {results.oks.length + results.ok_empties.length} oks & 0ks"
		print "* {results.fails.length} fails"
		print "* {results.no_savs.length} no savs"
		print "* {results.fixmes.length} fixmes"
		print "* {results.sosos.length} sosos"
		print "* {results.skips.length} skips"
		print "* {results.todos.length} todos"
		print "* {results.skip_execs.length} skip execs"
		print "* {results.unknowns.length} unknowns (bug in tests.sh or nitester)"
	end

	fun print_short_results do print "oks & fails / total: {results.oks.length + results.ok_empties.length} " +
		"& {results.fails.length} / {results.length}"

	# Shutdown anormaly the running tests
	fun shutdown
	do
		print "Shutting down"
		mpi.send_empty(new Rank.any, quit_tag, comm_world)
	end
end

# A worker node which actually execute the tests
class Worker
	super Processor

	# The `Rank` of `self`
	redef var rank: Rank

	# Compilation directory
	var comp_dir = "/dev/shm/nit_compile{rank}" is lazy

	# Directory to store the xml files produced for Jenkins
	var xml_dir = "~/jenkins_xml/"

	# Output file of the `tests.sh` script
	var tests_sh_out = "/dev/shm/nit_local_out{rank}" is lazy

	# Source Nit repository, must be already updated and `make` before execution
	var local_nit = "/dev/shm/nit{rank}" is lazy

	# Remote Nit repository (actually the local source)
	var remote_nit = "~/nit/"

	# Compiled `Regex` to detect the argument of an execution
	var re_arg: Regex = "arg [0-9]+".to_re

	# Compiled `Regex` to detect the alternative of an execution
	var re_alt: Regex = "_alt[0-9]+".to_re

	redef fun run
	do
		read_cli_options
		setup
		create_tasks
		work_on_tasks
		cleanup
	end

	# Setup the testing environment
	#
	# Clone the nit repository.
	fun setup
	do
		if verbose > 0 then sys.system "hostname"

		if local_nit.file_exists then local_nit.rmdir

		exec_and_check "git clone {remote_nit} {local_nit}"
		local_nit.chdir
		exec_and_check "git config remote.origin.fetch +refs/remotes/origin/pr/*:refs/remotes/origin/pr/*"
		exec_and_check "git fetch origin --quiet"
		exec_and_check "git checkout {branch_hash}"
		exec_and_check "cp {remote_nit}/bin/*  bin/"
		exec_and_check "src/git-gen-version.sh"
	end

	private fun exec_and_check(cmd: String)
	do
		if verbose > 0 then
			print "+ {cmd}"
			var res = sys.system(cmd)
			assert res == 0 else print "Command '{cmd}' failed."
		end
	end

	# Clean up the testing environment
	#
	# Delete all temporary files, except `ccache_dir`.
	fun cleanup
	do
		if comp_dir.file_exists then comp_dir.rmdir
		if tests_sh_out.file_exists then tests_sh_out.file_delete
		if local_nit.file_exists then local_nit.file_delete
	end

	# Single C `int` to hold the next task id received from the `Controller`
	var task_buffer = new CIntArray(1)

	# Manage communication with the `Controller` and execute dispatched `TesterTask`s
	fun work_on_tasks
	do
		var status = new Status
		loop
			check_signals

			# We double probe to prevent bug where a single probes does not receive the
			# real next read.
			mpi.probe(controller_rank, new Tag.any, comm_world, status)
			mpi.probe(controller_rank, new Tag.any, comm_world, status)

			if status.tag == task_tag then
				# Receive tasks to execute
				mpi.recv_into(task_buffer, 0, 1, status.source, status.tag, comm_world)
				var first_id = task_buffer[0]
				for task_id in [first_id .. first_id + tasks_per_packet[ do

					# If id is over all known tasks, stop right here
					if task_id >= tasks.length then break
					var task = tasks[task_id]

					"tests".chdir

					# Command line to execute test
					var cmd = "XMLDIR={xml_dir} " +
						"CCACHE_DIR={ccache_dir} CCACHE_TEMPDIR={ccache_dir} CCACHE_BASEDIR={comp_dir} " +
						"./tests.sh --node --engine {task.engine} {task.test_program} > {tests_sh_out}"

					# Execute test
					sys.system cmd

					# Test results were written to file, read them
					var fstream = new FileReader.open(tests_sh_out)
					var content = fstream.read_all
					fstream.close

					# Parse result and prepare them for sending
					#
					# The structure is composed of 4 ints for each result.
					# 1. task id
					# 2. arg number
					# 3. alt number
					# 4. test result as int
					var c = results_count
					for line in content.split('\n') do if not line.is_empty then
						var cc = c*4

						buffer[cc] = task_id

						var arg_match = line.search(re_arg)
						var arg = 0
						if arg_match != null then arg = arg_match.to_s.substring_from(4).to_i
						buffer[cc+1] = arg

						var alt_match = line.search(re_alt)
						var alt = 0
						if alt_match != null then alt = alt_match.to_s.substring_from(4).to_i
						buffer[cc+2] = alt

						var res = null
						if line.has("[ok]") then res = 1
						if line.has("[0k]") then res = 2
						if line.has("[=== no sav ===]") then res = 3
						if line.has("[fixme]") then res = 4
						if line.has("[======= fail") then res = 5
						if line.has("[======= soso") then res = 6
						if line.has("[skip]") then res = 7
						if line.has("[todo]") then res = 8
						if line.has("[skip exec]") then res = 9

						if res == null then
							res = 0
							if verbose > 1 then print "Unknown result: '{line}'"
						end
						buffer[cc+3] = res

						c += 1

						if verbose > 2 then print "tests.sh output line: {line}"

						# If result buffer is full, send to `Controller`
						if c*4 == buffer.length then
							send_results
							c = 0
						end
					end

					if verbose > 1 then print "Done testing: {task}"

					self.results_count = c
				end

				mpi.send_empty(controller_rank, need_work_tag, comm_world)
			else if status.tag == quit_tag then
				# Notification from the `Controller` to quit
				mpi.recv_empty(status.source, status.tag, comm_world)

				# Send remaining results
				send_results

				# Notify `Controller` that `self` is done and will quit
				mpi.send_empty(controller_rank, done_tag, comm_world)
				break
			else
				print "Unexpected tag {status.tag}"
				break
			end
		end
		status.free
	end

	# Total results listed in `buffer` and ready to send
	var results_count = 0

	# Send all results in `buffer` to the `Controller`
	fun send_results
	do
		if results_count > 0 then
			if verbose > 2 then print "Sending {results_count} results"
			mpi.send_from(buffer, 0, results_count*4, controller_rank, result_tag, comm_world)
			results_count = 0
		end
	end

	redef fun receive_signal(signal)
	do
		cleanup
		mpi.finalize
		exit 0
	end
end

# A single test task, on a `test_program` with an `engine`
#
# Note that a task may involve more than one program to test considering the
# alts and args for the `test_program`.
class TesterTask
	# Engine to test executing `test_program`
	var engine: String

	# Program to execute with `engine`
	var test_program: String

	redef fun to_s do return "{engine} {test_program}"
end

# Result of a `TesterTask`
#
# There may be more than one result per `TesterTask`.
class Result
	# `TesterTask` associated to `self`
	var task: TesterTask

	# Argument index of the execution resulting in `self`
	var arg: Int

	# Alternative index of the execution resulting in `self`
	var alt: Int

	# Is `self` result an _ok_?
	var ok = false

	# Is `self` result an _0k_?
	var ok_empty = false

	# Is `self` result a _no sav_?
	var no_sav = false

	# Is `self` result a _fixme_?
	var fixme = false

	# Is `self` result a _fail_?
	var fail = false

	# Is `self` result a _soso_?
	var soso = false

	# Has `self` been skipped?
	var skip = false

	# Is `self` TODO?
	var todo = false

	# Has the execution of `self` been skipped?
	var skip_exec = false

	# Is `self` an unknown result, probably an error
	var unknown = false

	redef fun to_s
	do
		var err = "Unknown"
		if no_sav then err = "no sav"
		if ok then err = "ok"
		if ok_empty then err = "0k"
		if fixme then err = "fixme"
		if fail then err = "fail"
		if soso then err = "soso"
		if skip then err = "skip"
		if todo then err = "todo"
		if skip_exec then err = "skip_exec"

		return "{task} arg{arg} alt{alt} => {err}"
	end
end

# A global and sorted collection of `Result`
class ResultSet
	super HashSet[Result]

	var no_savs = new HashSet[Result]
	var oks = new HashSet[Result]
	var ok_empties = new HashSet[Result]
	var fixmes = new HashSet[Result]
	var fails = new HashSet[Result]
	var sosos = new HashSet[Result]
	var skips = new HashSet[Result]
	var todos = new HashSet[Result]
	var skip_execs = new HashSet[Result]
	var unknowns = new HashSet[Result]

	# TODO remove
	var per_engines = new HashMap[String, Result]

	redef fun add(result)
	do
		if result.no_sav then no_savs.add result
		if result.ok then oks.add result
		if result.ok_empty then ok_empties.add result
		if result.fixme then fixmes.add result
		if result.fail then fails.add result
		if result.soso then sosos.add result
		if result.skip then skips.add result
		if result.todo then todos.add result
		if result.skip_exec then skip_execs.add result
		if result.unknown then unknowns.add result

		super
	end

	redef fun remove(r) do abort

	redef fun clear do abort
end

redef class OptionContext

	# Print usage with a possible error `message`
	private fun usage_error(message: nullable String)
	do
		var ret = 0
		if message != null then
			print "Error: {message}"
			ret = 1
		end

		if comm_world.rank == 0 then
			print "Usage: mpirun nitester [Options] test_program.nit [other_test.nit [...]]"
			usage
		end

		mpi.finalize
		exit ret
	end
end

# On `Worker` nodes, prefix all prints with `rank/comm_world.size`
redef fun print(msg: Object)
do
	if comm_world.rank != 0.rank then
		super "{comm_world.rank}/{comm_world.size}: {msg}"
	else super msg
end

# Running MPI instance
fun mpi: MPI do return once new MPI

# Launch mpi
mpi

# Local rank
var rank = comm_world.rank

var processor: Processor
if rank == 0.rank then
	# If rank == 0, this is the `Controller`
	processor = new Controller
else
	# This is a worker
	processor = new Worker(rank)
end
processor.run

mpi.finalize
