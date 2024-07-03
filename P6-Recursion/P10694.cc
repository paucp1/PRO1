/*
Feu un programa que llegeixi un natural n i que escrigui 2n − 1 barres amb asteriscos seguint el patró que es pot deduir dels exemples.

Entrada

L’entrada consisteix en un natural n > 0.

Sortida

Escriviu 2n − 1 línies seguint el patró que es pot deduir dels exemples.
*/

#include <iostream>
using namespace std;

void barres (int n) {
    if ( n == 1) cout << "*" << endl;
    else {
        barres (n-1);
        barres (n - 1);
        for (int i = 0; i != n; ++i) cout << "*";
        cout << endl;
    }
}

int main () {
    int x;
    cin >> x;
    barres (x);
}
