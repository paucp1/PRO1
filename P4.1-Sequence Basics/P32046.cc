#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi una seqüència de naturals, i que compti i escrigui aquells que acabin amb les mateixes tres xifres que el primer nombre de la seqüència.

Entrada

L’entrada és una seqüència no buida de naturals més grans o iguals que 100.

Sortida

Cal escriure els nombres de l’entrada que acabin amb les mateixes tres xifres que el primer nombre de la seqüència, així com quants d’aquests nombres hi ha. Utilitzeu el format dels exemples.
*/

int main () {
    int n;
    int aux;
    int total = 0;
    cin >> n;
    
    cout << "nombres que acaben igual que " << n << ":" << endl;
    n = n%1000;
    
    while (cin >> aux) {
        if (aux%1000 == n) {
            cout << aux << endl;
            total = total + 1;
        }
    }
    
    cout << "total: " << total << endl;
}
