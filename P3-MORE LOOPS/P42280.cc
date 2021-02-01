#include <iostream>
using namespace std;

int main () {
    int f, c;
    cin >> f >> c;
    int suma = 0;
    char n;
    
    for (int i = 0; i < f; ++i) {
         for (int j = 0; j < c; ++j) {
            cin >> n;
            suma = suma + (n - '0');
        }
    }
    cout << suma << endl;
}
