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

module api_model

import api_base

redef class APIRouter
	redef init do
		super
		use("/list", new APIList(config))
		use("/random", new APIRandom(config))
		use("/search", new APISearch(config))

		use("/entity/:id", new APIEntity(config))
		use("/doc/:id", new APIEntityDoc(config))
		use("/code/:id", new APIEntityCode(config))
		use("/lin/:id", new APIEntityLinearization(config))
		use("/defs/:id", new APIEntityDefs(config))
		use("/intros/:id", new APIEntityIntros(config))
		use("/redefs/:id", new APIEntityRedefs(config))
		use("/meta/:id", new APIEntityMetadata(config))
		use("/all/:id", new APIEntityAll(config))

		use("/ancestors/:id", new APIEntityAncestors(config))
		use("/parents/:id", new APIEntityParents(config))
		use("/children/:id", new APIEntityChildren(config))
		use("/descendants/:id", new APIEntityDescendants(config))

		use("/uml/:id", new APIEntityUML(config))
		use("/graph/inheritance/:id", new APIInheritanceGraph(config))

		use("/catalog/packages/", new APICatalogPackages(config))
		use("/catalog/stats", new APICatalogStats(config))
		use("/catalog/tags", new APICatalogTags(config))
		use("/catalog/tag/:tid", new APICatalogTag(config))
		use("/catalog/person/:pid", new APICatalogPerson(config))
		use("/catalog/person/:pid/maintaining", new APICatalogMaintaining(config))
		use("/catalog/person/:pid/contributing", new APICatalogContributing(config))

		use("/ini/desc/:id", new APIIniDesc(config))
		use("/ini/git/:id", new APIIniGit(config))
		use("/ini/clone/:id", new APIIniClone(config))
		use("/ini/issues/:id", new APIIniIssues(config))
		use("/ini/maintainer/:id", new APIIniMaintainer(config))
		use("/ini/contributors/:id", new APIIniContributors(config))
		use("/ini/license/:id", new APIIniLicense(config))
		use("/ini/license-file/:id", new APIIniLicenseFile(config))
		use("/ini/license-content/:id", new APIIniLicenseFileContent(config))
		use("/ini/contrib-file/:id", new APIIniContribFile(config))
		use("/ini/contrib-content/:id", new APIIniContribFileContent(config))
	end
end

# An API Handler that use a DocCommand to respond
abstract class APICommand
	super APIHandler

	# Return the doc command to apply for self
	fun command: DocCommand is abstract

	redef fun get(req, res) do
		var command = self.command
		var status = command.http_init(req)
		if status isa CmdError then
			res.api_error(status.http_status_code, status.to_s)
			return
		end
		res.api_json(req, command.to_json)
	end
end

# CmdModel

# List all mentities.
#
# Example: `GET /list?kind=modules?limit=10`
class APIList
	super APICommand

	redef fun command do return new CmdModelEntities(config.model)
end

# Return a random list of MEntities.
#
# Example: `GET /random?kind=modules&limit=10`
class APIRandom
	super APICommand

	redef fun command do return new CmdRandomEntities(config.model)
end

# Search mentities from a cmd string.
#
# Example: `GET /search?q=Arr`
class APISearch
	super APIList

	redef fun command do return new CmdCatalogSearch(config.model, config.catalog)
end

# CmdEntity

# Return the JSON representation of a MEntity.
#
# Example: `GET /entity/core::Array`
class APIEntity
	super APICommand

	redef fun command do return new CmdEntity(config.model)
end

# Return the full MDoc of a MEntity.
#
# Example: `GET /entity/core::Array/doc`
class APIEntityDoc
	super APICommand

	redef fun command do return new CmdComment(config.model)
end

# List MEntity ancestors
#
# Example: `GET /ancestors/core::Array`
class APIEntityAncestors
	super APICommand

	redef fun command do return new CmdAncestors(config.model, config.mainmodule)
end

# List MEntity parents
#
# Example: `GET /parents/core::Array`
class APIEntityParents
	super APICommand

	redef fun command do return new CmdParents(config.model, config.mainmodule)
end

# List MEntity children
#
# Example: `GET /children/core::Array`
class APIEntityChildren
	super APICommand

	redef fun command do return new CmdChildren(config.model, config.mainmodule)
end

# List MEntity descendants
#
# Example: `GET /descendants/core::Array`
class APIEntityDescendants
	super APICommand

	redef fun command do return new CmdDescendants(config.model, config.mainmodule)
end

# Linearize super definitions of a MClassDef or a MPropDef if any.
#
# Example: `GET /linearization/core::Array`
class APIEntityLinearization
	super APICommand

	redef fun command do return new CmdLinearization(config.model, config.mainmodule)
end

# List definitions of a MEntity.
#
# Example: `GET /defs/core::Array`
class APIEntityDefs
	super APICommand

	redef fun command do return new CmdFeatures(config.model)
end

# List intro definitions of a MEntity.
#
# Example: `GET /intros/core::Array`
class APIEntityIntros
	super APICommand

	redef fun command do return new CmdIntros(config.model, config.mainmodule)
end

