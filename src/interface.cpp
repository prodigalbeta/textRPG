#include <iostream>
#include <string>
#include "../include/interface.hpp"

std::string userGameInput;

void prompt() {
  std::cout << "> ";
  std::getline(std::cin, userGameInput);
}
