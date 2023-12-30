#include <iostream>
#include <string>
#include "Monster.hh"
#include "Player.hh"

#ifndef COMBATMANAGER_H
#define COMBATMANAGER_H

class CombatManager
{
    private:
        Player currUser;
        Monster currMonster;
    public:
    CombatManager(Player,Monster);

};

#endif
