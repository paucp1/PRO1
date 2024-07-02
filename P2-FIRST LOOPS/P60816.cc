#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi un nombre i que escrigui la seva representació hexadecimal del revés. Seguiu la convenció d’usar les lletres de la ‘A’ fins a la ‘F’ per representar els valors del 10 al 15.

Entrada

L’entrada consisteix en un natural.

Sortida

Escriviu, del revés, la representació hexadecimal del número, amb tants zeros a l’esquerra com calguin.
*/

int main () {
    int n;
    cin >> n;
    
    if (n < 16) {
        if (n < 10) cout << n;
        else if (n == 10) cout << "A";
        else if (n == 11) cout << "B";
        else if (n == 12) cout << "C";
        else if (n == 13) cout << "D";
        else if (n == 14) cout << "E";
        else if (n == 15) cout << "F";
    }
    
    while (n/16 >= 1) {
        if (n%16 < 10) cout << n%16;
        else if (n%16 == 10) cout << "A";
        else if (n%16 == 11) cout << "B";
        else if (n%16 == 12) cout << "C";
        else if (n%16 == 13) cout << "D";
        else if (n%16 == 14) cout << "E";
        else if (n%16 == 15) cout << "F";
        
        n = n/16;
        
        if (n < 10) cout << n;
        else if (n == 10) cout << "A";
        else if (n == 11) cout << "B";
        else if (n == 12) cout << "C";
        else if (n == 13) cout << "D";
        else if (n == 14) cout << "E";
        else if (n == 15) cout << "F";
    }
    cout << endl;
}
