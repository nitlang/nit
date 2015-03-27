# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Templates and other services to create XCode projects
module xcode_templates

import template

import platform
import compiler::abstract_compiler

redef class Sys
	# Map to identify the PBX file type for a given file extension
	private var pbx_file_types: Map[String, String] is lazy do
		var map = new HashMap[String, String]

		# Source code
		map["m"] =			"sourcecode.c.objc"
		map["c"] =			"sourcecode.c.c"
		map["h"] =			"sourcecode.c.h"
		map["cpp"] =		"sourcecode.cpp.cpp"
		map["hpp"] =		"sourcecode.cpp.h"
		map["vsh"] =		"sourcecode.glsl"
		map["fsh"] =		"sourcecode.glsl"

		# Images
		map["png"] =		"image.png"
		map["gif"] =		"image.gif"
		map["jpg"] =		"image.jpeg"
		map["jpeg"] =		"image.jpeg"
		map["pdf"] =		"image.pdf"
		map["ico"] =		"image.ico"

		# Others
		map["app"] =		"wrapper.application"
		map["plist"] =		"text.plist.xml"
		map["storyboard"] =	"file.storyboard"
		map["xib"] =		"file.xib"
		map["xcassets"] =	"folder.assetcatalog"
		map["xctest"] =		"wrapper.cfbundle"

		return map
	end

	# Generator of PBX UUIDs quique to an execution of the compiler
	private var pbx_uuid_generator = new PbxUUIDGenerator is lazy
end

# Generator of PBX UUIDs
#
# PBX UUID are composed of 24 hex characters.
# They only need to be unique within the same project.
#
# This implementation simply counts upward from 0.
class PbxUUIDGenerator
	private var seed = 0

	# Generate a new UUID
	fun next_uuid: String
	do
		seed += 1

		var hex_val = seed.to_hex.to_upper
		return "0"*(24-hex_val.length) + hex_val
	end
end

# Reference to a file for the PBX format of a project file
#
# TODO create subclasses for different file types, this is currently for
# compilable source files only.
class PbxFile

	# Path to `self`
	var path: String

	# UUID for build elements
	private var build_uuid: String = sys.pbx_uuid_generator.next_uuid is lazy

	# File reference UUID
	private var ref_uuid: String = sys.pbx_uuid_generator.next_uuid is lazy

	# Documentation to add besides this file in the template
	private fun doc: String do return path

	# PBX file type for `self`
	fun file_type: String
	do
		var map = sys.pbx_file_types
		var ext = path.file_extension
		if ext != null and map.keys.has(ext) then return map[ext]
		return "unknown"
	end

	# PBX description of this file
	private fun description: Writable do return """
		{{{ref_uuid}}} /* {{{doc}}} */ = {
			isa = PBXFileReference;
			fileEncoding = 4;
			lastKnownFileType = {{{file_type}}};
			path = {{{path}}};
			sourceTree = "<group>";
			};
"""

	private fun add_to_project(project: PbxprojectTemplate)
	do
		project.source_files.add self
		project.files.add self
	end
end

