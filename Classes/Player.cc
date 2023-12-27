#include <iostream>
#include <string>
#include "Player.hh"


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
    this->setPlayerMana();
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

void Player::setPlayerMana()
{
    this->mana = 100;
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
    this->meleeSlotOne = mainWep;
}

void Player::equipMeleeSlotTwo(Weapon* sideWep)
{
    this->meleeSlotTwo = sideWep;
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

