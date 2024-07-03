/*
Feu un programa que llegeixi seqüències de naturals, i que per a cadascuna escrigui quants parells de nombres consecutius té tals que el segon nombre del parell és més gran que el primer.

Entrada

L’entrada consisteix en un natural n, seguit de n seqüències de naturals, tots estrictament positius. Cada seqüència acaba en zero.

Sortida

Per a cada seqüència, escriviu en una línia el nombre de parells de nombres consecutius tals que el segon nombre del parell és més gran que el primer.
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int act;
        int total = 0;
        cin >> act;
        int ant = act;
        
        while (act != 0) {
            cin >> act;
            
            if (ant < act) {
                ++total;
            }
            
            ant = act;
        }
        cout << total << endl;
    }
}
