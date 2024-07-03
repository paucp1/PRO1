/*
Feu un programa que llegeixi una seqüència no buida d’enters, i que escrigui quants són iguals a l’últim.

Entrada

L’entrada consisteix en un natural n > 0, seguit de n enters.

Sortida

Escriviu el nombre d’elements que són iguals a l’últim, aquest exclòs.
*/

#include <iostream>
#include <vector>
using namespace std;

int igual (const vector<int>& v) {
    int x = v.size();
    int ult = v[x - 1];
    int total = 0;
    for (int i = 0; i < x - 1; ++i) {
        if (v[i] == ult) ++total;
    }
    return total;
}
        
int main () {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << igual (v) << endl;
}
