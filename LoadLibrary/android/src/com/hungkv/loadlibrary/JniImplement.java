package com.hungkv.loadlibrary;

public class JniImplement {
    private static native void helloWorldJava(String name, int value);

    public JniImplement() {}

    public static void helloWorld(){
        System.out.println("HelloWolrd in Java");
        helloWorldJava("Myname",3);
    }
}
