#include <iostream>
using namespace std;

/*
Feu un programa que escrigui rectangles n× m. Escriviu cada rectangle de forma independent, i ompliu-lo amb un 9, désprés un 8, …, després un 0, etcètera.

Entrada

L’entrada consisteix en diversos naturals.

Sortida

Per a cada parell (n,m), escriviu un rectangle de mida n × m omplint-lo amb 9,8,…0, 9, …. Separeu dos quadrats amb una línea en blanc.
*/

int main () {
    int n, m;
    bool first = true;
    
    while (cin >> n >> m) {
        if (not first) {
            cout << endl;
        }
        
        int x = 9;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << x;
                x = x - 1;
                if (x == -1) x = x + 10;
            }
            
            cout << endl;
        }
        
        first = false;
    }
}
