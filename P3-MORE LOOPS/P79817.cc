#include <iostream>
using namespace std;

/*
Feu un programa que calculi potències.

Entrada

L’entrada consisteix en diversos parells d’enters a i b. Assumiu b ≥ 0.

Sortida

Per a cada parell a,b, cal escriure ab. Suposeu, com és habitual, que 00 = 1.
*/

int main () {
    int a, b;
    
    while (cin >> a >> b) {
        int suma = 1;
        for (int i = 0; i < b; ++i) {
            suma = suma*a;
        }
        cout << suma << endl;
    }
}
