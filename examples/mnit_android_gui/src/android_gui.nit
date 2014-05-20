module android_gui is
	app_name("First Android GUI app")
	app_version(0, 2, git_revision)
end

import mnit
import mnit_android

in "Java" `{ 
	import android.content.Context;
	import android.widget.FrameLayout;
	import android.widget.Button;
	import android.app.Activity;
	import android.widget.Toast;
	import android.provider.MediaStore;
	import android.content.Intent;
`}

class MainApp
	super App

	init do super


	# OnCreate Activity method equivalent
	redef fun init_window
	do
		super
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		print "Before load_ui method"
		load_ui
	end
	
	redef fun frame_core( display )
	do
# # 		display.clear(0.5, 0.0, 0.0)
# # 		display.close
	end

	fun load_ui import native_activity in "Java" `{
		android.util.Log.d("NOTIFICATION", "Before getting the native activity");
		final android.app.Activity context = (Activity) MainApp_native_activity(recv);
		android.util.Log.d("NOTIFICATION", "Got native activity");
		android.util.Log.d("NOTIFICATION", "Trying to run on Ui Thread...");
		

	//	Intent takePicture = new Intent(MediaStore.ACTION_IMAGE_CAPTURE);
	//	context.startActivityForResult(takePicture,	1);
		Intent openFiles = new Intent(Intent.ACTION_GET_CONTENT);
		openFiles.setType("*/*");
		openFiles.addCategory(Intent.CATEGORY_OPENABLE);
		context.startActivityForResult(openFiles, 0);
		
		context.runOnUiThread(new Runnable() {
			@Override
			public void run() {
				FrameLayout mainLayout = new FrameLayout(context);
				Button firstButton = new Button(context);
				firstButton.setText("First Nit Android Button");
				mainLayout.addView(firstButton);

				android.util.Log.d("NOTIFICATION", "Before UiThread execution");
				context.setContentView(mainLayout);


				Toast toast = Toast.makeText(context, "Ça marche...", Toast.LENGTH_SHORT);
				toast.show();


			}
		});

	`}

end

var app = new MainApp
app.main_loop
