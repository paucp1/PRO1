#include <iostream>
using namespace std;

int main () {
    int n = -1;
    int pos = 0;
    bool trobat = false;
    
    while (not trobat and cin >> n) {
        if (n%2 == 0) {
            pos = pos + 1;
            cout << pos << endl;
            trobat = true;
        }
        else pos = pos + 1;
    }
}
