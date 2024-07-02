#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi un nombre n i que escrigui el nombre harmònic n-èsim, definit com Hn = 1/1 + 1/2 + ⋯ + 1/n.

Entrada

L’entrada consisteix en un natural n.

Sortida

Cal escriure Hn amb quatre xifres decimals.
*/

int main () {
    cout.precision(4);
    cout.setf(ios::fixed);
    
    int n;
    cin >> n;
    double suma = 0;
    
    for (int i = 1; i <= n; ++i) {
        suma = suma + (1.0/i);
    }
    
    cout << suma << endl;
}
