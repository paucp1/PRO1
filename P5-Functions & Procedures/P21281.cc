/*
Escriviu un procediment

    void factor(int n, int& f, int& q);
que deixi a f el factor primer més freqüent de n, i a q quantes vegades apareix. En cas d’empat, cal triar el factor més petit. Per exemple, si es crida amb n = 450 = 21 · 32 · 52, després de la crida f ha de valer 3 i q ha de valer 2.

Precondició

n ≥ 2

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
using namespace std;

void factor (int n, int& f, int& q) {
    int d = 2, x = q = 0;
    
    while (d*d <= n) {
        x = 0;
        while (n%d == 0) {
            ++x;
            n /= d;
            if (x > q) q = x, f = d;
        }
            ++d;
    }
            if (q == 0) f = n, q = 1;
}
