#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi un natural i escrigui la suma de les seves tres darreres xifres.

Entrada

L’entrada és un natural n≥100.

Sortida

La sortida és una línia amb la suma de les tres darreres xifres de n.
*/

int main () {
    int x;
    cin >> x;
    int suma = 0;
    
    for (int i = 0; i <= 2; ++i) {
        suma = suma + (x%10);
        x = x/10;
    }
    
    cout << suma << endl;
}
