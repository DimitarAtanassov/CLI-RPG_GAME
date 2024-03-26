#include <iostream>
#include <string>
#include "Classes/Player.hh"
#include "Classes/Weapon.hh"
#include "Classes/Item.hh"
#include "Classes/Inventory.hh"
#include "Classes/linkedList.hh"
#include "Classes/CombatManager.hh"
#include "Classes/Dice.hh"
#include <limits>
int main(int argc, char* argv[])
{
    // User Vars
    std::string userName;
    int raceChoice;
    std::string userRace;
    bool validRace = false;
    bool validWep = false;
    int wepChoice;
    Weapon* starterWep;
    Dice* dice = new Dice();
    Monster *slime = new Monster("Shlime", "slime", 1,10,10,100);
    std::cout << "-------------------" << std::endl;
    std::cout << "Welcome To TextTower" << std::endl;
    std::cout << "-------------------" << std::endl;

    std::cout << "Enter Your Name:";
    std::cin >> userName;

    // Get the Players Race
    while (!validRace)
    {
        std::cout << "Select A Race:" << std::endl;
        std::cout << "1.) Dwarf" << std::endl;
        std::cout << "2.) Human" << std::endl;
        std::cout << "3.) Gnome" << std::endl;
        std::cout << "4.) Elf" << std::endl;
        std::cout << "5.) Orc" << std::endl;
        std::cout << "Enter the corresponding number: ";
        std::cin >> raceChoice;
        
        // Invalid Input: Not an Int
        if (std::cin.fail())
        {
            std::cin.clear(); //Clear input
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a number 1-5" << std::endl;
        } 
        
        else{
            switch (raceChoice){
                case 1:
                    userRace = "Dwarf";
                    validRace = true;
                    break;
            
                case 2:
                    userRace = "Human";
                    validRace = true;
                    break;
            
                case 3:
                    userRace = "Gnome";
                    validRace = true;
                    break;
                case 4:
                    userRace = "Elf";
                    validRace = true;
                    break;
                case 5:
                    userRace = "Orc";
                    validRace = true;
                    break;
            }
        }
    }
        





// REFACTOR 
    Player *user = new Player(userName,userRace,1);
    //Inventory *playerInv = new Inventory();
    user->printPlayerStats();

    while(!validWep)
    {
        std::cout << "Select a Weapon " << user->getPlayerName() << ": " << std::endl;
        std::cout << "1.) Sword" << std::endl;
        std::cout << "2.) Bow" << std::endl;
        std::cin >> wepChoice;
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input: Select a number between 1-2" << std::endl;
        }
        else
        {
            switch(wepChoice)
            {
                case 1:
                    starterWep = new Weapon("Noobword", 1, 0, 1,12,WeaponType::Melee);
                    std::cout << "Address of startWep in main: " << &starterWep << std::endl; 
                    user->addItemToInventory(starterWep);
                    validWep = true;
                    break;
                case 2:
                    starterWep = new Weapon("Noobbow", 1, 0, 1,12,WeaponType::Ranged);
                    user->addItemToInventory(starterWep);
                    validWep = true;
                    break;
                default:
                    std::cout << "Invalid Choice, input the corresponding number" << std::endl;
            }
        }
    }

    user->printPlayerStats();
    user->openInventory();
    user->equipItem(starterWep);
    
    CombatManager* cm = new CombatManager(user,slime,dice);
    cm->startCombat();
    return 0;
}