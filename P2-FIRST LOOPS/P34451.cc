#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi un enter estrictament positiu x i una seqüència d’enters, i que digui quants elements hi ha a la seqüència que siguin múltiples de x.

Entrada

L’entrada és un enter x > 0 seguit d’una seqüència d’enters.

Sortida

Escriviu el nombre d’elements de la seqüència que són múltiples de x.
*/

int main () {
    int x, n;
    cin >> x;
    int suma = 0;
    
    while (cin >> n) {
        if (n%x == 0) suma = suma + 1;
    }
    
    cout << suma << endl;
}
