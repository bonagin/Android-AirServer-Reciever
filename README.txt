This is the Airplay Server receiver for screen mirroring.

This project was build using QT5.6 and MSVC2015.

BUILD
=====

QTAV
====
- This project uses the QTAV library from https://github.com/wang-bin/QtAV by wang-bin.
- Go to the QTAV directory/folder and run the sdk_deploy.bat file to install QTAV on your machine.
- You will be promped to enter your QT director, just past your "C:\Qt\5.6\msvc2015_64" directory on the terminal.


AirServer
=========
- Open the AirServer.pro file using QT5.6.
- Go to Projects on the right pane (It has a book icon).
- Under Genera, change the build directory to "build\debug"
- Run qmake
- Rebuild the project
- After you build, make sure you copy the contents of the /bin file to where your exercitable (.exe) file is,
  otherwise the app will crash.
- Run the project from Qt.
