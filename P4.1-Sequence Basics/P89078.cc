#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi una seqüència de naturals i que indiqui la posició del primer nombre parell.

Entrada

L’entrada consisteix en una seqüència de naturals que conté, com a mínim, un nombre parell.

Sortida

Cal escriure la posició del primer nombre parell de la seqüència.
*/

int main () {
    int n = -1;
    int pos = 0;
    bool trobat = false;
    
    while (not trobat and cin >> n) {
        if (n%2 == 0) {
            pos = pos + 1;
            cout << pos << endl;
            trobat = true;
        }
        else pos = pos + 1;
    }
}
