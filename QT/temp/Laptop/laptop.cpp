#include "laptop.h"

Laptop::Laptop(QObject *parent, QString name) : QObject(parent)
{
    this->name = name;
    qInfo() << "Constructor called for:" << name;
}

Laptop::~Laptop()
{
    qInfo() << "Deconstructor called for:" << name;
}

double Laptop::asKilo()
{
    return weight * 0.456592;
}

void Laptop::display()
{
    qInfo() << "Name:" << name;
    qInfo() << "Weight:" << asKilo() << "Kg";
}
