#include <iostream>
#include <string>
#include "Player.hh"
#include "Item.hh"
#include "Weapon.hh"
#include "linkedList.hh"

Player::Player(const std::string& Name,const std::string& race,int level)
{
    this->name = Name;
    this->race = race;
    this->level = level;
    this->setPlayerHealth(100);
    this->setPlayerMana(100);
    this->mainWeaponSlot = nullptr;
}

void Player::setPlayerHealth(int hp)
{
    this->health = hp;
}

void Player::setPlayerMana(int mp)
{
    this->mana = mp;
}

void Player::printPlayerStats()
{

    std::cout << this->name << '(' << this->race << ')' << std::endl;
    std::cout << "Level: " << this->level << std::endl;
    std::cout << "Health: " << this->health << std::endl;
    std::cout << "Mana: " << this->mana << std::endl;
    
}


std::string Player::getPlayerName()
{
    return this->name;
}

void Player::addItemToInventory(Item* item)
{
    inventory.addItem(item);
}
  

void Player::equipItem(Item* item)
{
    if (Weapon* weapon = dynamic_cast<Weapon*>(item))
    {
        mainWeaponSlot = weapon;
    }
        
}

bool Player::isAlive()
{
    if(this->health > 0)
    {
        return true;
    }

    return false;
}


int Player::attack()
{
    return mainWeaponSlot->getDamage();
}

void Player::setPlayerName(const std::string& newName )
{
    this->name = newName;
}

int Player::getPlayerLevel()
{
    return this->level;
}

void Player::setPlayerLevel(int level)
{
    this->level = level;
}

void Player::openInventory()
{
    inventory.printInventory();
}

int Player:: getPlayerHealth()
{
    return this->health;
}
// void Player::equipMeleeSlotOne(Weapon* mainWep)
// {
//     if(mainWep->isMelee())
//     {
//         this->meleeSlotOne = mainWep;
//         std::cout << "Equipped " << mainWep->getItemName() << " Successfully" << std::endl;
//     }
//     else
//     {
//         std::cout << "Cannot Equip this weapon in Melee slot it is a ranged weapon" << std::endl;
//     }
    
// }

// void Player::equipMeleeSlotTwo(Weapon* sideWep)
// {
//     if(sideWep->isMelee())
//     {
//         this->meleeSlotTwo = sideWep;
//         std::cout << "Equipped " << sideWep->getItemName() << " Successfully" << std::endl;
//     }
//     else
//     {
//         std::cout << "Cannot Equip this weapon in Melee slot it is a ranged weapon" << std::endl;
//     }
// }

// bool Player::isMeleeSlotOneTaken()
// {
//     if(this->meleeSlotOne != nullptr)
//     {
//         return true;
//     }
//     return false;
// }
