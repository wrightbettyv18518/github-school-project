#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;
    int z = 20;

    if (x > y && x < z) {
        cout << "x is the median";
    } else if (y > x && y < z) {
        cout << "y is the median";
    } else if (z > x && z < y) {
        cout << "z is the median";
    }

    return 0;
}
