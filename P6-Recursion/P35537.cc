/*
En aquest exercici, direm que un natural és creixent si cada dígit és més petit o igual que el que està a la seva dreta (si aquest existeix).

Feu una funció recursiva que indiqui si un natural n és creixent o no.

Interfície

C++	
    bool es_creixent(int n);
C	
    int es_creixent(int n);
Java	
    public static boolean esCreixent(int n);
Python	
    es_creixent(n)  # returns bool
 	
    es_creixent(n: int) -> bool
Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
using namespace std;

bool es_creixent (int n) {
    if (n <= 9) return true;
    else return n%10 >= (n/10)%10 and es_creixent (n/10);
}

int main () {
    int x;
    cin >> x;
    cout << es_creixent (x) << endl;
}
