/*
Feu un procediment que transposi una matriu quadrada m.

Interfície

C++	
    typedef vector< vector<int> > Matriu;
 	
    void transposa(Matriu& m);
Java	
    public static void transposa(int[][] m);
Python	
    transposa(m)  # returns None
MyPy	
    transposa(m: list[list[int]]) -> None
Precondició

m és una matriu quadrada n× n amb n≥0.
*/

#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

void llegir_mat (Matriu& m) {
    int f = m.size();
    int c = m[0].size();
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> m[i][j];
        }
    }
}

void transposa(Matriu& m) {
    int f = m.size();
    int c = f;
    Matriu aux(c, vector<int>(f));
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < f; ++j) {
            aux[i][j] = m[j][i];
        }
    }
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < f; ++j) {
            m[i][j] = aux[i][j];
        }
    }
}

int main () {
    int n;
    cin >> n;
    Matriu m(n,vector<int>(n));
    llegir_mat(m);
    transposa(m);
}
