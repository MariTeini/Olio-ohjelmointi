#ifndef MYCLASS_H
#include <QCoreApplication>
#include <QObject>
#include <QDebug>

class MyClass : public QObject {
    Q_OBJECT

public:
    explicit MyClass(QObject* parent = nullptr);
    void raiseMySignal();

signals:
    void mySignal();

public slots:
    void mySlot();

#endif //MYCLASS_H
};
