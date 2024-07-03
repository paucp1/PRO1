/*
Feu un programa que llegeixi paraules, i que les escrigui en ordre invers, invertint també l’ordre dels caràcters de cadascuna.

Entrada

L’entrada consisteix en un natural n, seguit de n paraules.

Sortida

Escriviu les paraules en ordre invers, una per línia, i invertint els caràcters dins de cada paraula.
*/

#include <iostream>
#include <vector>
using namespace std;

void girar (vector<string>& v, int x) {
    for (int i = x - 1; i >= 0; --i) {
        for (int j = v[i].size() - 1; j >= 0; --j) {
            cout << v[i][j];
        }
        cout << endl;
    }
}

int main () {
    int n;
    cin >> n;
    vector <string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    girar (s, n);
}
