#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi un nombre i que escrigui la seva representació binària del revés.

Entrada

L’entrada consisteix en un natural.

Sortida

Escriviu, del revés, la representació binària del número, amb tants zeros a l’esquerra com calguin.
*/

int main () {
    int n;
    cin >> n;
    if (n < 2) {
        cout << n;
    }
            
    while (n >= 2) {
        cout << n%2;
        if (n == 2 or n == 3) {
            cout << n/2;
        }
        n = n/2;
    }
    cout << endl;
}
