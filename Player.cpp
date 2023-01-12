#include "Player.h"

Player::Player(string name) {
    _name = name;

    stats.insert(std::pair<std:: string, int>("Kills", 0));
    stats.insert(std::pair<std:: string, int>("Total attacks", 0));
    stats.insert(std::pair<std:: string, int>("Attack errors", 0));

    stats.insert(std::pair<std:: string, int>("Pass score", 0));
    stats.insert(std::pair<std:: string, int>("Total passes", 0));
}

Player::Player(): Player("") {}

string Player::get_name() { return _name; }
void Player::set_name(string name) { _name = name; }

int Player::get_stat(string stat) {
    return stats[stat];
}

void Player::increment_stat(string stat, int amount) {
    stats[stat] += amount;
}