#include <iostream>
using namespace std;

int main () {
    int b, n;
    
    while (cin >> b >> n) {
        int xifres = 1;
        
        while (n/b != 0) {
            xifres = xifres + 1;
            n = n/b;
        }
        cout << xifres << endl;
    }
}
