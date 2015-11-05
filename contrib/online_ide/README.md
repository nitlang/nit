This file contains all the informations about the Nit online IDE.

I. SETUP

0.a. Install the native client SDK if needed(https://developer.chrome.com/native-client/sdk/download).

0.b. Declare the environment variable NACL_SDK_ROOT as the root of the target platform within the SDK (ex: ~/nacl_sdk/pepper_34/) :
	$ export NACL_SDK_ROOT=/path/to/nacl_sdk/pepper_[your_version]

1. Run the Makefile with 'make' (this will compile the pnacl module for the interpreter and place it in the right folder).

2. Search for the Ace sources, go to 'https://github.com/ajaxorg/ace-builds/' and get the 'src' folder,
put it in 'www/'.

NOTE: The application has been developped with a package from 03.02.2014,
in case of any problem, you can find it here :
'https://github.com/Djomanix/ace-build-for-nit'.
-> If you get this one, you can skip 3. and 4.

3. Copy 'mode-nit.js' from folder 'setup' to folder 'www/src'.

4. Copy 'nit.js' from folder 'setup' to folder 'www/src/snippets'.


II. GETTING STARTED

1. Run 'make serve', this will host the application on 'http://localhost:5103/'.

NOTE:
1. The application only works in Google Chrome or Chromium.
2. It is recommended to open the Chrome console while using the application
(to see what's going on).
3. The application is ready when the terminal appears in the page
and when the message :
'Nit library loaded (... files), ready to go.' is displayed in the Chrome console.
4. Loading may take some time when the browser loads a pnacl module for the first time.


III. FEATURES
	- CTRL+E: this shortcut launches the interpretation of the code written in the editor.
	- CTRL+S: this shortcut enables you to download the file you have been writting.
	- By clicking on the file name you can change it.
	- The editor has some auto-completion and research features.


IV. HOW TO EDIT

1. The folder 'sources/nit' contains the file 'pnacl_nit.nit' which is the source
of the pnacl module. You can edit the module directly here, and run 'make' to compile it (it will be placed automatically where needed).

2. The folder 'sources/nit_mode_for_ace' contains the source files necessary to
generate the Ace mode for Nit.
You can also edit them if you need to improve the Nit support, see :
- 'http://ace.c9.io/#nav=higlighter'


V. HOSTING

1. To host the application, just copy the 'www' folder where you want.

NOTE: The application has been successfully tested on a python server and an apache server.
