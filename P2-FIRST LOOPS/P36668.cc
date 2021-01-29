#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int x = 1;
    int suma = 0;
    
    while (x <= n) {
        suma = suma + x*x;
        x = x + 1;
    }
    
    cout << suma << endl;
}
