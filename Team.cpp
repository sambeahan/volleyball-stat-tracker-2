#include "Team.h"

Team::Team(int size, string* names) {
    team_size = size;
    roster = new Player*[team_size];

    for (int i = 0; i < team_size; i++) {
        roster[i] = new Player(names[i]);
    }
}

Team::Team(int size) {
    team_size = size;
    roster = new Player*[team_size];

    for (int i = 0; i < team_size; i++) {
        roster[i] = new Player("Player " + to_string(i + 1));
    }
}

Team::Team(): Team(10) {}

bool Team::sub_player(string position, Player* player) {
    if (player->get_on_court() == false) {
        on_court_players[position]->set_on_court(false);
        on_court_players[position] = player;
        player->set_on_court(true);
        return true;
    } 
    return false;
}

bool Team::set_starter(string position, Player* player) {
    if (on_court_players.count(position) == 0 && player->get_on_court() == false) {
        on_court_players.insert(std::pair<std:: string, Player*>(position, player));
        player->set_on_court(true);
        return true;
    }
    return false; 
}

map<string, Player*> Team::get_on_court_players() { return on_court_players; }
Player** Team::get_roster() { return roster; }