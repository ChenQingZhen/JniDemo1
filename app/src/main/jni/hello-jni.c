//
// Created by Administrator on 2016/11/30.
//
#include <string.h>
#include <jni.h>
JNIEXPORT jstring JNICALL Java_com_cqz_jnidemo1_MainActivity_stringFromJNI(JNIEnv *env,jobject instance){
    return (*env)->NewStringUTF(env,"Hello from JNI");
}


