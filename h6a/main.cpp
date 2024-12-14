#ifndef MYCLASS_H
#include <QCoreApplication>
#include <QObject>
#include <QDebug>

class MyClass : public QObject {
    Q_OBJECT


public:
    MyClass(QObject* parent = nullptr) : QObject(parent) {}


    void raiseMySignal() {
        emit mySignal();
    }

signals:
    void mySignal();

public slots:
    void mySlot();
    qDebug() << "mySignal signaal!";
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

MyClass myObject;

QObject::connect(&myObject, &MyClass::mySignal, &myObject, &MyClass::mySlot);

 myObject.raiseMySignal();

#endif //MYCLASS_H  MyClass myObject;

 return 0;

}
