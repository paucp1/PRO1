#include <iostream>
using namespace std;

/*
El agua (A) vence a la piedra (P) que a su vez vence al viento (V) que vence al agua. Di quien gana el enfrentamiento, o si se produce un empate.

Entrada

Dos letras (A, P o V) separados por un espacio.

Salida

Escribe una línea con el número 1 si vence el primero, el número 2 si vence el segundo, o un guión (‘-’) si se produce un empate.
*/

int main () {
    char x, y;
    cin >> x >> y;
    
    if (x == y) {
        cout << "-" << endl;
    }
    
    else if ((x == 'A' and y == 'P') or (x == 'P' and y == 'V') or (x == 'V' and y == 'A')) {
        cout << "1" << endl;
    }
    
    else cout << "2" << endl;
}
