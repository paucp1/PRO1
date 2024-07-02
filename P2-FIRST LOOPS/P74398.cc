#include <iostream>
using namespace std;

/*
El número 163 se representa como 10100011 en base 2, 20001 en base 3, 543 en base 8, 163 en base 10, y A3 en base 16. Dado un número, te pedimos que nos digas cuántas cifras son necesarias para representarlo en todas las bases de la 2 a la 16.

Entrada

Una entrada con un único número k, del 1 al 108.

Salida

Escribe 15 líneas de la forma “Base x: y cifras.”, donde x son los números del 2 al 16, y y es el número de cifras necesarias en base x para representar el número k. Escribe la salida exactamente igual como se te pide (espacios, punto final, etc.) o tu programa no será aceptado.
*/

int main () {
    int n;
    cin >> n;
    int suma = 0;
    int b = 2;
    int aux = n;
    
    while (n/b >= 1 and b <= 16) {
       if (aux%b < n) {
        suma = suma + 1;
        aux = aux/b;
       }
        
        if (aux < b) {
            suma = suma + 1;
            cout << "Base " << b << ": " << suma << " cifras." << endl;
            b = b + 1;
            suma = 0;
            aux = n;
        }
    }
    
    while (n/b == 0 and b <= 16) {
        cout << "Base " << b << ": " << "1 cifras." << endl;
        b = b + 1;
    }
}
