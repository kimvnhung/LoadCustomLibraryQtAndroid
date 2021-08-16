package com.hungkv.loadlibrary;

public class Daemon {

  /* This is the native method we want to call
  just being curious. As both daemon and demon
  are close relatives, I guess we can use
  demonize to make something become dameon ;) */
  public static native void demonize();

  /* Inside static block we will load shared library */
//  static {
//    System.loadLibrary("apilib_armeabi-v7a");
//  }

  public static void startDaemon(){
      /*
        This message will help you determine whether
        java.library.path is correctly set
      */
      System.out.println("library: " + System.getProperty("java.library.path"));

      /* Call to shared library */
      Daemon.demonize();

      /* Quit Java application - but daemon will still work */
      System.out.println("Quiting Java application");
  }
}
