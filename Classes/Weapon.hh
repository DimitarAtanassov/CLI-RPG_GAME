#include <iostream>
#include <string>
#include "Item.hh"
#ifndef WEAPON_H
#define WEAPON_H

class Weapon : public Item{
    
    private:
        std::string type;
        int damage;
    public:
        Weapon(std::string, int);
        Weapon(std::string,int,int,int,int,std::string);
        Weapon();
        void equip();
        void pickup();
        void drop();
        void attack();
        void reload();
        void printItemStats() override;
        int getDamage();
        void setDamage(int);
};

#endif