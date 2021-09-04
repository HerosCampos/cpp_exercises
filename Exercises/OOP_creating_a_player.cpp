#include <iostream>
#include <vector>
#include <string>


class Player 
{
private:
    std::string name;
    int health;
    int xp;

public:
    std::string get_name()
    {
        return name;
    }
    int get_health()
    {
        return health;
    }
    int get_xp()
    {
        return xp;
    }

    // Constructor
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);

    // Copy constructor
    Player(const Player &source);
    
    // Destructor
    ~Player()
    {
        std::cout << "Destructor called for: " << name << std::endl;
        {
            delete &name;
            delete &health;
            delete &xp;
            std::cout << "Destructor freeing data for: " << name << std::endl;
        }
    }
};


Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {
        std::cout << "Three-args constructor for: " << name << std::endl;
}


Player::Player(const Player &source)
    // :name(source.name), health(source.health), xp(source.xp) {
    :Player{source.name, source.health, source.xp} { 
        std::cout << "Copy constructor - made copy of: " << source.name << std::endl;
}


void display_player(Player p)
{
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}


class Account
{
public:
    // attributes
    std::string name {"Account"};
    double balance {0.0};

    // methods
    bool deposit(double bal)
    {
        balance += bal;
        std::cout << "In deposit" << std::endl;
    }
    bool withdraw(double bal)
    {
        balance -= bal;
        std::cout << "In withdraw" << std::endl;
    }
};


int main()
{
    Player empty;
    Player frank{"Frank"};
    Player hero{"Hero", 100};
    Player villain{"Villain", 100, 55};


    display_player(hero);
}