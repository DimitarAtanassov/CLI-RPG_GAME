#include <iostream>
#include <string>
#include "Item.hh"
#ifndef WEAPON_H
#define WEAPON_H

// Enum class for different weapon types

enum class WeaponType {
    None,
    Melee,
    Ranged
};

//Polymorphing Item into Weapon
class Weapon : public Item{
    
    private:
        WeaponType type;
        int damage;
    public:
        Weapon(WeaponType, int);
        Weapon(std::string,int,int,int,int,WeaponType);
        Weapon();
        // ~Weapon();
        void equip();
        void attack();
        void reload();
        void printItemStats() override;
        int getDamage();
        void setDamage(int);
        WeaponType getType();
        bool isMelee();
        bool isRanged();
};

#endif