/*
Feu una funció que digui si un natural n és capicua o no.

Interfície

C++	
    bool es_capicua(int n);
C	
    int es_capicua(int n);
Java	
    public static boolean esCapicua(int n);
Python	
    es_capicua(n)  # returns bool
 	
    es_capicua(n: int) -> bool
Precondició

n és un natural.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
using namespace std;

bool es_capicua (int n) {
    int n1 = n;
    int n0 = 0;
    int num = 0;
    
    while (n != 0) {
        num = n%10;
        n = n/10;
        n0 = num + (n0*10);
    }
    if (n1 == n0) return true;
    else return false;
}
