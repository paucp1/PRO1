/*
Implementeu la funció

     bool c_frac(int n1, int d1, int n2, int d2);
que retorni cert si la fracció n1/d1 és estrictament menor que la fracció n2/d2.

Precondició

d1, d2 > 0.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
using namespace std;

bool c_frac (int n1, int d1, int n2, int d2) {
    bool comparacio = false;
    double d1_aux = d1;
    double d2_aux = d2;
    double f1 = n1/d1_aux;
    double f2 = n2/d2_aux;
    
    if (f1 < f2) {
        comparacio = true;
        return comparacio;
    }
    else return comparacio;
}
