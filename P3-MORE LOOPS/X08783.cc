#include <iostream>
using namespace std;

/*
Feu un programa que calculi el nombre de xifres en diverses bases.

Entrada

L’entrada consisteix en una seqüència de parells de naturals b≥ 2 i n≥ 1.

Sortida

Per a cada parell, escriviu el nobre de xifres de n en base b.
*/

int main () {
    int b, n;
    
    while (cin >> b >> n) {
        int xifres = 1;
        
        while (n/b != 0) {
            xifres = xifres + 1;
            n = n/b;
        }
        cout << xifres << endl;
    }
}
