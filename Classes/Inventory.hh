#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
#include "Item.hh"
#include "linkedList.hh"

class Inventory
{
    public:
        linkedList<Item*> itemList; // Linked list where each node is an item
        Inventory();
        void addItem(Item*);
    private:
       void sortByPrice();
       void sortByType();
       void sortByName();
       
};
#endif // INVENTORY_H