/*
Feu un programa que, donada una seqüència de línies amb paraules, digui quina és l’última línia que té les paraules ordenades de petita a gran (en ordre lexicogràfic).

Entrada

L’entrada consisteix en una seqüència de línies amb paraules. Cada línia comença amb un nombre n, seguit de n paraules formades exclusivament amb lletres minúscules.

Sortida

Cal escriure l’índex de l’última línia amb les paraules ordenades creixentment (no cal que de manera estricta). Si no hi ha cap línia que ho compleixi, cal indicar-ho. Seguiu el format dels exemples.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    bool trobat = false;
    int line = 0;
    int line_ordenada = 0;
    
    while (cin >> n) {
        string act;
        string ant = "A";
        bool ordenat = true;
        ++line;
        
        for (int i = 0; i < n; ++i) {
            cin >> act;
            if (act < ant) ordenat = false;
            ant = act;
        }
        
        if (ordenat) {
            line_ordenada = line;
            trobat = true;
        }
    }
    
    if (trobat) cout << "L'ultima linia ordenada creixentment es la " << line_ordenada << "." << endl;
    else cout << "No hi ha cap linia ordenada creixentment." << endl;
}
