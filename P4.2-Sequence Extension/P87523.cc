/*
Feu un programa que llegeixi una seqüència de lletres acabada en punt i digui si conté la successió de lletres consecutives ‘h’, ‘o’, ‘l’, ‘a’ o no.

Entrada

L’entrada consisteix en una seqüència de lletres minúscules acabada en ‘.’.

Sortida

Cal escriure “hola” si l’entrada conté les lletres ‘h’, ‘o’, ‘l’, ‘a’ consecutivament. Altrament, cal escriure “adeu”.
*/

#include <iostream>
using namespace std;

int main () {
    char act = 'q';
    char l1 = 'q';
    char l2 = 'q';
    char l3 = 'q';
    bool trobat = false;
    
    while (not trobat and act != '.') {
        cin >> act;
        if (l1 == 'h' and l2 == 'o' and l3 == 'l' and act == 'a') trobat = true;
        l1 = l2;
        l2 = l3;
        l3 = act;
    }
    if (trobat) cout << "hola" << endl;
    else cout << "adeu" << endl;
}
