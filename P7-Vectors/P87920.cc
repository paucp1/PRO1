/*
Feu un programa que, donada una seqüència d’enters, indiqui si n’hi ha algun que sigui igual a la suma de tots els altres.

Entrada

L’entrada conté diversos casos. Cada cas consisteix en un nombre n≥1 seguit de n enters.

Sortida

Per a cada cas, digueu si té algun nombre igual a la suma dels altres.
*/

#include <iostream>
#include <vector>
using namespace std;

bool suma_demes (vector<int>& v, int sum, int x) {
    for (int i = 0; i < x; ++i) {
        if (sum - v[i] == v[i]) return true;
    }
    return false;
}

int main () {
    int x;
    while (cin >> x) {
        vector <int> v(x);
        int suma = 0;
        for (int i = 0; i < x; ++i) {
            cin >> v[i];
            suma = suma + v[i];
        }
        if (suma_demes (v, suma, x)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
