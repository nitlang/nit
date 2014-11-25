# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# A storage medium for a graph.
module graph_store

import neo4j
import console
import flush_stdout

# A storage medium for a graph.
#
# Provides a way to save a Neo4j graph.
abstract class GraphStore

	# Escape control sequence to save the cursor position.
	private var term_save_cursor: String = (new TermSaveCursor).to_s

	# Escape control sequence to rewind to the last saved cursor position.
	private var term_rewind: String = "{new TermRestoreCursor}{new TermEraseDisplayDown}"

	# Is the storage medium already contains at least one node with the specified label?
	fun has_node_label(name: String): Bool is abstract

	# Save all specified Neo4j entities.
	fun save_all(neo_entities: Collection[NeoEntity]) is abstract

	# Prepare the output to show the progress.
	#
	# This method must be called before the first call to `show_progress` or
	# `show_done`.
	protected fun prepare_display do
		printn "{term_save_cursor} "
		flush_stdout
	end

	# Show the progress, in percentage.
	#
	# For use in the implementation of `save_all` only.
	protected fun show_progress(progress: Int) do
		printn "{term_rewind} {progress}% "
		flush_stdout
	end

	# Show a message to indicate that the task finished with success.
	#
	# For use in the implementation of `save_all` only.
	protected fun show_done do
		print "{term_rewind} Done."
		flush_stdout
	end
end

# An actual Neo4j database as a storage medium.
class Neo4jStore
	super GraphStore

	# How many operations can be executed in one batch?
	private var batch_max_size = 1000

	# The Neo4j client to use.
	var client: Neo4jClient

	redef fun has_node_label(name: String): Bool do
		var query = new CypherQuery.from_string(
				"match n where \{name\} in labels(n) return count(n)")
		query.params["name"] = name
		var data = client.cypher(query).as(JsonObject)["data"]
		var result = data.as(JsonArray).first.as(JsonArray).first.as(Int)
		return result > 0
	end

	redef fun save_all(neo_entities: Collection[NeoEntity]) do
		var batch = new NeoBatch(client)
		var len = neo_entities.length
		var sum = 0
		var i = 1

		prepare_display
		for nentity in neo_entities do
			batch.save_entity(nentity)
			if i == batch_max_size then
				do_batch(batch)
				sum += batch_max_size
				show_progress(sum * 100 / len)
				batch = new NeoBatch(client)
				i = 1
			else
				i += 1
			end
		end
		do_batch(batch)
		show_done
	end

	# Execute `batch` and check for errors.
	#
	# Abort if `batch.execute` returns errors.
	private fun do_batch(batch: NeoBatch) do
		var errors = batch.execute
		if not errors.is_empty then
			for e in errors do sys.stderr.write("{sys.program_name}: {e}\n")
			exit(1)
		end
	end
end
