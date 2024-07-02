#include <iostream>
using namespace std;

/*
Donat un capital inicial c en euros, un interès anual i (expressat en %), un temps t en anys, i una indicació de si l’interès és simple o compost, calculeu en quants euros es transforma el capital inicial.

Entrada

L’entrada consisteix en dos nombres reals estrictament positius c i i, seguits d’un nombre enter estrictament positiu t, seguits de la paraula “simple” o la paraula “compost”.

Sortida

Escriviu el capital final amb 4 decimals.

Observació

Si programeu en C++, feu servir el tipus double, i poseu aquestes dues línies al principi del vostre main():

    cout.setf(ios::fixed);
    cout.precision(4);
*/

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
     
    double c, i;
    int t;
    string m;
    cin >> c >> i >> t >> m;
    double suma = c;
     
    if (m == "simple") {
        for (int x = 1; x <= t; ++x) {
            suma = suma + (i/100.0)*c;
        }
    }
    
    else {
        for (int x = 1; x <= t; ++x) {
            suma = suma + (i/100.0)*suma;
        }
    }
    
    cout << suma << endl;
}
