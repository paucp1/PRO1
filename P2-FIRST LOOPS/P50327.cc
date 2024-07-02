#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi un nombre i que l’escrigui del revés.

Entrada

L’entrada consisteix en un natural.

Sortida

Escriviu el número del revés, amb tants zeros a l’esquerra com té a la dreta.
*/

int main () {
    int n;
    cin >> n;
    if (n == 0) cout << n;
    
    while (n > 0) {
        cout << n%10;
        n = n/10;
    }
    
    cout << endl;
}
