#include <QCoreApplication>
#include "laptop.h"


void test(Laptop &machine)
{
    machine.test();
}

void makeLaptops()
{
    Laptop mine(nullptr, "My laptop");
    Laptop yours(nullptr, "Your laptop");

    mine.weight = 4;
    yours.weight = 6;

    test(mine);
    test(yours);
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    makeLaptops();

    return a.exec();
}
