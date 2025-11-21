#pragma once
#include <string>
#include <vector>

class Caravan {
  private:
    std::string name;
    std::vector<std::string> cargo;
    std::vector<std::string> equipment;
    int speed;
    int hitpoints;
    bool playerOwned;
};

