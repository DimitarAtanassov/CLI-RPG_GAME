#include "Weapon.hh"
#include "Item.hh"
// Constructors
Weapon::Weapon()
{
    this->type = WeaponType::None;
    this->damage = 0;
}

Weapon::Weapon(WeaponType t, int dmg)
{
    this->type = t;
    this->damage = dmg;
}

Weapon::Weapon(std::string name,int level,int price,int id ,int dmg,WeaponType t)
: Item(name,level,price,id)
{
    this->type = t;
    this->damage = dmg;
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

WeaponType Weapon::getType()
{
    return this->type;
}

bool Weapon::isMelee()
{
    if(getType() == WeaponType::Melee)
    {
        return true;
    }
    return false;
}

bool Weapon::isRanged()
{
    if(getType() == WeaponType::Ranged)
    {
        return true;
    }
    return false;
}