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
    int playerDmgroll;
    int playerdmgtotal;
    int monsterDmgroll;
    int monsterDmgTotal;
    
    while(currPlayer.isAlive() && currMonster.isAlive()) 
    {
        std::cout << currPlayer.getPlayerName() << "'s Health: " << currPlayer.getPlayerHealth() << std::endl;
        std::cout << currMonster.getMonsterName() << "'s Health: " << currMonster.getMonsterHealth() << std::endl;
        
        // Player Roll
        playerDmgroll = combatDice->roll();
        std::cout << currPlayer.getPlayerName() << " Rolled a: " << playerDmgroll << std::endl; 
        playerdmgtotal = playerDmgroll * currPlayer.attack();
        currMonster.setMonsterHealth(currMonster.getMonsterHealth() - playerdmgtotal);

        monsterDmgroll = combatDice->roll();
        monsterDmgTotal = monsterDmgroll * currMonster.attack();
        currPlayer.setPlayerHealth(currPlayer.getPlayerHealth() - monsterDmgTotal);
    }
    

}