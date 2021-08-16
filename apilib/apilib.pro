QT -= gui

QT += androidextras

TEMPLATE = lib
DEFINES += APILIB_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    apilib.cpp \
    com_hungkv_loadlibrary_JniMessenger.cpp \
    jniimplement.cpp \
    jnimessenger.cpp

HEADERS += \
    apilib_global.h \
    apilib.h \
    jniimplement.h \
    jnimessenger.h \
    com_hungkv_loadlibrary_JniMessenger.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
