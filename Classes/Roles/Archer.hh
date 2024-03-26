#include <iostream>
#include <string>
#include "../Weapon.hh"
#include "../Inventory.hh"
#include "../linkedList.hh"
#include "../Item.hh"
#include "../Player.hh"

#ifndef ARCHER_H
#define ARCHER_H

class Archer : public Player
{
    private:

    public:
        Archer(const std::string& name, const std::string& race, int level):
        Player(name,race,"Archer",level){}
        
}


#endif