#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi un natural n, i que escrigui el resultat de la suma següent:

    12 + 22 + … + (n−1)2 + n2 .
Entrada

L’entrada consisteix en un natural n.

Sortida

Escriviu la suma dels n primers quadrats: ∑i=1n i2.

Observació

Com que el sumatori té una fórmula tancada, no caldria fer cap bucle per resoldre aquest exercici.
*/

int main () {
    int n;
    cin >> n;
    int x = 1;
    int suma = 0;
    
    while (x <= n) {
        suma = suma + x*x;
        x = x + 1;
    }
    
    cout << suma << endl;
}
