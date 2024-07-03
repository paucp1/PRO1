/*
Feu un programa que, donada una seqüència d’enters estrictament positius acabada en 0, digui si conté algun pic més gran que 3143 (l’alçada de la Pica d’Estats). Un pic és un enter de la seqüència que té antecessor i successor i és estrictament més gran que ells.

Entrada

L’entrada és una seqüència d’enters estrictament positius acabada en 0. Com a mínim, sempre hi ha tres enters (sense comptar el 0 final).

Sortida

La sortida ha de ser “SI” si hi ha algun pic més gran que 3143, i “NO” altrament.
*/

#include <iostream>
using namespace std;

int main () {
    bool trobat = false;
    int esq, cen, dre;
    cin >> esq >> cen >> dre;
    while (not trobat and dre != 0) {
        if (cen > 3143 and esq < cen and dre < cen) trobat = true;
        esq = cen;
        cen = dre;
        cin >> dre;
    }
    if (trobat) cout << "SI" << endl;
    else cout << "NO" << endl;
}
  
