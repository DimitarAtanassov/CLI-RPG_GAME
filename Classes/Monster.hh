#include <iostream>
#include <string>
#include "Weapon.hh"

#ifndef MONSTER_H
#define MONSTER_H

class Monster
{
    private:
        std::string name;
        int level;
        int health;
        int mana;
        std::string type;
        Weapon* meleeSlotOne;
        Weapon* meleeSlotTwo;
        int gold; //How much currency the player will get for kill this monster
    
    public:
        // Monster with 1 Weapon
        Monster(const std::string&, const std::string&, int,int,int,Weapon*, int);
        // Monster with 2 Weapon
        Monster(const std::string&, const std::string&, int,int,int,Weapon*,Weapon*, int);
        //Monster with 0 Weapon
        Monster(const std::string&, const std::string&, int,int,int,int);

        int getMonsterLevel();
        int getMonsterHealth();
        int getMonsterMana();
        int getMonsterGold();
        std::string getMonsterType();
        std::string getMonsterName();

        void setMonsterLevel(int);
        void setMonsterHealth(int);
        void setMonsterMana(int);
        void setMonsterGold(int);
        void setMonsterName(const std::string&);
        void setMonsterType(const std::string&);
};

#endif