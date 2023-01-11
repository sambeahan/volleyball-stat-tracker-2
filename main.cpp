#include <iostream>

using namespace std;

int main() {
    int x = 4;
    int *xp = &x;
    *xp = 2;
    cout << x << endl;
}