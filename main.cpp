#include <iostream>
#include "Player.h"
#include "Team.h"

using namespace std;

int main() {
    string names[] = {"Sam B", "Sam D", "Jake", "Bill", "Cooper", "Matt", "Travis"};
    Team yada_yada(7, names);

    cout << yada_yada.get_roster()[0]->get_name() << endl;

    if (yada_yada.set_starter("S", yada_yada.get_roster()[0]) == false) {
        cout << "Error adding player/position" << endl;
    } else {
        cout << "Cool" << endl;
    }

    if (yada_yada.set_starter("S", yada_yada.get_roster()[1]) == false) {
        cout << "Error adding player/position" << endl;
    } else {
        cout << "Cool" << endl;
    }

    if (yada_yada.set_starter("OH1", yada_yada.get_roster()[0]) == false) {
        cout << "Error adding player/position" << endl;
    } else {
        cout << "Cool" << endl;
    }

    return 0;
}