#pragma once
#include <string>
#include <vector>

class Player {
private:
    std::string name;
    std::vector<std::string> inventory;
public:
    Player(const std::string& playerName);
    std::string getName() const;
};