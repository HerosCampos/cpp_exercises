#include <QCoreApplication>
#include <QDebug>
#include "agecalc.h"


void display_ages(AgeCalc &source)
{
    qInfo() << "Name:" << source.get_name() << "is " << source.humanYears() << "human years.";
    qInfo() << "Name:" << source.get_name() << "is " << source.dogYears() << "dog years.";
    qInfo() << "Name:" << source.get_name() << "is " << source.catYears() << "cat years.";
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AgeCalc frank;

    frank.set_name("Frank");
    frank.set_age(21);

    display_ages(frank);



    return a.exec();
}
