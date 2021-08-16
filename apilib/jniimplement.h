#ifndef JNIIMPLEMENT_H
#define JNIIMPLEMENT_H

#include <QObject>

class JniImplement : public QObject
{
    Q_OBJECT

public:
    explicit JniImplement(QObject *parent = nullptr);
    static JniImplement *instance() { return m_instance; }

public slots:

private:
    static JniImplement *m_instance;
};

#endif // JNIIMPLEMENT_H
