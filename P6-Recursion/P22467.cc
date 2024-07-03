/*
Donat un natural n, sigui s(n) la suma dels dígits de n. En aquest exercici, direm que n és un primer perfecte si la seqüència infinita formada per n, s(n), s(s(n)), …només conté nombres primers. Per exemple, 977 és un primer perfecte, perquè tant 977, com 9 + 7 + 7 = 23, com 2 + 3 = 5, com 5, …, són tots nombres primers.

Feu una funció recursiva que indiqui si un natural n és un primer perfecte o no.

Interfície

C++	
    bool es_primer_perfecte(int n);
C	
    int es_primer_perfecte(int n);
Java	
    public static boolean esPrimerPerfecte(int n);
Python	
    es_primer_perfecte(n)  # returns bool
 	
    es_primer_perfecte(n: int) -> bool
Precondició

Es compleix n ≥ 0.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

   
#include <iostream>
using namespace std;

bool es_primer (int x) {
    int d = 2;
    bool primer = true;
    if (x == 1 or x == 0) primer = false;
    
    while (primer and d*d <= x) {
        if (x%d != 0) primer = true;
        else primer = false;
        ++d;
    }
    if (primer) return true;
    else return false;
}

int suma_digits (int x) {
    if (x <= 9) return x;
    else return x%10 + suma_digits (x/10);
}

bool es_primer_perfecte (int n) {
    if (n <= 9) return es_primer (n);
    else return es_primer (n) and es_primer (suma_digits (n)) and es_primer_perfecte (suma_digits (n));
}

int main () {
    int x;
    cin >> x;
    cout << es_primer_perfecte (x) << endl;
}
