#include <iostream>
#include "include/all.hpp"

bool running = true;
extern std::string userGameInput;

int main () {
    mainMenu();
    prompt();
    Parser::Action::verbParse(userGameInput);
    while (running) {
    }
    return 0;
}
