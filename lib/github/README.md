# Nit wrapper for Github API

This module provides a Nit object oriented interface to access the Github api.

## Accessing the API

[[doc: GithubAPI]]

### Authentification

[[doc: auth]]

Token can also be recovered from user config with `get_github_oauth`.

[[doc: get_github_oauth]]

### Retrieving user data

[[doc: load_user]]
[[doc: User]]
[[defs: User]]

### Retrieving repo data

[[doc: load_repo]]
[[doc: Repo]]
[[defs: Repo]]

### Other data

[[defs: github::api]]

### Advanced uses

#### Caching

[[doc: cache]]

#### Custom requests

[[doc: github::GithubAPI::get]]

#### Change the user agent

[[doc: github::GithubAPI::user_agent]]

#### Debugging

[[doc: verbose_lvl]]

#### Using with GitLab

If URL scheme of GitLab API follows the one of Github API, it may be possible to
configure this wrapper to use a custom URL.

[[doc: api_url]]

## Creating hooks

Using this API you can create Github hooks able to respond to actions performed
on a repository.

[[doc: hooks]]

## Dealing with events

GithubAPI can trigger different events depending on the hook configuration.

[[doc: GithubEvent]]

[[defs: github::events]]
