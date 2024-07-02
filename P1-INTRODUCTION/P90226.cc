#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi dues paraules i que n’indiqui l’ordre lexicogràfic.

Entrada

L’entrada consisteix en dues paraules amb lletres minúscules a i b.

Sortida

Escriviu una línia indicant si a < b, a > b o a = b, seguint exactament el format dels exemples.

Observació

Si useu un llenguatge de programació modern, aquest exercici hauria de ser trivial.
*/

int main () {
    string a, b;
    cin >> a >> b;
    
    if (a > b) {
        cout << a << " > " << b << endl;
    }
    
    else if (a < b) {
        cout << a << " < " << b << endl;
    }
    
    else cout << a << " = " << b << endl;
}
