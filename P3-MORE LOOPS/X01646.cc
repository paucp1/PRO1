#include <iostream>
using namespace std;

int main () {
    int b, n;
    cin >> b;
    
    while (cin >> n) {
        int aux = n;
        int suma = 0;
        
        while (aux/b > 0) {
            suma = suma + aux%b;
            aux = aux/b;
            
            if (aux/b == 0) suma = suma + aux%b;
        }
        
        if (n < b) {
            cout << n << ": " << n << endl;
        }
        
        else if (n >= b) {
            cout << n << ": " << suma << endl;
        }
    }
}
