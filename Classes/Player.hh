#include <iostream>
#include <string>

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



};


#endif