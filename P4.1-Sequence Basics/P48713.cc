#include <iostream>
#include <cmath>
using namespace std;

/*
Feu un programa que llegeixi una seqüència de naturals i, per a cadascun, digui si és un nombre primer o no. Recordeu que un natural és primer si i només si és més gran que 1 i no té cap divisor positiu que no sigui 1 o ell mateix.

Entrada

L’entrada consisteix en un nombre n, seguit de n naturals.

Sortida

Per a cada natural donat, escriviu en una línia si és primer o no, seguint el format de l’exemple.

Pista

Per a cada nombre n, calen com a màxim uns √n  passos per saber si és primer o no.
*/

int main () {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        cout << x;
        bool primer = true;
        int passos = 0;
        int divisor = 2;
        
        while (primer and passos <= sqrt(x)) {
            if ((x%divisor == 0 and divisor != x) or x == 1) { 
                cout << " no es primer" << endl;
                primer = false;
            }
            passos = passos + 1;
            divisor = divisor + 1;
        }
        
        if (primer) cout << " es primer" << endl;
    }
}
