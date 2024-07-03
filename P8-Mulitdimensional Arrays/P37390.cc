/*
Feu una funció que, donades dues matrius quadrades a i b, calculi el seu producte.

Interfície

C++	
    typedef vector< vector<int> > Matriu;
    Matriu producte(const Matriu& a, const Matriu& b);
MyPy	
    Matriu: TypeAlias = list[list[int]]
    def producte(a: Matriu, b: Matriu) -> Matriu
Precondició

a i b són matrius quadrades n× n amb n ≥ 0.
*/

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte(const Matriu& a, const Matriu& b) {
    int f = a.size();
    int c = f;
    
    Matriu aux(f,vector<int>(c));
    
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            for (int k = 0; k < c; ++k) {
                aux[i][j] = aux[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    return aux;
}
