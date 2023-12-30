#include <iostream>
#include <string>
#include "Monster.hh"

// One Weapon Monster
Monster::Monster(const std::string& name, const std::string& type, int level ,int health,int mana,Weapon* mainWep, int gold)
{
    this->name = name;
    this->type = type;
    this->level = level;
    this->health = health;
    this->mana = mana;
    this->meleeSlotOne = mainWep;
    this->meleeSlotTwo = nullptr;
    this->gold = gold;
}

// Two Weapon Monster
Monster::Monster(const std::string& name, const std::string& type, int level ,int health,int mana,Weapon* mainWep,Weapon* sideWep, int gold)
{
    this->name = name;
    this->type = type;
    this->level = level;
    this->health = health;
    this->mana = mana;
    this->meleeSlotOne = mainWep;
    this->meleeSlotTwo = sideWep;
    this->gold = gold;
}

// No Weapon Monster
Monster::Monster(const std::string& name, const std::string& type, int level ,int health,int mana,int gold)
{
    this->name = name;
    this->type = type;
    this->level = level;
    this->health = health;
    this->mana = mana;
    this->gold = gold;
    this->meleeSlotOne = nullptr;
    this->meleeSlotTwo = nullptr;
}

int Monster::getMonsterLevel()
{
    return this->level;
}

int Monster::getMonsterHealth()
{
    return this->health;
}

int Monster::getMonsterMana()
{
    return this->mana;
}

int Monster::getMonsterGold()
{
    return this->gold;
}

std::string Monster::getMonsterType()
{
    return this->type;
}

std::string Monster::getMonsterName()
{
    return this->name;
}

void Monster::setMonsterLevel(int level)
{
    this->level = level;
}

void Monster::setMonsterHealth(int health)
{
    this->health = health;
}

void Monster::setMonsterMana(int mana)
{
    this->mana = mana;
}
void Monster::setMonsterGold(int gold)
{
    this->gold = gold;
}
void Monster::setMonsterName(const std::string& name)
{
    this->name = name;
}
void Monster::setMonsterType(const std::string& type)
{
    this->type = type;
}