#include <iostream>
#include <string>
#include "Inventory.hh"
#include "Item.hh"
#include "linkedList.hh"

Inventory::Inventory()
{
    
}


void Inventory::addItem(Item* item)
{
    itemList.insertTail(item);
}