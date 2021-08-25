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


class Warrior: public Player
{
private:
    int hit;
    int run;

public:
    int get_hit() {return hit;}
    int get_run() {return run;}

    void set_hit(int hit_val) {hit = hit_val;}
    void set_run(int run_val) {run = run_val;}

    Warrior(std::string name_val = "No name", int health_val = 0, int xp_val = 0, int hit_val = 0, int run_val = 0);

    // void display_warrior(Warrior war)
    // {
    //     std::cout << "=============================" << std::endl;
    //     std::cout << "Name: " << war.get_name() << std::endl;
    //     std::cout << "Health: " << war.get_health() << std::endl;
    //     std::cout << "XP: " << war.get_xp() << std::endl;
    //     std::cout << "Hit: " << war.get_hit() << std::endl;
    //     std::cout << "Run: " << war.get_run() << std::endl;
    //     std::cout << "=============================" << std::endl;
    // }
};

Warrior::Warrior(std::string name_val, int health_val, int xp_val, int hit_val, int run_val)
    :Player(name_val, health_val, xp_val) 
{
    hit = hit_val, run = run_val;
}


void display_warrior(Warrior war)
{
    std::cout << "=============================" << std::endl;
    std::cout << "Name: " << war.get_name() << std::endl;
    std::cout << "Health: " << war.get_health() << std::endl;
    std::cout << "XP: " << war.get_xp() << std::endl;
    std::cout << "Hit: " << war.get_hit() << std::endl;
    std::cout << "Run: " << war.get_run() << std::endl;
    std::cout << "=============================" << std::endl;
}


// ========================================================================================


int main()
{
    Warrior hero("Hero", 100, 93, 88, 54);
    display_warrior(hero);

    hero.set_xp(97);
    hero.set_run(91);
    display_warrior(hero);
}
