/*
Feu una funció que indiqui si un natural n és perfecte o no.

Un natural s’anomena perfecte quan és igual a la suma de tots els seus divisors llevat d’ell mateix. Per exemple, 28 és perfecte, perquè 28=1+2+4+7+14.

Interfície

C++	
    bool es_perfecte(int n);
C	
    int es_perfecte(int n);
Java	
    public static boolean esPerfecte(int n);
Python	
    es_perfecte(n)  # returns bool
 	
    es_perfecte(n: int) -> bool
Precondició

n és un natural.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
using namespace std;

bool es_perfecte (int n) {
    int suma = 1;
    for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0) suma += i + n / i;
    }
    if (n != 0 and n != 1) return (suma == n);
    else return false;
}
