#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include <QDebug>


class Laptop : public QObject
{
    Q_OBJECT
public:
    // Vars
    QString name;
    double weight;

    // Functions
    double asKilo();
    void display();


    // Constructor
    explicit Laptop(QObject *parent = nullptr, QString name = "no name");

    // Deconstructor
    ~Laptop();

signals:

};

#endif // LAPTOP_H
