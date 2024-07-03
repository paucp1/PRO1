/*
Sigui p[0… n] un vector d’enters que conté els coeficients d’un polinomi de grau n≥0. Per exemple, el vector p=⟨3,2,5,−1⟩ representa p(x)=3+2x+5x2−x3, un polinomi de grau n=3.

Escriviu una funció

    int avalua(const vector<int>& p, int x);
que avaluiï el polinomi al punt x, és a dir, que retorni ∑i=0n p[i]xi.

Utilitzeu la Regla de Horner:

pnxn+pn−1xn−1+…+p0=((pnx+pn−1)x+…)x+p0.
Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
#include <vector>
using namespace std;

int avalua (const vector<int>& p, int x) {
    int eval = 0;
    int grau = p.size() - 1;
    
    for (int i = grau; i >= 0; --i) {
        eval = eval*x + p[i];
    }
    return eval;
}
