/*
Feu una funció que, donats quatre enters a, b, c i d, en retorni el màxim.

Interfície

C++,C	
    int max4(int a, int b, int c, int d);
Java	
    public static int max4(int a, int b, int c, int d);
Python	
    max4(a, b, c, d)  # returns int
 	
    max4(a: int, b: int, c: int, d: int) -> int
Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.

Pista

Usar la funció max2(a, b) de l’exercici ‍ podria ser útil.
*/

#include <iostream>
using namespace std;

int max2(int a, int b) {
    if (a < b) return b;
    else return a;
}

int max4(int a, int b, int c, int d) {
    int max = 0;
    max = max2(a, b);
    max = max2(max, c);
    max = max2(max, d);
    return max;
}
