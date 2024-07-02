#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi diverses descripcions de rectangles i de cercles, i que per a cadascuna n’escrigui l’àrea corresponent.

Entrada

L’entrada comença amb un nombre n, seguit de n descripcions. Si és d’un rectangle, es té la paraula “rectangle” seguida de dos reals estrictament positius que n’indiquen la llargada i l’amplada. Si és d’un cercle, es té la paraula “cercle” seguida d’un real estrictament positiu que n’indica el radi.

Sortida

Per a cada descripció, escriviu-ne l’àrea amb 6 decimals.
*/

int main () {
    cout.precision(6);
    cout.setf(ios::fixed);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        string f;
        cin >> f;
        
        if (f == "rectangle") {
            double l, a;
            cin >> l >> a;
            cout << l*a << endl;
        }
        
        else {
            double r;
            cin >> r;
            double pi = 3.141592653589793238462;
            cout << pi*r*r << endl;
        }
    }
}
