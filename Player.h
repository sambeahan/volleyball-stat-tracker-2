#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <map>

using namespace std;

class Player {
    private:
        string _name;
        map<string, int> stats;
    public:
        Player(string name);
        Player();

        string get_name();
        void set_name(string name);

        int get_stat(string stat);
        void increment_stat(string stat, int amount);
};

#endif