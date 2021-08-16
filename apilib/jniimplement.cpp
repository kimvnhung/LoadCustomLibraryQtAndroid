#include "jniimplement.h"

#include <QAndroidJniObject>
#include <QAndroidJniEnvironment>
#include <QtAndroid>
#include <QDebug>

JniImplement *JniImplement::m_instance = nullptr;

static void hellWorldJava(JNIEnv *env, jobject, jstring value, jint value2)
{
    qDebug()<<"Name :"<<env->GetStringUTFChars(value, nullptr);
    qDebug()<<"Value :"<<value2;
}

JniImplement::JniImplement(QObject *parent) : QObject(parent)
{
    m_instance = this;

    JNINativeMethod methods[] {
        {"helloWorldJava", "(Ljava/lang/String;I)V", reinterpret_cast<void *>(hellWorldJava)}
    };
    QAndroidJniObject javaClass("com/hungkv/loadlibrary/JniImplement");

    QAndroidJniEnvironment env;
    jclass objectClass = env->GetObjectClass(javaClass.object<jobject>());
    env->RegisterNatives(objectClass,
                         methods,
                         sizeof(methods) / sizeof(methods[0]));
    env->DeleteLocalRef(objectClass);
}
