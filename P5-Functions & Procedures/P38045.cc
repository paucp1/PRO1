/*
Feu un programa que llegeixi una seqüència de naturals, i que escrigui el quadrat i l’arrel quadrada de cadascun.

Entrada

L’entrada consisteix en una seqüència de naturals.

Sortida

Per a cada nombre donat, cal escriure en una línia el seu quadrat, i la seva arrel quadrada amb sis decimals.

Observació

Useu el procediment que el vostre llenguatge de programació ja ofereixi per calcular arrels quadrades.
*/

#include <iostream>
#include <math.h>
using namespace std;

int quadrat (int x) {
    return x*x;
}

double arrel (int x) {
    return sqrt(x);
}

int main () {
    cout.precision(6);
    cout.setf(ios::fixed);
    double n;
    
    while (cin >> n) {
        cout << quadrat (n) << " " << arrel (n) << endl;
    }
}
