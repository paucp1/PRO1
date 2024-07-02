#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi una lletra i que l’escrigui en minúscula si era majúscula, o l’escrigui en majúscula si era minúscula.

Entrada

L’entrada consisteix en una lletra.

Sortida

Cal escriure una línia amb la lletra en minúscula si era majúscula, o en majúscula si era minúscula.
*/

int main () {
    char x;
    cin >> x;
    
    if (x >= 'A' and x <= 'Z') {
        x = x + 'a' - 'A';
        cout << x << endl;
    }
    
    else {
        x = x + 'A' - 'a';
        cout << x << endl;
    }
}
