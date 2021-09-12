#ifndef AGECALC_H
#define AGECALC_H

#include <QObject>
#include <QDebug>


class AgeCalc : public QObject
{
private:
    int m_age;
    QString m_name;

    Q_OBJECT
public:
    explicit AgeCalc(QObject *parent = nullptr);

    int get_age() {return m_age;}
    void set_age(int age) {m_age = age;}

    QString get_name() {return m_name;}
    void set_name(QString name) {m_name = name;}


    int dogYears() const;
    int catYears() const;
    int humanYears() const;


signals:

};

#endif // AGECALC_H
