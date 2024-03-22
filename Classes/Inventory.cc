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
    inventory.insertTail(item);
}

void Inventory::printInventory()
{
    std::cout << "Items in inventory:" << std::endl;
    Node<Item*>* curr = inventory.getHead();

    while (curr != nullptr)
    {
        std::cout << curr->data->getItemName() << std::endl;
        curr = curr->next;   
    }
}