#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi una base de numeració b i diversos nombres i que, per a cadascun, n’escrigui la suma en base 10 dels dígits de x en base b.

Entrada

L’entrada consisteix en el valor de b≥ 2 seguit d’una seqüència de naturals.

Sortida

Per a cada nombre, escriviu la suma (en base 10) dels seus digits en base b seguint el format dels exemples.
*/

int main () {
    int b, n;
    cin >> b;
    
    while (cin >> n) {
        int aux = n;
        int suma = 0;
        
        while (aux/b > 0) {
            suma = suma + aux%b;
            aux = aux/b;
            
            if (aux/b == 0) suma = suma + aux%b;
        }
        
        if (n < b) {
            cout << n << ": " << n << endl;
        }
        
        else if (n >= b) {
            cout << n << ": " << suma << endl;
        }
    }
}
