/*
Implementeu una funció

     int sum_min_max(int x, int y, int z);
que torni la la suma dels valors mínim i màxim del seus paràmetres.

Entrada

L’entrada consisteix en tres enters.

Precondició

Es compleix 0 < x, y, z < 109.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
using namespace std;

int sum_min_max(int x, int y, int z) {
    int min = 0;
    int max = 0;
    if (x < y) {
        if (x < z) min = x;
        else min = z;
        if (y < z) max = z;
        else max = y;
    }
    else if (y <= x) {
        if (y < z) min = y;
        else min = z;
        if (x < z) max = z;
        else max = x;
    }
    
    return min + max;
}
