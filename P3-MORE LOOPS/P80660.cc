#include <iostream>
using namespace std;

int main () {
    int n;
    
    while (cin >> n) {
        int passos = 0;
        while (n > 1) {
            passos = passos + 1;
            if (n%2 == 0) n = n/2;
            else n = 3*n + 1;
        }
        
        cout << passos << endl;
    }
}
