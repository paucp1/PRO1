/*
Feu un programa que llegeixi una seqüència de paraules i que l’escrigui en ordre invers.

Entrada

L’entrada consisteix en una seqüència de paraules.

Sortida

Cal escriure les paraules de la seqüència original, en ordre invers, i una per línia.

Observació

Per practicar, useu recursivitat (no taules).
*/

#include <iostream>
using namespace std;

void girar (string p) {
    if (cin >> p) {
        girar (p);
        cout << p << endl;
    }
}

int main () {
    string x;
    if (cin >> x) {
    girar (x);
    cout << x << endl;
    }
}
