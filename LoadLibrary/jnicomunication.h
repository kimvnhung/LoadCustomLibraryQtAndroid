#ifndef JNICOMUNICATION_H
#define JNICOMUNICATION_H

#include <QObject>

class JniComunication : public QObject
{
    Q_OBJECT
public:
    explicit JniComunication(QObject *parent = nullptr);

signals:

};

#endif // JNICOMUNICATION_H
