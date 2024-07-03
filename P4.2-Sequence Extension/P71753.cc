/*
Feu un programa que llegeixi sequències d’enters i que escrigui el valor màxim de cadascuna d’elles.

Entrada

L’entrada conté diverses seqüències. Cada seqüència comença el seu nombre d’elements n > 0, seguit de n enters.

Sortida

Escriviu el màxim de cada seqüència, un per línia.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    
    while (cin >> n) {
        int act;
        cin >> act;
        int max = act;
        for (int i = 0; i < n - 1; ++i) {
            cin >> act;
            if (act > max) max = act;
        }
        cout << max << endl;
    }
}
