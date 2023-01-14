#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <map>

using namespace std;

class Player {
    private:
        string _name;
        map<string, int> stats;
        bool on_court;
    public:
        Player(string name);
        Player();

        string get_name();
        void set_name(string name);

        int get_stat(string stat);
        void increment_stat(string stat, int amount);

        bool get_on_court();
        void set_on_court(bool on);
};

#endif