#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi una seqüència de nombres i que n’escrigui la mitjana.

Entrada

L’entrada consisteix en una seqüència no buida de nombres reals estrictament positius.

Sortida

Cal escriure la mitjana dels nombres amb dues xifres decimals.
*/

int main () {
    cout.precision(2);
    cout.setf(ios::fixed);
    
    double n;
    
    double suma = 0.0;
    int nombres = 0;
    
    while (cin >> n) {
        suma = suma + n;
        nombres = nombres + 1;
    }
    cout << suma/nombres << endl;
}
