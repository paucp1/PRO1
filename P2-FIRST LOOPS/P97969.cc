#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi una seqüència de caràcters acabada en punt i que escrigui quantes lletres ‘a’ conté.

Entrada

L’entrada consisteix en una seqüència de caràcters acabada en punt.

Sortida

Cal escriure el nombre de vegades que ‘a’ apareix a la seqüència.
*/

int main () {
    char x = 'x';
    int suma = 0;
    
    while (x != '.') {
        cin >> x;
        if (x == 'a') suma = suma + 1;
    }
    cout << suma << endl;
}
