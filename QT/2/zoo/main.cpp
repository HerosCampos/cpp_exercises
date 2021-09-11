#include <QCoreApplication>
#include "canine.h"
#include "feline.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Canine dog;
    Feline cat;

    return a.exec();
}
