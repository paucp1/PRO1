#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi parells de nombres n i m amb n ≥ m, i que per a cadascun escrigui Hn − Hm.

Entrada

L’entrada consisteix en diversos parells de naturals n i m tals que n ≥ m.

Sortida

Per a cada parell, cal escriure Hn − Hm amb deu xifres decimals.
*/

int main () {
    cout.precision(10);
    cout.setf(ios::fixed);
    
    int n, m;
    
    while (cin >> n >> m) {
        double suma1 = 0;
        if (n == m) {
            cout << suma1 << endl;
        }
     
        else {
            for (int i = m + 1; i <= n; ++i) {
                suma1 = suma1 + (1.0/i);
            }
        
            cout << suma1 << endl;
        }
    }
}
