#include "com_hungkv_loadlibrary_JniMessenger.h"


JNIEXPORT void JNICALL Java_com_hungkv_loadlibrary_JniMessenger_callFromJava
(JNIEnv *env, jclass, jstring value){
    qDebug()<<"Java_com_hungkv_loadlibrary_JniMessenger_callFromJava :";
    qDebug()<<env->GetStringUTFChars(value,nullptr);

    JniImplement *implement = new JniImplement();

}
