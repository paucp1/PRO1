#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi cinc enters x,a,b,c,d i digui si x∈[a,b]∪[c,d].

Entrada

L’entrada són cinc enters x,a,b,c,d.

Sortida

La sortida és una línia amb el text “si” si x∈[a,b]∪[c,d] i el text “no” altrament.
*/

int main () {
    int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;
    
    if ((x >= a and x <= b) or (x >= c and x <= d)) {
        cout << "yes" << endl;
    }
    
    else {
        cout << "no" << endl;
    }
}
