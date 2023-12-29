#include <iostream>
#include <string>

#ifndef ITEM_H
#define ITEM_H

class Item
{
    protected:
        std::string name;
        int level;
        int price;
        int id;
    public:
        Item(std::string, int, int,int);
        Item();
        // ~Item();
        int getItemLevel();
        int getItemPrice();
        int getItemId();
        std::string getItemName();
        void setItemLevel(int);
        void setItemPrice(int);
        void setItemID(int);
        void setItemName(std::string);
        virtual void printItemStats();



};

#endif