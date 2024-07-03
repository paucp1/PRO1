/*
Donades dues seqüències s1 i s2 de naturals no negatius acabades ambdues en 0, feu un programa que calculi el màxim m dels elements de s1 i indiqui la posició de la seva darrera aparició dins de s1 i la seva primera aparició dins de s2.

En el vostre programa, heu d’implementar i fer servir el següent procediment:

void infoSequencia(int& max, int& lpos);
que llegeix una seqüència acabada en 0 i calcula els paràmetres max i lpos. En finalitzar l’execució del procediment, el paràmetre max tindrà el valor més gran que apareix a la seqüència i el paràmetre lpos ha d’indicar la última posició on apareix el valor màxim.

Entrada

L’entrada consisteix en dues seqüències s1 i s2 de naturals estrictament positius, ambdues acabades en 0. La seqüència s1 no és buida (és a dir, té com a mínim un element diferent de la marca de final), però la seqüència s2 pot ser-ho.

Sortida

La sortida està formada per tres informacions: L’element màxim de s1, la posició de la darrera aparició de m dins de s1, i la posició de la primera aparició de m dins de s2. Si m no apareix a s2, o bé s2 és buida (i, per tant, m tampoc hi apareix), s’ha d’indicar convenientment.


Seguiu el format especificat als exemples.
*/

#include <iostream>
using namespace std;

void infoSequencia (int& max, int& lpos) {
    if (lpos > max) max = lpos;
}

int main () {
    int n1, n0, c = 0, p1 = 0, max = 0, n2, p2 = 1;
    while (cin >> n1 and n1 != 0) {
        n0 = n1;
        infoSequencia(max, n0);
        c++;
        if (max == n0) p1 = c;
    }
    
    while (cin >> n2 and n2 != max and n2 != 0) p2++;
    cout  << max << ' ' << p1 << ' ';
    if (n2 == max) cout << p2 << endl;
    else cout << '-' << endl;
}
