#include "jnimessenger.h"

#include <QAndroidJniObject>
#include <QAndroidJniEnvironment>
#include <QtAndroid>
#include <QDebug>

JniMessenger *JniMessenger::m_instance = nullptr;

static void callFromJava(JNIEnv *env, jobject /*thiz*/, jstring value)
{
    emit JniMessenger::instance()->messageFromJava(env->GetStringUTFChars(value, nullptr));
}

JniMessenger::JniMessenger(QObject *parent) : QObject(parent)
{
    m_instance = this;

    JNINativeMethod methods[] {
        {"callFromJava", "(Ljava/lang/String;)V", reinterpret_cast<void *>(callFromJava)},
    };
    QAndroidJniObject javaClass("com/hungkv/loadlibrary/JniImplement");

    QAndroidJniEnvironment env;
    jclass objectClass = env->GetObjectClass(javaClass.object<jobject>());
    env->RegisterNatives(objectClass,
                         methods,
                         sizeof(methods) / sizeof(methods[0]));
    env->DeleteLocalRef(objectClass);
}

void JniMessenger::printFromJava(const QString &message)
{
    QAndroidJniObject javaMessage = QAndroidJniObject::fromString(message);
    QAndroidJniObject::callStaticMethod<void>("com/hungkv/loadlibrary/JniMessenger",
                                       "printFromJava",
                                       "(Ljava/lang/String;)V",
                                        javaMessage.object<jstring>());
}
