#include "Weapon.hh"
#include "Item.hh"
Weapon::Weapon()
{
    this->name = "None";
    this->level = 0;
    this->price = 0;
    this->id = 0;
    this->type = "None";
    this->damage = 0;
}

Weapon::Weapon(std::string type, int damage)
{
    this->type = type;
    this->damage = damage;
}

Weapon::Weapon(std::string name,int level,int price,int id ,int damage,std::string type)
{
    this->name = name;
    this->level = level;
    this->price = price;
    this->id = id;
    this->damage = damage;
    this->type = type;
}

int Weapon::getDamage()
{
    return this->damage;
}

void Weapon::setDamage(int damage)
{
    this->damage = damage;
}

void Weapon::printItemStats()
{
    Item::printItemStats();
    std::cout << "Damage: " << getDamage() << std::endl;
}

std::string Weapon::getType()
{
    return this->type;
}

bool Weapon::isMelee()
{
    if(getType() == "melee")
    {
        return true;
    }
    return false;
}

bool Weapon::isRanged()
{
    if(getType() == "ranged")
    {
        return true;
    }
    return false;
}