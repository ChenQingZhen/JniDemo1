//
// Created by Administrator on 2016/11/30.
//
#include <com_cqz_jnidemo1_JniTest.h>
#include <stdio.h>
/*
 * Class:     com_cqz_jnidemo1_JniTest
 * Method:    get
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_cqz_jnidemo1_JniTest_get
        (JNIEnv *env, jobject thiz){
    printf("invoke get from C\n");
    return (*env)->NewStringUTF(env,"Hello from JNI!");
}

/*
 * Class:     com_cqz_jnidemo1_JniTest
 * Method:    set
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_cqz_jnidemo1_JniTest_set
        (JNIEnv *env, jobject thiz, jstring string){
        printf("invoke set from C\n");

        char* str=(*env)->GetStringUTFChars(env,string,NULL);
        printf("%s\n",str);
    (*env)->ReleaseStringUTFChars(env,string,str);
}
