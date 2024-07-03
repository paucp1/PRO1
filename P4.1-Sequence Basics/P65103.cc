#include <iostream>
using namespace std;

/*
Feu un programa que, donat un enter i i una seqüència de naturals x1, …, xn, escrigui xi.

Entrada

L’entrada comença amb un enter i, seguit de la seqüència x1, …, xn.

Sortida

En cas que la posició i és correcta, cal escriure el contingut de i segons es mostra als exemples. Altrament, cal escriure “Posicio incorrecta.”.
*/

int main () {
    int n, x;
    cin >> n;
    bool trobat = false;
    int pos = 0;
    
   while (not trobat and cin >> x) {
       pos = pos + 1;
       if (pos == n) {
            cout << "A la posicio " << n << " hi ha un " << x << "." << endl;
            trobat = true;
       }
   }
   
   if (not trobat) cout << "Posicio incorrecta." << endl;
}
