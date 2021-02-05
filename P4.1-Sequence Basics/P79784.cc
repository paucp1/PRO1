#include <iostream>
using namespace std;

int main () {
    char x;
    int eo = 0;
    int sn = 0;
    
    while (cin >> x) {
        if (x == 'e') eo = eo + 1;
        else if (x == 'o') eo = eo - 1;
        else if (x == 's') sn = sn + 1;
        else sn = sn - 1;
    }
    
    cout << "(" << eo << ", " << sn << ")" << endl;
}
