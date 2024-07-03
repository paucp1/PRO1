#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi seqüències no buides de nombres reals i, per a cadascuna, n’escrigui el mínim, el màxim i la mitjana.

Entrada

L’entrada consisteix en un natural n, seguit de n seqüències. Cada seqüència comença el nombre d’elements m > 0, seguit de m nombres reals.

Sortida

Per a cada seqüència, escriviu en una línia i amb quatre xifres decimals el seu mínim, el seu màxim i la seva mitjana.
*/

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int m;
        double suma = 0; 
        double min, max;
        cin >> m;
        for (int j = 0; j < m; ++j) {
            double e;
            cin >> e;
            if (j == 0) {
                min = e;
                max = e;
            }
            if (e > max) max = e;
            if (e < min) min = e;
            suma = suma + e;
        }
        cout << min << " " << max << " " << suma/m << endl;
    }
}
