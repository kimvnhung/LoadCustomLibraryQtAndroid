package com.hungkv.loadlibrary;

import android.util.Log;
import android.os.Bundle;
import android.content.Intent;


import org.qtproject.qt5.android.bindings.QtActivity;

public class MainActivity extends QtActivity
{
    private static final String TAG = MainActivity.class.getName();

    @Override
    protected void onStart() {
        super.onStart();
        Log.i(TAG, "onStart");
        JniMessenger.printFromJava("MainActivity Starting");
        //Daemon.startDaemon();
    }

    @Override
    protected void onPause() {
        super.onPause();
        Log.i(TAG,"onPause");
        JniImplement.helloWorld();
    }

    @Override
    protected void onStop() {
        super.onStop();
        Log.i(TAG,"onStop");
    }
}
