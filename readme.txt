steps come from here:
https://trivedihardik.wordpress.com/2011/06/16/hello-world-example-using-ndk-in-android/

generate header file:
javah -d jni -classpath /Users/clzhang/playground/ndk_helloworld/MyApplication/app/build/intermediates/classes/debug com.example.clzhang.helloworld.JniWrapper

then copy the header file to src/main/jni folder

under: /Users/clzhang/playground/ndk_helloworld/MyApplication/app/src/main/jni
1. ndk-build V=1

change Application.mk
APP_ABI := armeabi-v7a
to:
APP_ABI := armeabi

2. re-run:
ndk-build V=1

create “jniLibs” the same level as java
copy the folders generated in #1, #2 (in libs) to “jniLibs”

remove the jni folder, so it won’t compile it.

