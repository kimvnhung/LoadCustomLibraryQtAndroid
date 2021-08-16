#include "apilib.h"

#include <QDebug>

Apilib::Apilib(QObject *parent):
    QObject(parent)
{
    qDebug()<<"Init APILib";
}

double Apilib::add(double a, double b)
{
    return a+b;
}

double Apilib::subtract(double a, double b)
{
    return a-b;
}

double Apilib::multility(double a, double b)
{
    return a*b;
}

