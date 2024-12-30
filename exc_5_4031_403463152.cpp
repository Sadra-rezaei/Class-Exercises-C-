#include <iostream>
using namespace std;

int Coration (int x) {
    int y = 0;
    while (x != 0) {
        y += x % 10;
        x /= 10;
        y *= 10;
    }
    return y / 10;
}

main () {
    int x;
    cin >> x;
    cout << Coration (x);
}