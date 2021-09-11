#include <QCoreApplication>
#include "canine.h"
#include "feline.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Canine dog;
    dog.bark();
    qInfo() << "Does the dog have BackBone:" << dog.hasBackBone();
    qInfo() << "Is the dog alive:" << dog.isAlive();

    // Feline cat;

    return a.exec();
}
