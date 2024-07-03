#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi una seqüència de caràcters acabada en punt i que digui si té alguna ‘a’ minúscula o no.

Entrada

L’entrada consisteix en una seqüència de caràcters acabada en ‘.’.

Sortida

Cal escriure una línia amb “si” o “no”, depenent de si ‘a’ apareix a la seqüència o no.
*/

int main () {
    char x = 'x';
    bool trobada = false;
    
    while (not trobada and x != '.') {
        cin >> x;
        if (x == 'a') {
            cout << "si" << endl;
            trobada = true;
        }
    }
    
    if (x == '.') cout << "no" << endl;
}
