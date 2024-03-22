#include <iostream>
#include <string>
#include "CombatManager.hh"
#include "Player.hh"
#include "Item.hh"
#include "Weapon.hh"
#include "Monster.hh"

CombatManager::CombatManager(Player& player, Monster& monster, Dice* dice) : currPlayer(player), currMonster(monster), combatDice(dice) 
{
    combatDice = dice;
}
void CombatManager::startCombat()
{
    std::cout << "Combat between "  << currPlayer.getPlayerName() << " and " << currMonster.getMonsterName() << " Begin." << std::endl;
    
    while(currPlayer.isAlive() && currMonster.isAlive()) 
    {
        std::cout << currPlayer.getPlayerName() << "'s Health: " << currPlayer.getPlayerHealth() << std::endl;
         std::cout << currMonster.getMonsterName() << "'s Health: " << currMonster.getMonsterHealth() << std::endl;
        int playerDmgroll = combatDice->roll();
        int playerdmgtotal = playerDmgroll * currPlayer.attack();
        currMonster.setMonsterHealth(currMonster.getMonsterHealth() - playerdmgtotal);

        int monsterDmgroll = combatDice->roll();
        int monsterDmgTotal = monsterDmgroll * currMonster.attack();
        currPlayer.setPlayerHealth(currPlayer.getPlayerHealth() - monsterDmgTotal);
    }

    // Combat summary of logic
    /*
        roll dice for player
        multiple dice role by player weapon dmg
            - Player Weapon Dmg
        attack monster
    */
    int playerDmgroll = combatDice->roll();
    int playerdmgtotal = playerDmgroll * currPlayer.attack();
    currMonster.setMonsterHealth(currMonster.getMonsterHealth() - playerdmgtotal);

    int monsterDmgroll = combatDice->roll();
    int monsterDmgTotal = monsterDmgroll * currMonster.attack();
    currPlayer.setPlayerHealth(currPlayer.getPlayerHealth() - monsterDmgTotal);
    

}