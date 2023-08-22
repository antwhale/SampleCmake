#include <jni.h>
#include <string>
#include <iostream>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_sampleproject_MainActivity_stringFromJni(JNIEnv *env, jobject thiz) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}