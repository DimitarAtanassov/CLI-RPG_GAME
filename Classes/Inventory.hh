#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
#include "Item.hh"
#include "linkedList.hh"

class Inventory
{
    public:
       
        Inventory();
        //~Inventory();
        void addItem(Item*);
        void printInventory();
    private:
       void sortByPrice();
       void sortByType();
       void sortByName();
       linkedList<Item*> inventory; // Linked list where each node is an item
};
#endif // INVENTORY_H