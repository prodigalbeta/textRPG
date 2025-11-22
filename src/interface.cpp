#include <iostream>
#include <string>
#include "../include/interface.hpp"

std::string userGameInput;
bool isWorldMap;
int roomID;

void prompt() {
  std::cout << "> ";
  std::getline(std::cin, userGameInput);
}
