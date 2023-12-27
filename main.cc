#include <iostream>
#include <string>
#include "Classes/Player.hh"
#include <limits>
int main(int argc, char* argv[])
{
    // User Vars
    std::string userName;
    int raceChoice;
    std::string userRace;
    int classChoice;
    std::string userClass;
    bool validRace = false;
    bool validClass = false;
    
    std::cout << "-------------------" << std::endl;
    std::cout << "Welcome To NvrTower" << std::endl;
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

    while(!validClass)
    {
        std::cout << "Select a Class:" << std::endl;
        std::cout << "1.) Warrior" << std::endl;
        std::cout << "2.) Mage" << std::endl;
        std::cout << "3.) Healer" << std::endl;
        std::cout << "4.) Monk" << std::endl;
        std::cout << "Please enter the corresponding number: ";
        std::cin>>classChoice;
        //Invalid Input: Not an int
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a number 1-4" << std::endl;
        }
        else
        {
            switch(classChoice)
            {
                case 1:
                    userClass = "Warrior";
                    validClass = true;
                    break;
                case 2:
                    userClass = "Mage";
                    validClass = true;
                    break;
                case 3:
                    userClass = "Healer";
                    validClass = true;
                    break;
                case 4:
                    userClass = "Monk";
                    validClass = true;
                    break;
            default:
                std::cout << "Invalid Choice, input the corresponding number" << std::endl;
            }
        }
    }
        


    Player *user = new Player(userName,userRace,userClass,1);
    user->printPlayerStats();
    return 0;
}