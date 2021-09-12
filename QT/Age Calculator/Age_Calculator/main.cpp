#include <QCoreApplication>
#include <QDebug>
#include "agecalc.h"


void display_ages(AgeCalc &calc)
{
    qInfo() << "Name:" << calc.get_name() << "is" << calc.get_age() << "years old.";
    qInfo() << "Dog Age:" << calc.dogYears();
    qInfo() << "Cat Age:" << calc.catYears();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AgeCalc frank;
    frank.set_age(45);
    frank.set_name("Frank");

    display_ages(frank);

    return a.exec();
}
