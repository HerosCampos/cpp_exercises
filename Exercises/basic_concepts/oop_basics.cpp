#include <iostream>
#include <string>
#include <vector>


class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    std::string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}

    void set_name(std::string name_val) {name = name_val;}
    void set_health(int health_val) {health = health_val;}
    void set_xp(int xp_val) {xp = xp_val;}

    Player(std::string name_val = "No name", int health_val = 100, int xp_val = 1);
    Player(const Player &val);
    ~Player()
    {
        std::cout << "Destructor called for: " << name << std::endl;
    }

    void talk(std::string text_to_say) {std::cout << text_to_say << std::endl;};
    bool is_deal();
};


Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {
        std::cout << "Constructor called for: " << name << std::endl;
}

Player::Player(const Player &val)
    :Player(val.name, val.health, val.xp) {
        std::cout << "Copy constructor called for: " << val.name << std::endl;
}


// ------------------------------------------------------------------------------------------


class Account
{
private:
    std::string name_account;
    double balance;

public:
    std::string get_name_account() {return name_account;}
    double get_balance() {return balance;}

    void set_name_account(std::string name_account_val) {name_account = name_account_val;}
    void set_balance(double balance_val) {balance = balance_val;}

    Account(std::string name_account_val = "No name account", double balance_val = 0.0);
    Account(const Account &val);
    ~Account() {std::cout << "Destructor called for: " << name_account << std::endl;}
    

    bool deposit(double bal);
    bool withdraw(double bal);
};


Account::Account(std::string name_account_val, double balance_val)
    :name_account{name_account_val}, balance{balance_val} {
        std::cout << "Constructor called for: " << name_account_val << std::endl;
}


Account::Account(const Account &val)
    :Account(val.name_account, val.balance) {
        std::cout << "Copy constructor called for: " << name_account << std::endl;
}


bool Account::deposit(double bal)
{
    balance += bal;
    std::cout << "In deposit!" << std::endl;
    return true;
}

bool Account::withdraw(double bal)
{
    if((bal - balance) < 0)
    {
        balance -= bal;
        std::cout << "In whithdraw" << std::endl;
        return true;
    }
    else
    {
        std::cout << "You don't have enough funds" << std::endl;
        return false;
    }
}


// ------------------------------------------------------------------------------------------


int main()
{
    Player frank;
    frank.set_name("Gimly");
    frank.set_health(100);
    frank.set_xp(12);
    std::cout << frank.get_name() << "\n" << frank.get_health() << "\n" << frank.get_xp() << std::endl;
    frank.talk("Hi there");

    Player vilain{"Saruman", 100, 888};

    // Player *enemy = new Player;
    // (*enemy).set_name("Sauron");
    // (*enemy).set_health(100);
    // (*enemy).set_xp(999);
    // (*enemy).talk("I'll win!");
}
