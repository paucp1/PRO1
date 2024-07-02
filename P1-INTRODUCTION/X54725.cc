#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi dos nombres i que n’escrigui el mínim.

Entrada

L’entrada consisteix en dos enters.

Sortida

Cal escriure una línia amb el mínim dels dos nombres.
*/

int main () {
    int x, y;
    cin >> x >> y;
    
    if (x <= y) cout << x << endl;
    else cout << y << endl;
}
