#include <iostream>
#include <string>
#include "Player.hh"
#include "Item.hh"
#include "Weapon.hh"
#include "linkedList.hh"

Player::Player(const std::string& Name,const std::string& race,const std::string& playerClass,int level)
{
    this->name = Name;
    this->race = race;
    this->playerClass = playerClass;
    this->level = level;
    this->meleeSlotOne = nullptr;
    this->meleeSlotTwo = nullptr;
    this->rangedSlotOne = nullptr;
    this->rangedSlotTwo = nullptr;
    this->setPlayerHealth();
    this->setPlayerMana(100);
}

void Player::setPlayerHealth()
{
    if(this->playerClass == "Warrior" || this->playerClass == "Monk")
    {
        this->health = 12;
    }
    else if(this->playerClass == "Mage" || this->playerClass == "Healer")
    {
        this->health = 10;
    }
}

void Player::setPlayerMana(int mana)
{
    this->mana = mana;
}

void Player::printPlayerStats()
{
    std::cout << this->name << '(' << this->race << ')' << std::endl;
    std::cout << "Class: " << this->playerClass << std::endl;
    std::cout << "Level: " << this->level << std::endl;
    std::cout << "Health: " << this->health << std::endl;
    std::cout << "Mana: " << this->mana << std::endl;
    if(isMeleeSlotOneTaken())
    {
        meleeSlotOne->printItemStats();
    }
    
}

void Player::equipMeleeSlotOne(Weapon* mainWep)
{
    if(mainWep->isMelee())
    {
        this->meleeSlotOne = mainWep;
        std::cout << "Equipped " << mainWep->getItemName() << " Successfully" << std::endl;
    }
    else
    {
        std::cout << "Cannot Equip this weapon in Melee slot it is a ranged weapon" << std::endl;
    }
    
}

void Player::equipMeleeSlotTwo(Weapon* sideWep)
{
    if(sideWep->isMelee())
    {
        this->meleeSlotTwo = sideWep;
        std::cout << "Equipped " << sideWep->getItemName() << " Successfully" << std::endl;
    }
    else
    {
        std::cout << "Cannot Equip this weapon in Melee slot it is a ranged weapon" << std::endl;
    }
}

bool Player::isMeleeSlotOneTaken()
{
    if(this->meleeSlotOne != nullptr)
    {
        return true;
    }
    return false;
}

std::string Player::getPlayerName()
{
    return this->name;
}

void Player::addItemToInventory(Item* item)
{
    playInventory.insertTail(item);
}


void Player::openInventory()
{
    Node<Item*>* currItem = playInventory.getHead();
    if(currItem != nullptr)
    {
        // A-> B -> C -> Null
        //    curr

        while(currItem != nullptr)
        {
            currItem->data->printItemStats();
            currItem = currItem->next;
        }
    }

}