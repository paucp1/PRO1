/*
Usant la definició

    struct Racional {
        int num, den;
    };
feu una funció

    Racional racional(int n, int d);
que retorni un racional equivalent a n/d i “normalitzat” segons la convenció següent: si el numerador és 0, el denominador és 1; altrament, el numerador i el denominador no tenen cap factor comú, i el denominador és positiu.

Precondició

d ≠ 0.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat. Seguiu estrictament la definició dels tipus de l’enunciat.
*/

#include <iostream>
using namespace std;

struct Racional {
    int num, den;
};

int mcd (int n, int d) {
    int a = n;
    int b = d;
    while (b != 0) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
        

Racional racional(int n, int d) {
    int n_aux = n;
    int d_aux = d;
    if (n_aux != 0) {
        int div = mcd(n_aux, d_aux);
        n_aux = n_aux/div;
        d_aux = d_aux/div;
        if (d_aux < 0) {
            d_aux = d_aux*(-1);
            n_aux = n_aux*(-1);
        }
        Racional r;
        r.num = n_aux;
        r.den = d_aux;
        return r;
    }
    
    else {
        Racional r;
        r.num = 0;
        r.den = 1;
        return r;
    }
}
