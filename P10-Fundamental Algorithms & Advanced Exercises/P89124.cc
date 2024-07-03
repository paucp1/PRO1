/*
Donats diversos naturals, digueu quins són primers i quins no.

Entrada

L’entrada consisteix en (possiblement, molts) naturals n ≤ 106.

Sortida

Per a cada n, digueu si és primer o no.

Observació

Utilitzeu el Garbell d’Eratòstenes.
*/

#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1000000;

vector<bool> garbell(int n) {
    vector<bool> aux(n+1, true);
    for (int i = 2; i <= n; ++i) {
        for (int j = 2*i; j <= n; j += i) {
            aux[j] = false;
        }       
    }
    return aux;
}


int main() {
    int n;
    vector<bool> auxiliar;
    auxiliar = garbell(MAX);
    while (cin >> n) {
        if (n == 0 || n == 1) cout << n << " no es primer" << endl;
        else {
            if (auxiliar[n]) cout << n << " es primer" << endl;
            else cout << n << " no es primer" << endl;
        }
    }
}
