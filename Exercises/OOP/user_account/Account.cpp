#include "Account.h"


Account::Account(std::string name_var, double balance_var)
    :name{name_var}, balance{balance_var} {
        std::cout << "Major constructor called for " << name << std::endl;
}

Account::Account(const Account &source)
    :Account(source.name, source.balance) {
        std::cout << "Copy constructor called for " << source.name << std::endl;
}


void Account::set_name(std::string n)
{
    name = n;
}

std::string Account::get_name() const
{
    return name;
}

bool Account::deposit(double amount)
{
    std::cout << "In deposit..." << std::endl;
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if(balance - amount >= 0)
    {
        std::cout << "  - In withdraw..." << std::endl;
        balance -= amount;
        return true;
    } 
    else
    {
        std::cout << "  - Withdraw not allowed! You dont have sufficient founds!" << std::endl;
        return false;
    }
}


void display_account(Account &a)
{
    std::cout << "====================" << std::endl;
    std::cout << "Name: " << a.get_name() << std::endl;
    std::cout << "Balance: " << a.get_balance() << std::endl;
    std::cout << "====================" << std::endl;
}



