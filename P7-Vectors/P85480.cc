/*
Feu un programa que llegeixi seqüències de naturals, i que per a cadascuna indiqui si té dos elements tals que la seva suma és un nombre primer.

Entrada

L’entrada consisteix en diverses seqüències, cadascuna en una línia. Cada seqüència consisteix en un natural n, seguit de n naturals x1, …, xn.

Sortida

Per a cada seqüència d’entrada, escriviu “si” o “no” depenent de si és possible trobar dos elements xi i xj (amb i ≠ j) de manera que xi + xj sigui un nombre primer.

Observació

Usant vectors, és possible precalcular quins nombres són primers i quins no fins a un cert màxim. En aquest exercici no és possible perquè no es coneix cap màxim, i no és necessari per qüestions d’eficiència perquè tots els nombres són prou petits.
*/

#include <iostream>
#include <vector>
using namespace std;

bool es_primer (int x) {
    int d = 2;
    bool primer = true;
    if (x == 1 or x == 0) primer = false;
    
    while (primer and d*d <= x) {
        if (x%d != 0) primer = true;
        else primer = false;
        ++d;
    }
    if (primer) return true;
    else return false;
}

void llegir (vector<int>& v, int& n) {
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

bool trobat (vector<int>& v, int& n) {
    for (int i = n - 1; i >= 0; --i) {
        for (int j = i; j >= 0; --j) {
            if (j != i) {
                if (es_primer (v[i] + v[j])) return true;
            }
        }
    }
    return false;
}

int main () {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        llegir (v, n);
        if (trobat (v, n)) cout << "si" << endl;
        else cout << "no" << endl;
    }
}
