#ifndef CM_ONELIB_GLOBAL_H
#define CM_ONELIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CM_ONELIB_LIBRARY)
#  define CM_ONELIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CM_ONELIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CM_ONELIB_GLOBAL_H

