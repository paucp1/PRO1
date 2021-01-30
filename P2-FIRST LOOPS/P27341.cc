#include <iostream>
using namespace std;

int main () {
    int a, b;
    
    while (cin >> a >> b) {
        cout << "suma dels cubs entre " << a << " i " << b << ": ";
        int suma = 0;
        
        while (a <= b) {
            suma = suma + a*a*a;
            a = a + 1;
        }
        
        cout << suma << endl;
    }
}
  
