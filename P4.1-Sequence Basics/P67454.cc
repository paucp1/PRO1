#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi una seqüència de caràcters i que escrigui quantes lletres ‘a’ conté abans del primer punt.

Entrada

L’entrada consisteix en una seqüència de caràcters que conté almenys un punt.

Sortida

Cal escriure el nombre de vegades que ‘a’ apareix a la seqüència abans del primer punt.

Observació

La solució esperada de l’exercici ‍ també és una solució correcta per a aquest exercici.
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
