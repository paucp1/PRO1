/*

Feu un programa que llegeixi una seqüència d’angles en graus, i que escrigui el seu sinus i el seu cosinus.

Entrada

L’entrada consisteix en una seqüència de nombres reals que representen angles en graus.

Sortida

Per a cada angle donat, cal escriure una línia amb el seu sinus i el seu cosinus. Escriviu tots els nombres amb 6 decimals.

Observació

Useu els procediments que el vostre llenguatge de programació ja ofereixi per calcular sinus i cosinus.
*/

#include <iostream>
#include <math.h>
using namespace std;

double sinus (double x) {
    return sin(x);
}

double cosinus (double x) {
    return cos(x);
}

int main () {
    cout.precision(6);
    cout.setf(ios::fixed);
    double n;
    
    while (cin >> n) {
        n = (2*M_PI*n)/360;
        cout << sinus (n) << " " << cosinus (n) << endl;
    }
}
