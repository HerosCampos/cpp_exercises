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
    std::string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}

    void set_name(std::string name_val) {name = name_val;}
    void set_health(int health_val) {health = health_val;}
    void set_xp(int xp_val) {xp = xp_val;}

    Player(std::string name_val = "No name", int health_val = 0, int xp_val = 0);
    Player(const Player &source);
    ~Player()
    {
        //std::cout << "Destructor called for: " << name << std::endl;
    }
};


Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {
        //std::cout << "Major constructor called for: " << name << std::endl;
}

Player::Player(const Player &source)
    :Player(source.name, source.health, source.xp) {
        //std::cout << "Copy constructor called for " << source.name << std::endl;
}


void display_player(Player p)
{
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}


// ========================================================================================



// ========================================================================================


int main()
{
    Player hero("Heros", 100, 87);
    display_player(hero);
}