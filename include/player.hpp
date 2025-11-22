#pragma once
#include <string>
#include <vector>

class Player {
private:
    std::string name;
    std::vector<std::string> inventory;
    bool hasCaravan = false;
    int strength;
    int intelligence;
    int charisma;
public:
    Player(const std::string& playerName);
    std::string getName() const;
};
