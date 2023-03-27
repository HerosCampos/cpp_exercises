#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>


class Account
{
private:
    // attribute
    std::string name;
    double balance;

public:
    // methods
    // declared inline
    void set_balance(double bal) {balance = bal;}
    double get_balance() const {return balance;}

    // methods will be declared outside te class declaration
    void set_name(std::string n);
    std::string get_name() const;

    bool deposit(double amount);
    bool withdraw(double amount);

    // Constructors
    Account(std::string name_var = "No name", double balance_var = 0.0);
    Account(const Account &source);
    ~Account()
    {
        std::cout << "Destructor called for: " << name << std::endl;
    }
};

#endif

