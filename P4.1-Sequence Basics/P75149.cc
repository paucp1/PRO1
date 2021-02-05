#include <iostream>
using namespace std;

int main () {
    char x = 'x';
    bool trobada = false;
    
    while (not trobada and x != '.') {
        cin >> x;
        if (x == 'a') {
            cout << "si" << endl;
            trobada = true;
        }
    }
    
    if (x == '.') cout << "no" << endl;
}
