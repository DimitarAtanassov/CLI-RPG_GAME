#include <iostream>
#include <string>
#include "Player.hh"
#include "Monster.hh"
#include "Dice.hh"

#ifndef COMBATMANAGER_H
#define COMBATMANAGER_H

class CombatManager {
public:
    CombatManager(Player* player, Monster* monster, Dice* dice);
    void startCombat();

private:
    Player* currPlayer;
    Monster* currMonster;
    Dice* dice;
};

#endif // COMBATHANDLER_H
