/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *	 http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package nit.app;

import android.app.Service;
import android.content.Intent;
import android.os.IBinder;

// Service implemented in Nit
public class NitService extends Service {

	protected long nitService = 0;

	static {
		System.loadLibrary("nit_app");
	}

	@Override
	public int onStartCommand(Intent intent, int flags, int id) {
		return nitOnStartCommand(nitService, intent, flags, id);
	}

	@Override
	public void onCreate() {
		nitService = nitNewService();
		nitOnCreate(nitService);
		super.onCreate();
	}

	@Override
	public void onDestroy() {
		nitOnDestroy(nitService);
		super.onDestroy();
	}

	@Override
	public IBinder onBind(Intent arg) {
		return null;
	}

	protected native long nitNewService();
	protected native int nitOnStartCommand(long nitService, Intent intent, int flags, int id);
	protected native void nitOnCreate(long nitService);
	protected native void nitOnDestroy(long nitService);
}
