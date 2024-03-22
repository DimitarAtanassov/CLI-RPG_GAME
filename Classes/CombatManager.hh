#include <iostream>
#include <string>
#include "Monster.hh"
#include "Player.hh"
#include "Dice.hh"

#ifndef COMBATMANAGER_H
#define COMBATMANAGER_H

class CombatManager
{
    private:
        Player& currPlayer;
        Monster& currMonster;
        Dice* combatDice;
    public:
    CombatManager(Player& player, Monster& monster, Dice* dice) : currPlayer(player), currMonster(monster), combatDice(dice) {}
    void startCombat();
    

};

#endif
