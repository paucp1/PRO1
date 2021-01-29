#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int numdigits = 1;
    cout << "El nombre de digits de " << n;
    
    while (n >= 10) {
        numdigits = numdigits + 1;
        n = n/10;
    }
    
    cout << " es " << numdigits << "." << endl;
}
