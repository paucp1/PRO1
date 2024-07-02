#include <iostream>
using namespace std;

/*
Feu un programa que, donats dos intervals, indiqui si un es troba dins de l’altre.

Entrada

L’entrada consisteix en quatre enters a1, b1, a2, b2 que representen els intervals [a1,b1] i [a2,b2]. Assumiu a1≤ b1 i a2≤ b2.

Sortida

Cal escriure ‘=’ si els intervals són iguals, ‘1’ si el primer es troba dins del segon (però no són iguals), ‘2’ si el segon es troba dins del primer (però no són iguals), o bé ‘?’ altrament.
*/

int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if ((a > c) and (b < d)) {
        cout << "1" << endl;
    }
    
    else if (((a > c) and (b == d)) or ((a == c) and (b < d))) {
        cout << "1" << endl;
    }
    
    else if ((c > a) and (d < b)) {
        cout << "2" << endl;
    }
    
    else if (((c > a) and (b == d)) or ((a == c) and (d < b))) {
        cout << "2" << endl;
    }
    
    else if ((a == c) and (b == d)) {
        cout << "=" << endl;
    }
    
    else cout << "?" << endl;
}
