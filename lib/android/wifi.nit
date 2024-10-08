# This file is part of NIT ( https://nitlanguage.org ).
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

# Simple wrapper of the Android WiFi services
#
# Refer to the official Android documentation for the details on these services.
module wifi is android_manifest """
	<uses-permission android:name="android.hardware.WIFI" />
	<uses-permission android:name="android.permission.ACCESS_WIFI_STATE" />
"""

import android::nit_activity

redef class NativeContext
	# Handle to the WiFi system service
	fun wifi_manager: NativeWifiManager in "Java" `{
		return (android.net.wifi.WifiManager)
			self.getSystemService(android.content.Context.WIFI_SERVICE);
	`}
end

# Wraps Java class: `android.net.wifi.WifiManager`
extern class NativeWifiManager in "Java" `{ android.net.wifi.WifiManager `}
	super JavaObject

	# Wraps: `removeNetwork`
	fun remove_network(arg0: Int): Bool in "Java" `{
		return self.removeNetwork((int)arg0);
	`}

	# Wraps: `enableNetwork`
	fun enable_network(arg0: Int, arg1: Bool): Bool in "Java" `{
		return self.enableNetwork((int)arg0, arg1);
	`}

	# Wraps: `disableNetwork`
	fun disable_network(arg0: Int): Bool in "Java" `{
		return self.disableNetwork((int)arg0);
	`}

	# Wraps: `disconnect`
	fun disconnect: Bool in "Java" `{
		return self.disconnect();
	`}

	# Wraps: `reconnect`
	fun reconnect: Bool in "Java" `{
		return self.reconnect();
	`}

	# Wraps: `reassociate`
	fun reassociate: Bool in "Java" `{
		return self.reassociate();
	`}

	# Wraps: `pingSupplicant`
	fun ping_supplicant: Bool in "Java" `{
		return self.pingSupplicant();
	`}

	# Wraps: `startScan`
	fun start_scan: Bool in "Java" `{
		return self.startScan();
	`}

	# Wraps: `getScanResults`
	fun get_scan_results: NativeListOfScanResult in "Java" `{
		return self.getScanResults();
	`}

	# Wraps: `saveConfiguration`
	fun save_configuration: Bool in "Java" `{
		return self.saveConfiguration();
	`}

	# Wraps: `setWifiEnabled`
	fun set_wifi_enabled(arg0: Bool): Bool in "Java" `{
		return self.setWifiEnabled(arg0);
	`}

	# Wraps: `getWifiState`
	fun get_wifi_state: Int in "Java" `{
		return self.getWifiState();
	`}

	# Wraps: `isWifiEnabled`
	fun is_wifi_enabled: Bool in "Java" `{
		return self.isWifiEnabled();
	`}

	# Wraps: `calculateSignalLevel`
	fun calculate_signal_level(arg0: Int, arg1: Int): Int in "Java" `{
		return self.calculateSignalLevel((int)arg0, (int)arg1);
	`}

	# Wraps: `compareSignalLevel`
	fun compare_signal_level(arg0: Int, arg1: Int): Int in "Java" `{
		return self.compareSignalLevel((int)arg0, (int)arg1);
	`}
end

# Wraps Java class: `android.net.wifi.ScanResult`
extern class NativeScanResult in "Java" `{ android.net.wifi.ScanResult `}
	super JavaObject

	# Wraps: `describeContents`
	fun describe_contents: Int in "Java" `{
		return self.describeContents();
	`}

	# Wraps: `BSSID`
	fun bssid: JavaString in "Java" `{
		return self.BSSID;
	`}

	# Wraps: `SSID`
	fun ssid: JavaString in "Java" `{
		return self.SSID;
	`}

	# Wraps: `capabilities`
	fun capabilities: JavaString in "Java" `{
		return self.capabilities;
	`}

	# Wraps: `frequency`
	fun frequency: Int in "Java" `{
		return self.frequency;
	`}

	# Wraps: `level`
	fun level: Int in "Java" `{
		return self.level;
	`}
end

# Java list of `NativeScanResult`
extern class NativeListOfScanResult in "Java" `{ java.util.List<android.net.wifi.ScanResult> `}

	# Number of elements in this list
	fun length: Int in "Java" `{ return self.size();`}

	# Element at `index`
	fun [](index: Int): NativeScanResult in "Java" `{
		return self.get((int)index);
	`}
end
