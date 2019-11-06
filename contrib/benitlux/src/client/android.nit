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

# Android variant improved with platform specific services
module android is
	android_manifest_activity """android:theme="@android:style/Theme.DeviceDefault" """
	android_api_min 16 # For BigTextStyle
	android_api_target 16
end

import ::android::portrait
import ::android::toast
import ::android::wifi
import ::android::service::at_boot

import client
import push
import checkins

redef class App

	redef fun on_create
	do
		super

		# Launch service with app, if it wasn't already launched at boot
		start_service
	end

	# Use Android toasts if there is an activity, otherwise fallback on the log
	redef fun feedback(text)
	do
		if activities.not_empty then
			app.toast(text.to_s, false)
		else super
	end

	# Register to callback `async_wifi_scan_available` when a wifi scan is available
	private fun notify_on_wifi_scan(context: NativeContext)
	import async_wifi_scan_available in "Java" `{

		android.content.IntentFilter filter = new android.content.IntentFilter();
		filter.addAction(android.net.wifi.WifiManager.SCAN_RESULTS_AVAILABLE_ACTION);
		final nit.app.NitObject final_self = self;
		App_incr_ref(final_self);

		context.registerReceiver(
			new android.content.BroadcastReceiver() {
				@Override
				public void onReceive(android.content.Context context, android.content.Intent intent) {
					if (intent.getAction().equals(android.net.wifi.WifiManager.SCAN_RESULTS_AVAILABLE_ACTION)) {
						App_async_wifi_scan_available(final_self);
					}
				}
			}, filter);
	`}

	private fun async_wifi_scan_available do run_on_ui_thread task_on_wifi_scan_available

	private var task_on_wifi_scan_available = new WifiScanAvailable is lazy
end

redef class Service
	redef fun on_start_command(intent, flags, id)
	do
		app.notify_on_wifi_scan native

		# Check token validity
		(new PushHttpRequest("push/check_token?token={app.token}")).start

		return start_sticky
	end
end

# Task ran on the UI thread when a wifi scan is available
private class WifiScanAvailable
	super Task

	redef fun main
	do
		jni_env.push_local_frame 4
		var manager = app.native_context.wifi_manager
		var networks = manager.get_scan_results
		var found_ben = false
		for i in networks.length.times do
			jni_env.push_local_frame 4
			var net = networks[i]
			var ssid = net.ssid.to_s

			# TODO use BSSID instead
			#var bssid = net.bssid.to_s
			var target_ssids = ["Benelux"]
			if target_ssids.has(ssid) then # and bssid == "C8:F7:33:81:B0:E6" then
				found_ben = true
				break
			end
			jni_env.pop_local_frame
		end
		jni_env.pop_local_frame

		if found_ben then
			app.on_check_in
		else app.on_check_out
	end
end

redef class SectionTitle
	init do set_text_style(native, app.native_context)

	private fun set_text_style(view: NativeTextView, context: NativeContext) in "Java" `{
		view.setTextAppearance(context, android.R.style.TextAppearance_Large);
	`}
end

redef class ItemView
	init do set_background(native, app.native_context)

	private fun set_background(view: NativeView, context: NativeContext) in "Java" `{
		view.setBackgroundResource(R.color.item_background);
	`}
end

# Use Android notifications
redef fun notify(title, content, id)
do
	var service = app.service
	assert service != null
	native_notify(service.native, id, title.to_java_string, content.to_java_string)
end

private fun native_notify(context: NativeService, id: Int, title, content: JavaString)
in "Java" `{
	android.app.Notification.BigTextStyle style =
		new android.app.Notification.BigTextStyle();
	style.bigText(content);

	android.content.Intent intent = new android.content.Intent(
		context, nit.app.NitActivity.class);
	android.app.PendingIntent pendingIntent = android.app.PendingIntent.getActivity(
		context, 0, intent, android.app.PendingIntent.FLAG_UPDATE_CURRENT);

	android.app.Notification notif = new android.app.Notification.Builder(context)
		.setContentTitle(title)
		.setContentText(content)
		.setSmallIcon(R.drawable.notif)
		.setAutoCancel(true)
		.setOngoing(false)
		.setStyle(style)
		.setContentIntent(pendingIntent)
		.setDefaults(android.app.Notification.DEFAULT_SOUND |
		             android.app.Notification.DEFAULT_LIGHTS)
		.build();

	android.app.NotificationManager notificationManager =
	  (android.app.NotificationManager)context.getSystemService(android.content.Context.NOTIFICATION_SERVICE);

	notificationManager.notify((int)id, notif);
`}


