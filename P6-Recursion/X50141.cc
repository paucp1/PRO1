/*
En aquest problema, donat qualsevol nombre natural x amb n dígits x1 … xn, direm que y = y1 … yn és el resultat d’engreixar x si, per a tot i entre 1 i n, yi = max{x1, …, xi}. Per exemple, si engreixem 7 obtenim 7, si engreixem 32064781 obtenim 33366788, i si engreixem 9000000 obtenim 9999999.

Escriviu una funció

     int engreixa(int x);
que retorni el resultat d’engreixar x.

No podeu fer servir vectors al vostre codi. Us suggerim que penseu una implementació recursiva. Si us cal, podeu implementar i usar procediments auxiliars.

Precondició

Es compleix 0 < x < 109.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
using namespace std;

int engreixa (int x) {
    if (x < 10) return x;
    int e = engreixa (x/10);
    int ue = e%10;
    int d = x%10;
    int m = max(ue,d);
    return e*10 + m;
}

int main () {
    int n;
    cin >> n;
    cout << engreixa (n) << endl;
}
