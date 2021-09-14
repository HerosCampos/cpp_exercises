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
    QString get_name() {return m_name;}

    void set_age(int age_val) {m_age = age_val;}
    void set_name(QString name_val) {m_name = name_val;}


    int dogYears() const;
    int catYears() const;
    int humanYears() const;

signals:

};

#endif // AGECALC_H
