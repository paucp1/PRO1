/*
Feu un programa que llegeixi una seqüència de nombres primers i, per a cadascun, escrigui el següent nombre primer.

Entrada

L’entrada són tot nombres naturals, i consisteix en una seqüència de nombres primers acabada en un nombre no primer.

Sortida

Per a cada primer donat, escriviu en una línia el següent primer.
*/

#include <iostream>
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
    
int seg_primer (int n) {
    int s = n + 1;
    while (not es_primer (s)) {
        ++s;
    }
    return s;
}
    
int main () {
    int nombre;

    while (cin >> nombre and es_primer (nombre)) {
        cout << seg_primer (nombre) << endl;
    }
}
