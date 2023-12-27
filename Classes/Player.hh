#include <iostream>
#include <string>
#include "Weapon.hh"

#ifndef PLAYER_H
#define PLAYER_H


class Player{

    private:
        std::string name;
        int level;
        int health;
        int mana;
        std::string playerClass;
        std::string race;
        Weapon* meleeSlotOne;
        Weapon* meleeSlotTwo;
        Weapon* rangedSlotOne;
        Weapon* rangedSlotTwo;


    public:
        Player(const std::string&,const std::string&,const std::string&,int);    //Constructor
        std::string getPlayerName();
        void setPlayerName(const std::string&);


        int getPlayerLevel();
        void setPlayerLevel(int);

        int getPlayerHealth();
        void setPlayerHealth();

        int getPlayerMana();
        void setPlayerMana();

        void printPlayerStats();

        // Setters for weapons
        void swapMeleeSlotOne(Weapon*);
        void equipMeleeSlotOne(Weapon*);
        bool isMeleeSlotOneTaken();

        void swapMeleeSlotTwo(Weapon*);
        void equipMeleeSlotTwo(Weapon*);

        void attackMelee();
        void attackRange();





};


#endif