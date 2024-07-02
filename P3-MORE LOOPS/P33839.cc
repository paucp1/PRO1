#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi diversos nombres i que, per a cadascun, n’escrigui la suma dels dígits.

Entrada

L’entrada consisteix en una seqüència de naturals.

Sortida

Per a cada nombre, escriviu la suma dels seus digits seguint el format de l’exemple.
*/

int main () {
    int n;
        
    while (cin >> n) {
        int suma = 0;
        int aux = n;
        cout << "La suma dels digits de " << n << " es ";
        
        if (aux < 10) {
            cout << n << "." << endl;
        }
    
        while (aux/10 > 0) {
            suma = suma + aux%10;
            aux = aux/10;
            if (aux < 10) {
                suma = suma + aux;
            }
        }

        if (n >= 10) {
            cout << suma << "." << endl;
        }
        
    }
}
