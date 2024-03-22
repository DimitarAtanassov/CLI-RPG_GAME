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
        Weapon* weaponSlot; // General weapon slot for all players

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
        virtual void setPlayerMana();

        void printPlayerStats();

        // Setters for weapons
        void swapMeleeSlotOne(Weapon*);
        void equipMeleeSlotOne(Weapon*);
        bool isMeleeSlotOneTaken();
        virtual void equipItem(Item*);

        void swapMeleeSlotTwo(Weapon*);
        void equipMeleeSlotTwo(Weapon*);
        bool isMeleeSlotTwoTaken();

        void attackMelee();
        void attackRange();
        void addItemToInventory(Item*);
        void openInventory();
        int attack();


};


#endif