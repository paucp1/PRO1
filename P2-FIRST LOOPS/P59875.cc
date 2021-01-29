#include <iostream>
using namespace std;

int main () {
    int x, y;
    cin >> x >> y;
    
    if (x < y) {
        int aux = y;
        y = x;
        x = aux;
    }
    
    while (x >= y) {
        cout << x << endl;
        x = x - 1;
    }
}
