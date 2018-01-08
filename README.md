# Face Detector Setup 

This is the implementation of the Opencv for Android library with the sample face-detection programming running. While I'm planning to make my own modifications to this project, what I found terribly difficult was figuring out how to properly set this project up in Android Studio. When building OpenCV on Android NDK, Google currently allows the option of ndk-build and cmake to add the library. The difference here is that ndk-build uses Android.mk and Application.mk files to list attributes, and cmake uses a single CMakeList.txt file to list them.

A lot of the resources I looked at had components of both methods, and was not clear on what was properly doing the work. The project shown was built on Android Studio 3.0.1, uses OpenCV 3.4.0, and uses the CMAKE method to compile the C++ code. 

There are no Android.mk or Application.mk files available, as they are not required with this method. 

Hope it helps, check back for further updates. 

JM
