#include <iostream>
using namespace std;

/*
Un natural es diu txatxi si la suma dels seus dígits en posicions senars (començant a comptar per la dreta) és parell. Per exemple, 2 i 679031 són txatxis, però 357199 i 607 no ho són.

Feu un programa que digui si un número donat és txatxi o no.

Entrada

L’entrada és un natural n.

Sortida

Escriviu en una línia si n és txatxi o no, segons el format dels exemples.
*/

int main () {
    int n;
    cin >> n;
    cout << n;
    int suma = 0;
     
    while (n > 0) {
        suma = suma + (n%10);
        n = n/100;
    }
    
    if (suma%2 != 0) {
        cout << " NO";
    }
    
    cout << " ES TXATXI" << endl;
}
