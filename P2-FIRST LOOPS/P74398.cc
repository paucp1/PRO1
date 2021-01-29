#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int suma = 0;
    int b = 2;
    int aux = n;
    
    while (n/b >= 1 and b <= 16) {
       if (aux%b < n) {
        suma = suma + 1;
        aux = aux/b;
       }
        
        if (aux < b) {
            suma = suma + 1;
            cout << "Base " << b << ": " << suma << " cifras." << endl;
            b = b + 1;
            suma = 0;
            aux = n;
        }
    }
    
    while (n/b == 0 and b <=16) {
        cout << "Base " << b << ": " << "1 cifras." << endl;
        b = b + 1;
    }
}
