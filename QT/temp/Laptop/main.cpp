#include <QCoreApplication>
#include "laptop.h"


void display_all(Laptop &machine)
{
    machine.display();
}


void makeLaptop()
{
    Laptop mine(nullptr, "My Laptop");
    Laptop yours(nullptr, "Your Laptop");

    mine.weight = 6;
    yours.weight = 7;

    display_all(mine);
    display_all(yours);
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    makeLaptop();

    return a.exec();
}
