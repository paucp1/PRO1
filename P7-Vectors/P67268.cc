/*
Feu un programa que llegeixi seqüències d’enters, i que escrigui cadascuna invertint l’ordre dels seus elements.

Entrada

L’entrada consisteix en diverses seqüències. Cada seqüència consisteix en un natural n, seguit de n enters.

Sortida

Escriviu cada seqüència en una línia, en ordre invers.
*/

#include <iostream>
#include <vector>
using namespace std;

void invertir (vector<int>& v) {
    int x = v.size();
    for (int i = 0; i < x/2; ++i) {
        int aux = v[i];
        v [i] = v[x - 1 - i];
        v[x - 1 - i] = aux;
    }
    for (int i = 0; i < x; ++i) {
        cout << v[i];
        if (i != x - 1) cout << " ";
    }
    cout << endl;
}
    
int main () {
    int n;
    while (cin >> n) {
        vector <int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        invertir (v);
    }
}
