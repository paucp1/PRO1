/*
Feu una funció que, donades dues matrius a i b, calculi el seu producte.

Interfície

C++	
    typedef vector< vector<int> > Matriu;
    Matriu producte(const Matriu& a, const Matriu& b);
MyPy	
    Matriu: TypeAlias = list[list[int]]
    def producte(a: Matriu, b: Matriu) -> Matriu
Precondició a és una matriu p× q i b és una matriu q× r, amb p,q,r≥1.
*/

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu llegir_mat() {
    int f, c;
    cin >> f >> c;
    Matriu mat(f, vector<int>(c));
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> mat[i][j];
        }
    }
    return mat;
}

Matriu producte(const Matriu& a, const Matriu& b) {
    int p = a.size();
    int q = b.size();
    int r = b[0].size();
    Matriu suma(p, vector<int>(r,0));
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < r; ++j) {
            for (int k = 0; k < q; ++k) {
                suma[i][j] = suma[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    return suma;
}

int main () {
    Matriu a = llegir_mat();
    Matriu b = llegir_mat();
    Matriu result = producte(a, b);
}
