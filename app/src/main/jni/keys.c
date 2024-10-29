#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_example_ndkandproguard_MainActivity_apiCall(JNIEnv *env, jobject instance) {

    return (*env)-> NewStringUTF(env, "This is vibhav's  key ");
}