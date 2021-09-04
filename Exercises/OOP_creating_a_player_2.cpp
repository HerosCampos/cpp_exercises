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


class Wizard: public Player
{
private:
    int spell_level;
    int mana;

public:
    int get_spell_level() {return spell_level;}
    int get_mana() {return mana;}

    void set_spell_level(int spell_level_val) {spell_level = spell_level_val;}
    void set_mana(int mana_val) {mana = mana_val;}

    Wizard(std::string name_val, int health_val, int xp_val, int spell_level_val, int mana_val);
};

Wizard::Wizard(std::string name_val = "No name", int health_val = 0, int xp_val = 0, int spell_level_val = 0, int mana_val = 0)
    :Player(name_val, health_val, xp_val)
{
    spell_level = spell_level_val, mana = mana_val;
}


void display_wizard(Wizard w)
{
    std::cout << "=============================" << std::endl;
    std::cout << "Name: " << w.get_name() << std::endl;
    std::cout << "Health: " << w.get_health() << std::endl;
    std::cout << "XP: " << w.get_xp() << std::endl;
    std::cout << "Spell Level: " << w.get_spell_level() << std::endl;
    std::cout << "Mana: " << w.get_mana() << std::endl;
    std::cout << "=============================" << std::endl;
}


// ========================================================================================


class Monk: public Player
{
private:
    int agility;
    int flexibility;

public:
    int get_agility() {return agility;}
    int get_flexibility() {return flexibility;}

    int set_agility(int agility_val) {agility = agility_val;}
    int set_flexibility(int flexibility_val) {flexibility = flexibility_val;}

    Monk(std::string name_val = "No name", int health_val = 0, int xp_val = 0, int agility_val = 0, int flexibility_val = 0);
};

Monk::Monk(std::string name_val, int health_val, int xp_val, int agility_val, int flexibility_val)
    :Player(name_val, health_val, xp_val)
{
    agility = agility_val;
    flexibility = flexibility_val;
}


void display_monk(Monk m)
{
    std::cout << "=============================" << std::endl;
    std::cout << "Name: " << m.get_name() << std::endl;
    std::cout << "Health: " << m.get_health() << std::endl;
    std::cout << "XP: " << m.get_xp() << std::endl;
    std::cout << "Agility: " << m.get_agility() << std::endl;
    std::cout << "Flexibility: " << m.get_flexibility() << std::endl;
    std::cout << "=============================" << std::endl;
}


// ========================================================================================


int main()
{
    Warrior hero("Aragorn", 100, 93, 88, 99);
    display_warrior(hero);

    hero.set_xp(97);
    hero.set_run(91);
    display_warrior(hero);

    Wizard gandalf("Gandalf", 100, 100, 99, 50);
    display_wizard(gandalf);
}
