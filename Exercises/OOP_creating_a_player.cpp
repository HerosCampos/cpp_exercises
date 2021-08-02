#include <iostream>
#include <vector>
#include <string>


class Player 
{
public:
    // attributes
    std::string name;
    int health {100};
    int xp {3};

public:
    // methods
    void talk(std::string text_to_say)
    {
        std::cout << name << " says: " << text_to_say << std::endl;
    }
    bool is_dead();

    // -------------------------------------
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};


Player::Player()
    : name{"None"}, health{0}, xp{0} {
}

Player::Player(std::string name_val)
    : name{name_val}, health{0}, xp{0} {
}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
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
    // creating an account
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 500.00;
    frank_account.deposit(50.00);
    frank_account.withdraw(75.00);


    // creating a player (classic way)
    Player Frank;
    Frank.name = "Frank";
    Frank.health = 100;
    Frank.xp = 12;
    Frank.talk("Hi there!");

    // creating a player with pointer (pointing to a player)
    Player *enemy {nullptr};
    enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    (*enemy).xp = 15;
    (*enemy).talk("I will defeat you!");


}