#ifndef APILIB_H
#define APILIB_H

#include <QObject>
#include "apilib_global.h"

class APILIB_EXPORT Apilib : public QObject
{
    Q_OBJECT
public:
    explicit Apilib(QObject *parent = nullptr);

    double add(double a, double b);
    double subtract(double a, double b);
    double multility(double a, double b);

};
#endif // APILIB_H
