/*
Escriviu una funció recursiva que retorni el nombre de dígits de n.

Interfície

C++	
    int nombre_digits(int n);
C	
    int nombre_digits(int n);
Java	
    public static int nombreDigits(int n);
Python	
    nombre_digits(n)  # returns int
 	
    nombre_digits(n: int) -> int
Precondició

Es compleix n ≥ 0.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
using namespace std;

int nombre_digits (int n) {
    if (n <= 9) return 1;
    else return 1 + nombre_digits(n/10);
}

int main () {
    int x;
    cin >> x;
    cout << nombre_digits (x) << endl;
}
