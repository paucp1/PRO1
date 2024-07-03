/*
Feu un programa que llegeixi una seqüència de paraules i que escrigui, en ordre invers, la primera meitat de la llista.

Entrada

L’entrada consisteix en una seqüència de paraules.

Sortida

Si n és el nombre total de paraules, cal escriure les ⌊ n/2 ⌋ primeres paraules de la seqüència original, en ordre invers, i una per línia.

Observació

Per practicar, useu recursivitat (no taules).
*/

#include <iostream>
using namespace std;

void girar (int& x) {
    string p;
    if (cin >> p) {
        ++x;
        girar (x);
        if (x <= 0) cout << p << endl;
            x = x - 2;
        }
    }

int main () {
    int n = 0;
    girar (n);

}
