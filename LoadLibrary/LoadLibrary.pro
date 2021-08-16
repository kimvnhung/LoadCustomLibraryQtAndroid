QT += quick androidextras

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        jnicomunication.cpp \
        main.cpp

RESOURCES += qml.qrc

android {
    DISTFILES += \
        android/src/com/hungkv/loadlibrary/ActivityUtils.java \
        android/src/com/hungkv/loadlibrary/MainActivity.java \
        android/src/com/hungkv/loadlibrary/JniMessenger.java \
        android/AndroidManifest.xml


    ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android
}

HEADERS += \
    jnicomunication.h

DISTFILES += \
    android/src/com/hungkv/loadlibrary/Daemon.java \
    android/src/com/hungkv/loadlibrary/JniImplement.java
