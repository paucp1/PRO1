/*
Feu un programa que llegeixi un nombre n i una seqüència de n o més paraules, i que escrigui les n darreres paraules en ordre invers.

Entrada

L’entrada comença amb un natural n, seguit de, com a mínim, n paraules.

Sortida

Cal escriure les n darreres paraules de la seqüència original, en ordre invers, i una per línia.

Observació

Per practicar, useu recursivitat (no taules).
*/

#include <iostream>
using namespace std;

void girar (int& t) {
    string p;
    if (cin >> p) {
        girar (t);
        if (t != 0) {
        cout << p << endl;
        --t;
        }
    }
}

int main () {
    int times;
    cin >> times;
    girar (times);
}
