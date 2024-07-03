/*
Feu un programa que llegeixi una seqüència de naturals i que escrigui, per a cadascun, quantes vegades apareix.

Entrada

L’entrada consisteix en un natural n, seguit de n naturals entre 1000000000 i 1000001000 (ambdós inclosos).

Sortida

Per a cada nombre x que aparegui a la seqüència, escriviu quantes vegades hi apareix, seguint el format de l’exemple. La sortida ha d’estar ordenada creixentment per x.
*/

#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, a;
    cin >> n;
    vector<int> A(1001);
    for (int i = 0; i < n; ++i) {
        cin >> a;
        a = a - 1000000000;
        ++A[a];
    }
    
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] != 0) {
            cout << 1000000000+i << " : " << A[i] << endl;
        }
    }
}
