#include <iostream>
#include <string>
#include "../Weapon.hh"
#include "../Inventory.hh"
#include "../linkedList.hh"
#include "../Item.hh"
#include "../Player.hh"
#ifndef WARRIOR_H
#define WARRIOR_H

class Warrior : public Player
{
    private:
        Weapon* offHandWeaponSlot; // General weapon slot for all players
    public:
        Warrior(const std::string& name, const std::string& race, int level) :
        Player(name,race,"Warrior",level){}

        void equipItem(Item* item) override;
        bool isMainWeaponEquipped();
        bool isOffHandWeaponEquipped();
};


#endif  