# List redef definitions of a MEntity.
#
# Example: `GET /redefs/core::Array`
class APIEntityRedefs
	super APICommand

	redef fun command do return new CmdRedefs(config.model, config.mainmodule)
end

# List all definitions accessible from a MEntity.
#
# Example: `GET /all/core::Array`
class APIEntityAll
	super APICommand

	redef fun command do return new CmdAllProps(config.model, config.mainmodule)
end

# Return the source code of MEntity.
#
# Example: `GET /code/core::Array`
class APIEntityCode
	super APICommand

	redef fun command do return new CmdEntityCode(config.model, config.modelbuilder)
end

# Return the UML diagram for MEntity.
#
# Example: `GET /uml/core::Array`
class APIEntityUML
	super APICommand

	redef fun command do return new CmdUML(config.model, config.mainmodule)
end

# Return the inheritance graph for MEntity.
#
# Example: `GET /inheritance/core::Array`
class APIInheritanceGraph
	super APICommand

	redef fun command do return new CmdInheritanceGraph(config.model, config.mainmodule)
end

# CmdCatalog

# Get all the packages from the catalog using pagination
#
# `GET /packages?p=1&n=10`: get the list of catalog by page
class APICatalogPackages
	super APICommand

	redef fun command do return new CmdCatalogPackages(config.model, config.catalog)
end

# Get the catalog statistics
#
# `GET /stats`: return the catalog statistics
class APICatalogStats
	super APICommand

	redef fun command do return new CmdCatalogStats(config.model, config.catalog)
end

# Get the package metadata
#
# `GET /:id/metadata`: return a paginated list of packages
class APIEntityMetadata
	super APICommand

	redef fun command do return new CmdMetadata(config.model)
end

# Get all the tags from the catalog
#
# `GET /tags`: the list of tags associated with their number of packages
class APICatalogTags
	super APICommand

	redef fun command do return new CmdCatalogTags(config.model, config.catalog)
end

# Get the packages related to a tag
#
# `GET /tag/:tid?p=1&n=10`: return a paginated list of packages
class APICatalogTag
	super APICommand

	redef fun command do return new CmdCatalogTag(config.model, config.catalog)
end

# Get a person existing in the catalog
#
# `GET /person/:pid`: get the person with `pid`
class APICatalogPerson
	super APICommand

	redef fun command do return new CmdCatalogPerson(config.model, config.catalog)
end

# Get the list of mpackages maintained by a person
#
# `GET /person/:pid/maintaining?p=1&n=10`: return a paginated list of packages
class APICatalogMaintaining
	super APICommand

	redef fun command do return new CmdCatalogMaintaining(config.model, config.catalog)
end

# Get the list of mpackages contributed by a person
#
# `GET /person/:pid/contributing?p=1&n=10`: return a paginated list of packages
class APICatalogContributing
	super APICommand

	redef fun command do return new CmdCatalogContributing(config.model, config.catalog)
end

# CmdIni

# Get the package description from the ini file
#
# `GET /ini/desc/:pid`: return the package description
class APIIniDesc
	super APICommand

	redef fun command do return new CmdIniDescription(config.model)
end

# Get the package Git URL from the ini file
#
# `GET /ini/git/:pid`: return the package Git URL
class APIIniGit
	super APICommand

	redef fun command do return new CmdIniGitUrl(config.model)
end

# Get the package Git clone command from the ini file
#
# `GET /ini/clone/:pid`: return the package Git clone command
class APIIniClone
	super APICommand

	redef fun command do return new CmdIniCloneCommand(config.model)
end

# Get the package issues URL from the ini file
#
# `GET /ini/issues/:pid`: return the package issues URL
class APIIniIssues
	super APICommand

	redef fun command do return new CmdIniIssuesUrl(config.model)
end

# Get the package maintainer from the ini file
#
# `GET /ini/maintainer/:pid`: return the package maintainer
class APIIniMaintainer
	super APICommand

	redef fun command do return new CmdIniMaintainer(config.model)
end

# Get the package contributors from the ini file
#
# `GET /ini/clone/:pid`: return the package contributors
class APIIniContributors
	super APICommand

	redef fun command do return new CmdIniContributors(config.model)
end

# Get the package license from the ini file
#
# `GET /ini/clone/:pid`: return the package license
class APIIniLicense
	super APICommand

	redef fun command do return new CmdIniLicense(config.model)
end

# Get the package license file
#
# `GET /ini/license-file/:pid`: return the package license file
class APIIniLicenseFile
	super APICommand

	redef fun command do return new CmdLicenseFile(config.model)
end

# Get the package contrib file
#
# `GET /ini/contrib-file/:pid`: return the package contrib file
class APIIniContribFile
	super APICommand

	redef fun command do return new CmdContribFile(config.model)
end

# Get the package license file content
#
# `GET /ini/license-file/:pid`: return the package license file content
class APIIniLicenseFileContent
	super APICommand

	redef fun command do return new CmdLicenseFileContent(config.model)
end

# Get the package contrib file content
#
# `GET /ini/contrib-file/:pid`: return the package contrib file content
class APIIniContribFileContent
	super APICommand

	redef fun command do return new CmdContribFileContent(config.model)
end
