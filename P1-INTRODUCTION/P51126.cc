#include <iostream>
using namespace std;

/*
Feu un programa que, donats dos intervals, en calculi l’interval corresponent a la intersecció o indiqui que aquesta és buida.

Entrada

L’entrada consisteix en quatre enters a1, b1, a2, b2 que representen els intervals [a1,b1] i [a2,b2]. Assumiu a1≤ b1 i a2≤ b2.

Sortida

Cal escriure “[]” si els intervals no tenen intersecció, o bé “[x,y]” si aquesta és la seva intersecció no buida.
*/

int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if ((a <= c) and (b >= c)) {
        if (b <= d) {
            cout << "[" << c << "," << b << "]" << endl;
        }
        
        else {
            cout << "[" << c << "," << d << "]" << endl;
        }
    }
    
    else if ((c <= a) and (d >= a)) {
        if (b <= d) {
            cout << "[" << a << "," << b << "]" << endl;
        }
        
        else {
            cout << "[" << a << "," << d << "]" << endl;
        }
    }
    
    else cout << "[]" << endl;
}
