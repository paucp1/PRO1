#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi un nombre n, i que escrigui tots els nombres entre 0 i n.

Entrada

L’entrada consisteix en un natural n.

Sortida

Escriviu en ordre tots els naturals entre 0 i n.
*/

int main () {
    int n;
    cin >> n;
    int x = 0;
    
    while (x <= n) {
        cout << x << endl;
        x = x + 1;
    }
}
