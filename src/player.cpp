#include "../include/player.hpp"
#include <string>

Player::Player(const std::string& playerName)
    : name(playerName) {}

std::string Player::getName() const {
    return name;
}