# Template for a PBX project file, usually a `project.pbcproj`
#
# This file list all information required to build an XCode project.
# It would usually be written and read by XCode.
# From the command line, xcodebuild can read this file but not write it.
#
# Information in the file (simplified list):
#
# * Compilable source files
# * Asset files
# * Build configurations (Release and debug modes, cflags, etc.)
# * List of files composing the project
class PbxprojectTemplate
	super Template

	# Name of the project
	var name: String

	# All body/implementation source files to be compiled
	private var source_files = new Array[PbxFile]

	# All asset files added to the app package
	private var asset_files = new Array[PbxFile]

	# All files used by this project
	private var files = new Array[PbxFile]

	# Add `file` to this project
	fun add_file(file: PbxFile) do file.add_to_project(self)

	redef fun rendering
	do
		add """
// !$*UTF8*$!
{
	archiveVersion = 1;
	classes = {
	};
	objectVersion = 46;
	objects = {

/* Begin PBXBuildFile section */
"""

		# List build files (compilable sources and assets) with their reference UUID
		for array in [source_files, asset_files] do for file in array do add """
		{{{file.build_uuid}}} /* {{{file.doc}}} */ = {
			isa = PBXBuildFile;
			fileRef = {{{file.ref_uuid}}} /* {{{file.doc}}} */;
			};
"""

		add """
/* End PBXBuildFile section */

/* Begin PBXContainerItemProxy section */
		AF9F83EA1A5F0D21004B62C0 /* PBXContainerItemProxy */ = {
			isa = PBXContainerItemProxy;
			containerPortal = AF9F83C41A5F0D21004B62C0 /* Project object */;
			proxyType = 1;
			remoteGlobalIDString = AF9F83CB1A5F0D21004B62C0;
			remoteInfo = {{{name}}};
		};
/* End PBXContainerItemProxy section */

/* Begin PBXFileReference section */
	/* Static generated files */
		AF9F83CC1A5F0D21004B62C0 /* {{{name}}}.app */ = {
			isa = PBXFileReference;
			explicitFileType = wrapper.application;
			includeInIndex = 0;
			path = {{{name}}}.app;
			sourceTree = BUILT_PRODUCTS_DIR;
			};
		AF9F83D01A5F0D21004B62C0 /* Info.plist */ = {
			isa = PBXFileReference;
			lastKnownFileType = text.plist.xml;
			path = Info.plist;
			sourceTree = "<group>";
			};
		AF9F83DE1A5F0D21004B62C0 /* Base */ = {
			isa = PBXFileReference;
			lastKnownFileType = file.storyboard;
			name = Base;
			path = Base.lproj/Main.storyboard;
			sourceTree = "<group>";
			};
		AF9F83E01A5F0D21004B62C0 /* Images.xcassets */ = {
			isa = PBXFileReference;
			lastKnownFileType = folder.assetcatalog;
			path = Images.xcassets;
			sourceTree = "<group>";
			};
		AF9F83E31A5F0D21004B62C0 /* Base */ = {
			isa = PBXFileReference;
			lastKnownFileType = file.xib;
			name = Base;
			path = Base.lproj/LaunchScreen.xib;
			sourceTree = "<group>";
			};
		AF9F83E91A5F0D21004B62C0 /* {{{name}}}Tests.xctest */ = {
			isa = PBXFileReference;
			explicitFileType = wrapper.cfbundle;
			includeInIndex = 0;
			path = {{{name}}}Tests.xctest;
			sourceTree = BUILT_PRODUCTS_DIR;
			};
		AF9F83EE1A5F0D21004B62C0 /* Info.plist */ = {
			isa = PBXFileReference;
			lastKnownFileType = text.plist.xml;
			path = Info.plist;
			sourceTree = "<group>";
			};
		AF9F83EF1A5F0D21004B62C0 /* {{{name}}}Tests.m */ = {
			isa = PBXFileReference;
			lastKnownFileType = sourcecode.c.objc;
			path = {{{name}}}Tests.m;
			sourceTree = "<group>";
			};

	/* Changing generated files */
"""
		# Describe all known files
		for file in files do add file.description

		add """
/* End PBXFileReference section */

/* Begin PBXFrameworksBuildPhase section */
		AF9F83C91A5F0D21004B62C0 /* Frameworks */ = {
			isa = PBXFrameworksBuildPhase;
			buildActionMask = 2147483647;
			files = (
			);
			runOnlyForDeploymentPostprocessing = 0;
		};
		AF9F83E61A5F0D21004B62C0 /* Frameworks */ = {
			isa = PBXFrameworksBuildPhase;
			buildActionMask = 2147483647;
			files = (
			);
			runOnlyForDeploymentPostprocessing = 0;
		};
/* End PBXFrameworksBuildPhase section */

/* Begin PBXGroup section */
		AF9F83C31A5F0D21004B62C0 = {
			isa = PBXGroup;
			children = (
				AF9F83CE1A5F0D21004B62C0 /* {{{name}}} */,
				AF9F83EC1A5F0D21004B62C0 /* {{{name}}}Tests */,
				AF9F83CD1A5F0D21004B62C0 /* Products */,
			);
			sourceTree = "<group>";
		};
		AF9F83CD1A5F0D21004B62C0 /* Products */ = {
			isa = PBXGroup;
			children = (
				AF9F83CC1A5F0D21004B62C0 /* {{{name}}}.app */,
				AF9F83E91A5F0D21004B62C0 /* {{{name}}}Tests.xctest */,
			);
			name = Products;
			sourceTree = "<group>";
		};
		AF9F83CE1A5F0D21004B62C0 /* {{{name}}} */ = {
			isa = PBXGroup;
			children = (
"""
			# Reference all known files
			for file in files do add """
				{{{file.ref_uuid}}} /* {{{file.doc}}} */,
"""

		add """
			);
			path = {{{name}}};
			sourceTree = "<group>";
		};
		AF9F83CF1A5F0D21004B62C0 /* Supporting Files */ = {
			isa = PBXGroup;
			children = (
				AF9F83D01A5F0D21004B62C0 /* Info.plist */,
				AF9F83D11A5F0D21004B62C0 /* main.m */,
			);
			name = "Supporting Files";
			sourceTree = "<group>";
		};
		AF9F83EC1A5F0D21004B62C0 /* {{{name}}}Tests */ = {
			isa = PBXGroup;
			children = (
				AF9F83EF1A5F0D21004B62C0 /* {{{name}}}Tests.m */,
				AF9F83ED1A5F0D21004B62C0 /* Supporting Files */,
			);
			path = {{{name}}}Tests;
			sourceTree = "<group>";
		};
		AF9F83ED1A5F0D21004B62C0 /* Supporting Files */ = {
			isa = PBXGroup;
			children = (
				AF9F83EE1A5F0D21004B62C0 /* Info.plist */,
			);
			name = "Supporting Files";
			sourceTree = "<group>";
		};
/* End PBXGroup section */

/* Begin PBXNativeTarget section */
		AF9F83CB1A5F0D21004B62C0 /* {{{name}}} */ = {
			isa = PBXNativeTarget;
			buildConfigurationList = AF9F83F31A5F0D21004B62C0 /* Build configuration list for PBXNativeTarget "{{{name}}}" */;
			buildPhases = (
				AF9F83C81A5F0D21004B62C0 /* Sources */,
				AF9F83C91A5F0D21004B62C0 /* Frameworks */,
				AF9F83CA1A5F0D21004B62C0 /* Resources */,
			);
			buildRules = (
			);
			dependencies = (
			);
			name = {{{name}}};
			productName = {{{name}}};
			productReference = AF9F83CC1A5F0D21004B62C0 /* {{{name}}}.app */;
			productType = "com.apple.product-type.application";
		};
		AF9F83E81A5F0D21004B62C0 /* {{{name}}}Tests */ = {
			isa = PBXNativeTarget;
			buildConfigurationList = AF9F83F61A5F0D21004B62C0 /* Build configuration list for PBXNativeTarget "{{{name}}}Tests" */;
			buildPhases = (
				AF9F83E51A5F0D21004B62C0 /* Sources */,
				AF9F83E61A5F0D21004B62C0 /* Frameworks */,
				AF9F83E71A5F0D21004B62C0 /* Resources */,
			);
			buildRules = (
			);
			dependencies = (
				AF9F83EB1A5F0D21004B62C0 /* PBXTargetDependency */,
			);
			name = {{{name}}}Tests;
			productName = {{{name}}}Tests;
			productReference = AF9F83E91A5F0D21004B62C0 /* {{{name}}}Tests.xctest */;
			productType = "com.apple.product-type.bundle.unit-test";
		};
/* End PBXNativeTarget section */

/* Begin PBXProject section */
		AF9F83C41A5F0D21004B62C0 /* Project object */ = {
			isa = PBXProject;
			attributes = {
				LastUpgradeCheck = 0610;
				TargetAttributes = {
					AF9F83CB1A5F0D21004B62C0 = {
						CreatedOnToolsVersion = 6.1.1;
					};
					AF9F83E81A5F0D21004B62C0 = {
						CreatedOnToolsVersion = 6.1.1;
						TestTargetID = AF9F83CB1A5F0D21004B62C0;
					};
				};
			};
			buildConfigurationList = AF9F83C71A5F0D21004B62C0 /* Build configuration list for PBXProject "{{{name}}}" */;
			compatibilityVersion = "Xcode 3.2";
			developmentRegion = English;
			hasScannedForEncodings = 0;
			knownRegions = (
				en,
				Base,
			);
			mainGroup = AF9F83C31A5F0D21004B62C0;
			productRefGroup = AF9F83CD1A5F0D21004B62C0 /* Products */;
			projectDirPath = "";
			projectRoot = "";
			targets = (
				AF9F83CB1A5F0D21004B62C0 /* {{{name}}} */,
				AF9F83E81A5F0D21004B62C0 /* {{{name}}}Tests */,
			);
		};
/* End PBXProject section */

/* Begin PBXResourcesBuildPhase section */
		AF9F83CA1A5F0D21004B62C0 /* Resources */ = {
			isa = PBXResourcesBuildPhase;
			buildActionMask = 2147483647;
			files = (
"""
		# Reference all asset files by their build UUID
		for file in asset_files do add """
				{{{file.build_uuid}}} /* {{{file.doc}}} */,
"""

		add """
			);
			runOnlyForDeploymentPostprocessing = 0;
		};
		AF9F83E71A5F0D21004B62C0 /* Resources */ = {
			isa = PBXResourcesBuildPhase;
			buildActionMask = 2147483647;
			files = (
			);
			runOnlyForDeploymentPostprocessing = 0;
		};
/* End PBXResourcesBuildPhase section */

/* Begin PBXSourcesBuildPhase section */
		AF9F83C81A5F0D21004B62C0 /* Sources */ = {
			isa = PBXSourcesBuildPhase;
			buildActionMask = 2147483647;
			files = (
"""
		# Reference all compilable source files by their build UUID
		for file in source_files do add """
				{{{file.build_uuid}}} /* {{{file.doc}}} */,
"""
		add """
			);
			runOnlyForDeploymentPostprocessing = 0;
		};
		AF9F83E51A5F0D21004B62C0 /* Sources */ = {
			isa = PBXSourcesBuildPhase;
			buildActionMask = 2147483647;
			files = (
				AF9F83F01A5F0D21004B62C0 /* {{{name}}}Tests.m in Sources */,
			);
			runOnlyForDeploymentPostprocessing = 0;
		};
/* End PBXSourcesBuildPhase section */

/* Begin PBXTargetDependency section */
		AF9F83EB1A5F0D21004B62C0 /* PBXTargetDependency */ = {
			isa = PBXTargetDependency;
			target = AF9F83CB1A5F0D21004B62C0 /* {{{name}}} */;
			targetProxy = AF9F83EA1A5F0D21004B62C0 /* PBXContainerItemProxy */;
		};
/* End PBXTargetDependency section */

/* Begin PBXVariantGroup section */
		AF9F83DD1A5F0D21004B62C0 /* Main.storyboard */ = {
			isa = PBXVariantGroup;
			children = (
				AF9F83DE1A5F0D21004B62C0 /* Base */,
			);
			name = Main.storyboard;
			sourceTree = "<group>";
		};
		AF9F83E21A5F0D21004B62C0 /* LaunchScreen.xib */ = {
			isa = PBXVariantGroup;
			children = (
				AF9F83E31A5F0D21004B62C0 /* Base */,
			);
			name = LaunchScreen.xib;
			sourceTree = "<group>";
		};
/* End PBXVariantGroup section */

/* Begin XCBuildConfiguration section */
		AF9F83F11A5F0D21004B62C0 /* Debug */ = {
			isa = XCBuildConfiguration;
			buildSettings = {
				ALWAYS_SEARCH_USER_PATHS = NO;
				CLANG_CXX_LANGUAGE_STANDARD = "gnu++0x";
				CLANG_CXX_LIBRARY = "libc++";
				CLANG_ENABLE_MODULES = YES;
				CLANG_ENABLE_OBJC_ARC = YES;
				CLANG_WARN_OBJC_ROOT_CLASS = YES_ERROR;
				CLANG_WARN__DUPLICATE_METHOD_MATCH = YES;
				"CODE_SIGN_IDENTITY[sdk=iphoneos*]" = "iPhone Developer";
				COPY_PHASE_STRIP = NO;
				ENABLE_STRICT_OBJC_MSGSEND = YES;
				GCC_C_LANGUAGE_STANDARD = gnu99;
				GCC_DYNAMIC_NO_PIC = NO;
				GCC_OPTIMIZATION_LEVEL = 0;
				GCC_PREPROCESSOR_DEFINITIONS = (
					"DEBUG=1",
					"$(inherited)",
				);
				GCC_SYMBOLS_PRIVATE_EXTERN = NO;
				GCC_WARN_ABOUT_RETURN_TYPE = YES_ERROR;
				GCC_WARN_UNDECLARED_SELECTOR = YES;
				GCC_WARN_UNINITIALIZED_AUTOS = YES_AGGRESSIVE;
				IPHONEOS_DEPLOYMENT_TARGET = 8.1;
				MTL_ENABLE_DEBUG_INFO = YES;
				ONLY_ACTIVE_ARCH = YES;
				SDKROOT = iphoneos;
				TARGETED_DEVICE_FAMILY = "1,2";
			};
			name = Debug;
		};
		AF9F83F21A5F0D21004B62C0 /* Release */ = {
			isa = XCBuildConfiguration;
			buildSettings = {
				ALWAYS_SEARCH_USER_PATHS = NO;
				CLANG_CXX_LANGUAGE_STANDARD = "gnu++0x";
				CLANG_CXX_LIBRARY = "libc++";
				CLANG_ENABLE_MODULES = YES;
				CLANG_ENABLE_OBJC_ARC = YES;
				CLANG_WARN_OBJC_ROOT_CLASS = YES_ERROR;
				CLANG_WARN__DUPLICATE_METHOD_MATCH = YES;
				"CODE_SIGN_IDENTITY[sdk=iphoneos*]" = "iPhone Developer";
				COPY_PHASE_STRIP = YES;
				ENABLE_NS_ASSERTIONS = NO;
				ENABLE_STRICT_OBJC_MSGSEND = YES;
				GCC_C_LANGUAGE_STANDARD = gnu99;
				GCC_WARN_ABOUT_RETURN_TYPE = YES_ERROR;
				GCC_WARN_UNDECLARED_SELECTOR = YES;
				GCC_WARN_UNINITIALIZED_AUTOS = YES_AGGRESSIVE;
				IPHONEOS_DEPLOYMENT_TARGET = 8.1;
				MTL_ENABLE_DEBUG_INFO = NO;
				SDKROOT = iphoneos;
				TARGETED_DEVICE_FAMILY = "1,2";
				VALIDATE_PRODUCT = YES;
			};
			name = Release;
		};
		AF9F83F41A5F0D21004B62C0 /* Debug */ = {
			isa = XCBuildConfiguration;
			buildSettings = {
				ASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;
				INFOPLIST_FILE = {{{name}}}/Info.plist;
				LD_RUNPATH_SEARCH_PATHS = "$(inherited) @executable_path/Frameworks";
				PRODUCT_NAME = "$(TARGET_NAME)";
			};
			name = Debug;
		};
		AF9F83F51A5F0D21004B62C0 /* Release */ = {
			isa = XCBuildConfiguration;
			buildSettings = {
				ASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;
				INFOPLIST_FILE = {{{name}}}/Info.plist;
				LD_RUNPATH_SEARCH_PATHS = "$(inherited) @executable_path/Frameworks";
				PRODUCT_NAME = "$(TARGET_NAME)";
			};
			name = Release;
		};
		AF9F83F71A5F0D21004B62C0 /* Debug */ = {
			isa = XCBuildConfiguration;
			buildSettings = {
				BUNDLE_LOADER = "$(TEST_HOST)";
				FRAMEWORK_SEARCH_PATHS = (
					"$(SDKROOT)/Developer/Library/Frameworks",
					"$(inherited)",
				);
				GCC_PREPROCESSOR_DEFINITIONS = (
					"DEBUG=1",
					"$(inherited)",
				);
				INFOPLIST_FILE = {{{name}}}Tests/Info.plist;
				LD_RUNPATH_SEARCH_PATHS = "$(inherited) @executable_path/Frameworks @loader_path/Frameworks";
				PRODUCT_NAME = "$(TARGET_NAME)";
				TEST_HOST = "$(BUILT_PRODUCTS_DIR)/{{{name}}}.app/{{{name}}}";
			};
			name = Debug;
		};
		AF9F83F81A5F0D21004B62C0 /* Release */ = {
			isa = XCBuildConfiguration;
			buildSettings = {
				BUNDLE_LOADER = "$(TEST_HOST)";
				FRAMEWORK_SEARCH_PATHS = (
					"$(SDKROOT)/Developer/Library/Frameworks",
					"$(inherited)",
				);
				INFOPLIST_FILE = {{{name}}}Tests/Info.plist;
				LD_RUNPATH_SEARCH_PATHS = "$(inherited) @executable_path/Frameworks @loader_path/Frameworks";
				PRODUCT_NAME = "$(TARGET_NAME)";
				TEST_HOST = "$(BUILT_PRODUCTS_DIR)/{{{name}}}.app/{{{name}}}";
			};
			name = Release;
		};
/* End XCBuildConfiguration section */

/* Begin XCConfigurationList section */
		AF9F83C71A5F0D21004B62C0 /* Build configuration list for PBXProject "{{{name}}}" */ = {
			isa = XCConfigurationList;
			buildConfigurations = (
				AF9F83F11A5F0D21004B62C0 /* Debug */,
				AF9F83F21A5F0D21004B62C0 /* Release */,
			);
			defaultConfigurationIsVisible = 0;
			defaultConfigurationName = Release;
		};
		AF9F83F31A5F0D21004B62C0 /* Build configuration list for PBXNativeTarget "{{{name}}}" */ = {
			isa = XCConfigurationList;
			buildConfigurations = (
				AF9F83F41A5F0D21004B62C0 /* Debug */,
				AF9F83F51A5F0D21004B62C0 /* Release */,
			);
			defaultConfigurationIsVisible = 0;
		};
		AF9F83F61A5F0D21004B62C0 /* Build configuration list for PBXNativeTarget "{{{name}}}Tests" */ = {
			isa = XCConfigurationList;
			buildConfigurations = (
				AF9F83F71A5F0D21004B62C0 /* Debug */,
				AF9F83F81A5F0D21004B62C0 /* Release */,
			);
			defaultConfigurationIsVisible = 0;
		};
/* End XCConfigurationList section */
	};
	rootObject = AF9F83C41A5F0D21004B62C0 /* Project object */;
}
"""
	end
