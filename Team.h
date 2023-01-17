#ifndef TEAM_H
#define TEAM_H

#include "Player.h"

class Team {
    private:
        Player** roster;
        map<string, Player*> on_court_players;
        int team_size;
    public:
        Team(int size, string* names);
        Team(int size);
        Team();

        bool sub_player(string position, Player* player);
        bool set_starter(string position, Player* player);

        map<string, Player*> get_on_court_players();
        Player** get_roster();
};

#endif