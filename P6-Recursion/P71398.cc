/*
Escriviu un procediment recursiu

    void digit_maxim_i_minim(int n, int& maxim, int& minim);
que deixi en el paràmetre de sortida maxim el dígit més gran de n, i deixi en el paràmetre de sortida minim el dígit més petit de n.

Per exemple, si n = 1704, llavors cal que maxim valgui 7 i minim valgui 0.

Precondició

Es compleix n ≥ 0.

Observació

No es valorarà cap solució que no sigui recursiva.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
using namespace std;

void digit_maxim_i_minim (int n, int& maxim, int& minim) {
    if (n < 10) {
        maxim = n;
        minim = n;
    }
    else {
        digit_maxim_i_minim (n/10, maxim, minim);
        if (n%10 > maxim) maxim = n%10;
        if (n%10 < minim) minim = n%10;
}
}

int main () {
    int x, max, min;
    cin >> x;
    max = 0;
    min = 9;
    digit_maxim_i_minim (x, max, min);
    cout << max << " " << min << endl;
}
