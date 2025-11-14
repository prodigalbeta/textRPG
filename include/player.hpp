#pragma once
#include <string>
#include <vector>

class Player {
private:
    std::string name;
    std::vector<std::string> inventory;
    int strength;
    int intelligence;
    int charisma;
public:
    Player(const std::string& playerName);
    std::string getName() const;
};
