#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi un nombre i que n’escrigui el nombre de dígits.

Entrada

L’entrada consisteix en un natural n.

Sortida

Cal escriure el nombre de dígits de n.
*/

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
