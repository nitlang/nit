#FIXME: Improper way of resolving unjustified metadata conflict
module complete_simple_android is
    app_name("test all")
	java_package("org.nitlanguage.test_all")
	app_version(1, 0)
end

import test_bundle
import test_audio
import test_shared_preferences
import test_assets_and_resources
import test_target_api
