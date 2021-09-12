#include "agecalc.h"

AgeCalc::AgeCalc(QObject *parent) : QObject(parent)
{

}


int AgeCalc::dogYears() const
{
    return m_age * 7;
}

int AgeCalc::catYears() const
{
    return m_age * 9;
}

int AgeCalc::humanYears() const
{
    return m_age;
}