# Use `RatingBar` as the beer rating control
redef class BeerView
	redef fun setup_stars(rating)
	do
		var title = "Review %0".t.format(beer_info.beer.name).to_java_string
		native_setup_stars(app.native_context, top_line_layout.native, rating, title, app.user != null)
	end

	private fun native_setup_stars(context: NativeContext, layout: NativeViewGroup, rating: Int, title: JavaString, loggedin: Bool)
	import on_review in "Java" `{
		// Set an indicator/non-interactive display
		final android.widget.RatingBar view = new android.widget.RatingBar(
			context, null, android.R.attr.ratingBarStyleIndicator);
		view.setNumStars(5);
		view.setRating(rating);
		view.setIsIndicator(true);

		final android.view.ViewGroup.MarginLayoutParams params = new android.view.ViewGroup.MarginLayoutParams(
			android.widget.LinearLayout.LayoutParams.WRAP_CONTENT,
			android.widget.LinearLayout.LayoutParams.FILL_PARENT);
		layout.addView(view, params);

		// Make some variables final to used in anonymous class and delayed methods
		final android.content.Context final_context = context;
		final long final_rating = rating;
		final String final_title = title;
		final boolean final_loggedin = loggedin;

		final nit.app.NitObject final_self = self;
		BeerView_incr_ref(self); // Nit GC

		view.setOnTouchListener(new android.view.View.OnTouchListener() {
			@Override
			public boolean onTouch(android.view.View v, android.view.MotionEvent event) {
				if (event.getAction() != android.view.MotionEvent.ACTION_UP) return true;

				// Don't show dialog if not logged in
				if (!final_loggedin) {
					android.widget.Toast toast = android.widget.Toast.makeText(
						final_context, "You must login first to post reviews",
						android.widget.Toast.LENGTH_SHORT);
					toast.show();
					return true;
				}

				// Build dialog with a simple interactive RatingBar
				final android.app.AlertDialog.Builder dialog_builder = new android.app.AlertDialog.Builder(final_context);
				final android.widget.RatingBar rating = new android.widget.RatingBar(final_context);
				rating.setNumStars(5);
				rating.setStepSize(1.0f);
				rating.setRating(final_rating);

				// Header bar
				dialog_builder.setIcon(R.drawable.notif);
				dialog_builder.setTitle(final_title);

				// Rating control
				android.widget.LinearLayout l = new android.widget.LinearLayout(final_context);
				l.addView(rating, params);
				l.setHorizontalGravity(android.view.Gravity.CENTER_HORIZONTAL);
				dialog_builder.setView(l);

				// OK button
				dialog_builder.setPositiveButton(android.R.string.ok,
					new android.content.DialogInterface.OnClickListener() {
						public void onClick(android.content.DialogInterface dialog, int which) {
							dialog.dismiss();

							long r = (long)rating.getRating();
							view.setRating(r); // Update static control
							view.invalidate(); // For not refreshing bug

							BeerView_on_review(final_self, r); // Callback
							BeerView_decr_ref(final_self); // Nit GC
						}
					});

				// Cancel button
				dialog_builder.setNegativeButton(android.R.string.cancel,
					new android.content.DialogInterface.OnClickListener() {
						public void onClick(android.content.DialogInterface dialog, int id) {
							dialog.cancel();
							BeerView_decr_ref(final_self); // Nit GC
						}
					});

				dialog_builder.create();
				dialog_builder.show();
				return true;
			}
		});
	`}
end
