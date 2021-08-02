#include <iostream>
#include <vector>
#include <string>


class Account 
{
private:
    // attributes
    std::string name;
    double balance;

public:
    // methods
    // declared inline
    void set_balance(double bal)
    {
        balance = bal;
    }
    double get_balance()
    {
        return balance;
    }

    // methods will be decalred outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(std::string n)
{
    name = n;
}

std::string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if((balance - amount) >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if(frank_account.deposit(200.0))
    {
        std::cout << "Deposit OK" << std::endl;
    }
    else
    {
        std::cout << "Deposit not allowed" << std::endl;
    }

    if(frank_account.withdraw(500.0))
    {
        std::cout << "Withdraw OK" << std::endl;
    }
    else
    {
        std::cout << "Not sufficient funds" << std::endl;
    }
    
    if(frank_account.withdraw(1500.0))
    {
        std::cout << "Withdraw OK" << std::endl;
    }
    else
    {
        std::cout << "Not sufficient funds" << std::endl;
    }
}


