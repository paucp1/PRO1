#include <iostream>
using namespace std;

/*
Feu un programa que indiqui si un any és de traspàs o no.

Un any de traspàs té 366 dies. Després de la reforma gregoriana, els anys de traspàs són els múltiples de quatre que no acaben en dos zeros, i també els acabats en dos zeros tals que el nombre que queda després de treure els dos zeros finals és divisible per quatre. Així, 1800 i 1900, tot i ser múltiples de quatre, no foren de traspàs; en canvi, 2000 ho va ser.

Entrada

L’entrada consisteix en un natural entre 1800 i 9999.

Sortida

Si l’any és de traspàs, cal escriure “YES”, altrament cal escriure “NO”.
*/

int main () {
    int n;
    cin >> n;
    
    if (((n%4 == 0) and (n%100 != 0)) or ((n%100 == 0) and ((n/100)%4 == 0))) {
        cout << "YES" << endl;
    }
    
    else {
        cout << "NO" << endl;
    }
}
