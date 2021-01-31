#include <iostream>
using namespace std;

int main () {
    int a, b;
    
    while (cin >> a >> b) {
        int suma = 1;
        for (int i = 0; i < b; ++i) {
            suma = suma*a;
        }
        cout << suma << endl;
    }
}
