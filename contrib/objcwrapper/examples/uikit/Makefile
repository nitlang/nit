prepare: uikit.nit

uikit.nit:
	../../bin/objcwrapper -o uikit.nit -p "-I include" \
		/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk/System/Library/Frameworks/UIKit.framework/Headers/*.h

uikit: uikit.nit
	../../../../bin/nitc uikit.nit
