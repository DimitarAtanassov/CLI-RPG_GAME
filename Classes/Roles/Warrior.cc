#include <iostream>
#include <string>
#include "Warrior.hh"

Warrior::Warrior(const std::string& name, const std::string& race, int level) :
         Player(name,race,"Warrior",level)
         {
            this->mainWeaponSlot = nullptr;
            this->offHandWeaponSlot = nullptr;
         }

void Warrior::equipItem(Item* item)
{
    if (Weapon* weapon = dynamic_cast<Weapon*>(item))
    {
        if(!isMainWeaponEquipped())
        {
            this->mainWeaponSlot = weapon;
        }
        else if(!isOffHandWeaponEquipped())
        {
            this->offHandWeaponSlot = weapon;
        }
        else
        {
            std::cout << "There are no empty weapon slots to equip " << weapon->getItemName() << std::endl;
        }
    }
        
};

bool Warrior::isMainWeaponEquipped()
{
    if(this->mainWeaponSlot == nullptr)
    {
        return false;
    }
    return true;
}

bool Warrior::isOffHandWeaponEquipped()
{
    if(this->offHandWeaponSlot == nullptr)
    {
        return false;
    }
    return true;
}
