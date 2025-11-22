#include "../include/player.hpp"
#include <string>

Player::Player(const std::string& x) {
    name = x;
}

std::string Player::getName() const {
    return name;
}
