#include <iostream>
#include "Player.h"

using namespace std;

int main() {
    
    Player ob1("Obi-Wan Kenobi");
    int x;

    ob1.increment_stat("Kills", 3);

    cout << ob1.get_on_court() << endl;

    ob1.set_on_court(true);

    cout << ob1.get_on_court() << endl;


}