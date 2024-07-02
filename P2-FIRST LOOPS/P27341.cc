#include <iostream>
using namespace std;

/*
Feu un programa que, per a cada parell d’enters a i b donats, calculi i escrigui la suma de tots els cubs entre a i b.

Entrada

L’entrada és una seqüència de parells d’enters a i b.

Sortida

Per a cada parell de l’entrada, cal escriure, en una línia i segons el format de l’exemple, el resultat de la suma a3 + (a + 1)3 + ⋯ + (b − 1)3 + b3.
*/

int main () {
    int a, b;
    
    while (cin >> a >> b) {
        cout << "suma dels cubs entre " << a << " i " << b << ": ";
        int suma = 0;
        
        while (a <= b) {
            suma = suma + a*a*a;
            a = a + 1;
        }
        
        cout << suma << endl;
    }
}
  
