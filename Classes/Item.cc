#include <iostream>
#include <string>
#include "Item.hh"

Item::Item(std::string name, int level, int price, int id)
{
    this->name = name;
    this->level = level;
    this->price = price;
    this->id = id;
}

Item::Item()
{
    this->id = 0;
    this->price = 0;
    this->level = 0;
    this->name = "None";
}


int Item::getItemLevel(){ return this->level; }
int Item::getItemPrice(){ return this->price; }
int Item::getItemId(){ return this->id; }
std::string Item::getItemName(){ return this->name; }

void Item::setItemLevel(int level)
{
    this->level = level;
}

void Item::setItemPrice(int price)
{
    this->price = price;
}

void Item::setItemID(int id)
{
    this->id = id;
}

void Item::setItemName(std::string name)
{
    this->name = name;
}

void Item::printItemStats()
{
    std::cout << "Item Name: " << getItemName() << std::endl;
    std::cout << "Item Level: " << getItemLevel() << std::endl;
    std::cout << "Item Price: " << getItemPrice() << std::endl;
    std::cout << "Item ID: " << getItemId() << std::endl;
}


