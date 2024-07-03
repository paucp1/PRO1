/*
Feu un programa que, donada una seqüència de línies amb paraules, digui quina és la primera línia que té les paraules ordenades de petita a gran (en ordre lexicogràfic).

Entrada

L’entrada consisteix en una seqüència de línies amb paraules. Cada línia comença amb un nombre n, seguit de n paraules formades exclusivament amb lletres minúscules.

Sortida

Cal escriure l’índex de la primera línia amb les paraules ordenades creixentment (no cal que de manera estricta). Si no hi ha cap línia que ho compleixi, cal indicar-ho. Seguiu el format dels exemples.
*/

#include <iostream>
using namespace std;

int main () {
    int line = 0;
    int n;
    bool trobat = false;
    
    while (not trobat and cin >> n) {
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
            trobat = true;
            cout << "La primera linia ordenada creixentment es la " << line << "." << endl;
        }
    }
    
    if (not trobat) cout << "No hi ha cap linia ordenada creixentment." << endl;
}
