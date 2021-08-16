#ifndef APILIB_GLOBAL_H
#define APILIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(APILIB_LIBRARY)
#  define APILIB_EXPORT Q_DECL_EXPORT
#else
#  define APILIB_EXPORT Q_DECL_IMPORT
#endif

#endif // APILIB_GLOBAL_H
