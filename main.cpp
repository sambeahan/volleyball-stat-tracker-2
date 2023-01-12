#include <iostream>
#include "Player.h"

using namespace std;

int main() {
    Player ob1("Obi-Wan Kenobi");
    int x;

    ob1.increment_stat("Kills", 3);

    x = 2;

    cout << ob1.get_name() << endl;
}