/*
Feu una funció que indiqui si s és un palíndrom o no. Recordeu que una paraula és un palíndrom si es llegeix igual d’esquerra a dreta que de dreta a esquerra. En aquest exercici, s pot ser bastant llarg; per aquest motiu es passa per refèrencia.

Per poder comprovar l’eficiència de la vostra solució comparant-la amb de la del Jutge, comenceu a comprovar s pels extrems.

Interfície

C++	
    bool es_palindrom(const string& s);
C	
    int es_palindrom(const char s[], int ssize);
Java	
    public static boolean esPalindrom(String s);
Python	
    es_palindrom(s)  # returns bool
 	
    es_palindrom(s: str) -> bool
Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
#include <vector>
using namespace std;

bool es_palindrom(const string& s) {
    int x = s.size();
    int i = 0;
    while (i < x/2) {
        if (s[i] != s[x - 1 -i]) return false;
        ++i;
    }
    return true;
}

int main () {
    string p;
    cin >> p;
    cout << es_palindrom(p) << endl;
}
