#include <QCoreApplication>
#include <QDebug>


void display(QString *value)
{
    qInfo() << "The pointer:" << value; // its pointing to
    qInfo() << "Adress:" << &value; // the adress of the pointer
    qInfo() << "The data:" << *value;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Frank";

    QString *description = new QString("Hello Pointer");
    //qInfo() << description;
    display(description);
    delete description;


    return a.exec();
}
