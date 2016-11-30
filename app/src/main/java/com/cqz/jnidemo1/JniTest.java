package com.cqz.jnidemo1;

/**
 * Created by Administrator on 2016/11/30.
 */

public class JniTest {
    static {
        System.loadLibrary("jni-test");
    }
    public static void main(String[] args){
        JniTest jniTest=new JniTest();
        System.out.println(jniTest.get());
        jniTest.set("Hello World");
    }
    public native String get();
    public native void set(String str);
}
