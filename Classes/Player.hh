#include <iostream>
#include <string>
#include "Weapon.hh"
#include "Inventory.hh"
#include "linkedList.hh"
#include "Item.hh"

#ifndef PLAYER_H
#define PLAYER_H


class Player{

    private:
         Inventory inventory;
    
    protected:
        std::string name;
        int level;
        int health;
        int mana;
        std::string playerClass;
        std::string race;
        Weapon* mainWeaponSlot; // General weapon slot for all players

    public:
        Player(const std::string&,const std::string&,const std::string&,int);    //Constructor
        std::string getPlayerName();
        void setPlayerName(const std::string&);
        int getPlayerLevel();
        void setPlayerLevel(int);
        int getPlayerHealth();
        virtual void setPlayerHealth(int);
        bool isAlive();
        int getPlayerMana();
        virtual void setPlayerMana(int);
        void printPlayerStats();
        virtual void equipItem(Item*);
        void addItemToInventory(Item*);
        void openInventory();
        int attack();


};


#endif