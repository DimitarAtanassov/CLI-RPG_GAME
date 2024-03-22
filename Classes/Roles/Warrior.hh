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
    public:
        Warrior(const std::string& name, const std::string& race, int level) :
        Player(name,race,"Warrior",level){}

        virtual void setPlayerHealth() override;
        
};


#endif