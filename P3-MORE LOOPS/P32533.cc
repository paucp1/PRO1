#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi un natural n i escrigui figures n× n com es mostra als exemples.

Entrada

L’entrada és un natural n ≥ 1.

Sortida

Cal escriure la figura corresponent.
*/

int main () {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        int j = 0;
        
        while (j < n - i) {
            cout << "+";
            j = j + 1;
        }
        
        while (j == n - i) {
            cout << "/";
            j = j + 1;
        }
        
        while (j > n - i and j < n) {
            cout << "*";
            j = j + 1;
        }
        
        cout << endl;
    }
}
