#include <iostream>
using namespace std;
/*
Feu un programa que llegeixi un nombre n i que escrigui la “taula de multiplicar” de n.

Entrada

L’entrada consisteix en un natural n entre 1 i 9.

Sortida Cal escriure la “taula de multiplicar” de n.
*/

int main () {
    int n;
    cin >> n;
    int x = 1;
    
    while (x <= 10) {
        cout << n << "*" << x << " = " << n*x << endl;
        x = x + 1;
    }
}
