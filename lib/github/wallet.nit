# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>
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

# Github OAuth tokens management
#
# When using batch mode with the `github` API, we can rapidly reach the rate
# limit allowed by Github.
#
# One solution consists in using a wallet of tokens so we can rely on more than
# one token and switch them when one become exhausted.
#
# ## Using the Github wallet to check tokens
#
# One functionality of the wallet is to check the validity of a token against
# the API. `check_token` will return false if a token is invalid or exhausted.
#
# ~~~
# var wallet = new GithubWallet
# assert not wallet.check_token("this is a bad token")
# ~~~
#
# ## Storing tokens
#
# The wallet can also be used to store tokens and check all of them.
#
# ~~~
# wallet = new GithubWallet
# wallet.add "some token"
# wallet.add "some other token"
# ~~~
#
# or
#
# ~~~
# wallet = new GithubWallet.from_tokens(["token 1", "token 2"])
# ~~~
#
# The `show_status` method can be used to display a summary of the validity of
# each token in the wallet.
#
# ~~~
# wallet.show_status
# ~~~
#
# Will display something like this:
#
# ~~~raw
# Wallet (2 tokens):
#  * [OK] token 1
#  * [KO] token 2
# ~~~
#
# ## Using the wallet to obtain a Github API client
#
# Using the wallet you can cycle through tokens and obtain a new Github API client
# instance with a fresh rate limit.
#
# ~~~
# wallet = new GithubWallet.from_tokens(["token 1", "token 2"])
# var api = wallet.api
# ~~~
#
# The wallet will automatically cycle through the registered tokens to find one
# that works.
#
# If no valid token is found after all of them was tried, the wallet returns a
# client based on the last tried one.
module wallet

import github
import console

# Github OAuth tokens wallet
class GithubWallet

	# Github API tokens
	var tokens = new Array[String]

	# Init `self` from a collection of tokens
	init from_tokens(tokens: Collection[String]) do self.tokens.add_all tokens

	# Do not use colors in console output
	var no_colors = false is writable

	# Display debug information about the token processing
	var verbose = false is writable

	# Add a new token in the wallet
	fun add(token: String) do tokens.add token

	# Get an instance of GithubAPI based on the next available token.
	#
	# If no token is found, return an api based on the last exhausted token.
	fun api: GithubAPI do
		var token
		if tokens.is_empty then
			message "No tokens, using `get_github_oauth`"
			token = get_github_oauth
		else
			token = get_next_token
			var tried = 0
			while not check_token(token) do
				if tried >= tokens.length - 1 then
					message "Exhausted all tokens, using {token}"
					break
				end
				tried += 1
				token = get_next_token
			end
		end
		var api = new GithubAPI(token)
		api.enable_cache = true
		return api
	end

	# The current index in the `tokens` array
	private var current_index = 0

	# The current token in the `tokens` array based on `current_index`
	fun current_token: String do return tokens[current_index]

	# Get the next token in token `array` based on `current_token`.
	#
	# If the end of the list is reached, start again from the begining.
	fun get_next_token: String do
		if tokens.is_empty then
			return get_github_oauth
		end
		var token = current_token

		if current_index < tokens.length - 1 then
			current_index += 1
		else
			current_index = 0
		end
		return token
	end

	# Check if a token is valid
	fun check_token(token: String): Bool do
		message "Try token {token}"
		var api = new GithubAPI(token)
		api.get_repo("nitlang/nit")
		return not api.was_error
	end

	# Print a message depending on `verbose`
	fun message(message: String) do if verbose then print "[Github Wallet] {message}"

	# Show wallet status in console
	fun show_status do
		if tokens.is_empty then
			print "Wallet is empty"
			return
		end
		print "Wallet ({tokens.length} tokens):"
		for token in tokens do
			var status
			if check_token(token) then
				status = if no_colors then "OK" else "OK".green
			else
				status = if no_colors then "KO" else "KO".red
			end
			print " * [{status}] {token}"
		end
	end
end
