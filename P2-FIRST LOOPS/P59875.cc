#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi dos nombres x i y, i que escrigui tots els nombres entre x i y (o entre y i x), de gran a petit.

Entrada

L’entrada consisteix en dos enters x i y.

Sortida

Cal escriure tots els enters entre x i y (o entre y i x), de gran a petit.
*/

int main () {
    int x, y;
    cin >> x >> y;
    
    if (x < y) {
        int aux = y;
        y = x;
        x = aux;
    }
    
    while (x >= y) {
        cout << x << endl;
        x = x - 1;
    }
}
