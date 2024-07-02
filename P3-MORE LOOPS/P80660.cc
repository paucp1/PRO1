#include <iostream>
using namespace std;

/*
Sigui n qualsevol natural estrictament positiu. Considereu el procés següent: Si n és parell, dividiu-lo per dos. Altrament, multipliqueu-lo per 3 i sumeu-li 1. Quan arribeu a 1, pareu. Per exemple, començant en 3, s’obté la seqüència

3, ‍ 10, ‍ 5, ‍ 16, ‍ 8, ‍ 4, ‍ 2, ‍ 1 .
Des de l’any 1937 es conjectura que aquest procés acaba per a qualsevol n inicial, encara que no ho ha sabut demostrar ningú. En aquest problema no us en demanarem una demostració, només que feu un programa que escrigui quants passos triga a arribar a 1 cada n donada.

Entrada

L’entrada consisteix en diversos naturals n ≥ 1.

Sortida

Per a cada n, escriviu quants passos es triga a arribar a 1. Suposeu que aquest nombre està ben definit, és a dir, que la conjectura de l’enunciat és certa.
*/

int main () {
    int n;
    
    while (cin >> n) {
        int passos = 0;
        while (n > 1) {
            passos = passos + 1;
            if (n%2 == 0) n = n/2;
            else n = 3*n + 1;
        }
        
        cout << passos << endl;
    }
}
