#include <iostream>
using namespace std;

/*
Feu un programa que, donats dos intervals, indiqui si un es troba dins de l’altre, i que calculi l’interval corresponent a la seva intersecció o indiqui que aquesta és buida.

Entrada

L’entrada consisteix en quatre enters a1, b1, a2, b2 que representen els intervals [a1,b1] i [a2,b2]. Assumiu a1≤ b1 i a2≤ b2.

Sortida

Cal escriure ‘=’ si els intervals són iguals, ‘1’ si el primer es troba dins del segon (però no són iguals), ‘2’ si el segon es troba dins del primer (però no són iguals), o bé ‘?’ altrament. També, cal escriure “[]” si els intervals no tenen intersecció, o bé “[x,y]” si aquesta és la seva intersecció no buida.
*/

int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if ((a == c) and (b == d)) {
        cout << "= , [" << a << "," << b << "]" << endl;
    }
    
    else if ((a >= c and b < d) or (a > c and b <= d)) {
        cout << "1 , [" << a << "," << b << "]" << endl;
    }
    
    else if ((c >= a and d < b) or (c > a and d <= b)) {
        cout << "2 , [" << c << "," << d << "]" << endl;
    }
    
    else if (b < c or a > d) {
        cout << "? , []" << endl;
    }
    
    else if (a < c and b < d) {
        cout << "? , [" << c << "," << b << "]" << endl;
    }
    
    else if (a > c and b > d) {
        cout << "? , [" << a << "," << d << "]" << endl;
    }
}