end

# Template for a property list used by XCode for iOS projects
class PlistTemplate
	super Template

	# Package of the app
	var package_name: String

	redef fun rendering
	do
		add """
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
	<key>CFBundleDevelopmentRegion</key>
	<string>en</string>
	<key>CFBundleExecutable</key>
	<string>$(EXECUTABLE_NAME)</string>
	<key>CFBundleIdentifier</key>
	<string>{{{package_name}}}.$(PRODUCT_NAME:rfc1034identifier)</string>
	<key>CFBundleInfoDictionaryVersion</key>
	<string>6.0</string>
	<key>CFBundleName</key>
	<string>$(PRODUCT_NAME)</string>
	<key>CFBundlePackageType</key>
	<string>APPL</string>
	<key>CFBundleShortVersionString</key>
	<string>1.0</string>
	<key>CFBundleSignature</key>
	<string>\\?\\?\\?\\?</string>
	<key>CFBundleVersion</key>
	<string>1</string>
	<key>LSRequiresIPhoneOS</key>
	<true/>
	<key>UIRequiredDeviceCapabilities</key>
	<array>
		<string>armv7</string>
	</array>
	<key>UISupportedInterfaceOrientations</key>
	<array>
		<string>UIInterfaceOrientationPortrait</string>
		<string>UIInterfaceOrientationLandscapeLeft</string>
		<string>UIInterfaceOrientationLandscapeRight</string>
	</array>
	<key>UISupportedInterfaceOrientations~ipad</key>
	<array>
		<string>UIInterfaceOrientationPortrait</string>
		<string>UIInterfaceOrientationPortraitUpsideDown</string>
		<string>UIInterfaceOrientationLandscapeLeft</string>
		<string>UIInterfaceOrientationLandscapeRight</string>
	</array>
</dict>
</plist>
"""
	end
end
