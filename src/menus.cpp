#include "../include/menus.hpp"
#include "../include/gameinit.hpp"
#include <iostream>
#include <string>

extern bool running;
std::string menuInput;

void mainMenu () {
    std::cout << "The Body of Gaia\n"
              << "New Game\n"
              << "Load Game\n"
              << "Quit\n"
              << "> ";
    std::getline(std::cin, menuInput);
    if (menuInput == "New Game" || menuInput == "new game" || menuInput == "new") {
        std::cout << "Initialize\n";
        Player hero = gameInit();
        std::cout << "Character " << hero.getName() << " has been created.\n";
    }
    else if (menuInput == "Load Game" || menuInput == "load game" || menuInput == "load")
        std::cout << "File loaded\n";
    else if (menuInput == "Quit" || menuInput == "quit") {
        running = false;
        std::cout << "Goodbye!\n";
    }
    else {
        std::cout << "Invalid input.\n"
                  << "> ";
        std::getline(std::cin, menuInput);
    }
}