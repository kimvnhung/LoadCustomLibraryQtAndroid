package com.hungkv.loadlibrary;

public class JniMessenger
{
    static{
        System.loadLibrary("apilib_armeabi-v7a");
    }

    private static native void callFromJava(String message);


    public JniMessenger() {}

    public static void printFromJava(String message)
    {
        System.out.println("This is printed from JAVA, message is: " + message);
        callFromJava("Hello from JAVA!");
        System.out.println("library: " + System.getProperty("java.library.path"));
    }

    public static void checkConnection(String msg){
        System.out.println("From Qt :"+msg);
    }
}

