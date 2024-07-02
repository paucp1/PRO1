#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi dos naturals a i b, amb b > 0, i que escrigui la divisió entera d i el residu r de a entre b.

Recordeu que, per definició, d i r han de ser els únics enters tals que 0 ≤ r < b i d · b + r = a.

Entrada

L’entrada conté a i b, amb b > 0.

Sortida

Escriviu una línia amb la divisió entera i el residu de a dividit per b, separats amb un espai.

Observació

Malgrat que les condicions sobre l’entrada d’aquest exercici impedeixen divisions per zero, proveu què li passa al vostre programa en aquest cas.
*/

int main () {
    int a, b;
    cin >> a >> b;
    
    cout << a/b << " " << a%b << endl;
}
