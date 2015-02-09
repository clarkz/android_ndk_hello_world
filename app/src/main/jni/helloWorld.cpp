#include "com_example_clzhang_helloworld_JniWrapper.h"

JNIEXPORT jstring JNICALL Java_com_example_clzhang_helloworld_JniWrapper_messageFromNativeCode (JNIEnv * env, jobject jObj)
{
//	return (*env)->NewStringUTF(env, "hello from c!!");
	return env->NewStringUTF("hello from c!!");
}

