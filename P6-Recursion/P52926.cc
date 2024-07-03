/*
Feu un programa que llegeixi una seqüència de paraules fins a la primera ocurrència de la paraula “fi”, i que l’escrigui en ordre invers.

Entrada

L’entrada consisteix en una seqüència de paraules. Almenys una és “fi”.

Sortida

Cal escriure totes les paraules de la seqüència original fins a la primera aparició de “fi”, en ordre invers, i una per línia.

Observació

Per practicar, useu recursivitat (no taules).
*/

#include <iostream>
using namespace std;

void girar (string p) {
    if (cin >> p and p != "fi") {
        girar (p);
        cout << p << endl;
    }
}

int main () {
    string x;
    if (cin >> x and x != "fi") {
    girar (x);
    cout << x << endl;
    }
}
