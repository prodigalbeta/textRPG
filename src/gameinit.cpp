#include "../include/gameinit.hpp"
#include "../include/player.hpp"
#include <iostream>

Player gameInit () {
    std::string heroName;
    std::cout << "Enter your hero's name:\n"
              << "> ";
    std::getline(std::cin, heroName);
    Player hero(heroName);
    return Player(heroName);
}