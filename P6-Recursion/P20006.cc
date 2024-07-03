/*
Feu un programa que llegeixi una expressió prefixada, i que escrigui el resultat d’avaluar-la. Els tres operadors possibles són suma, resta i multiplicació. Els operands són naturals entre 0 i 9 (inclosos).

Entrada

L’entrada té una expressió prefixada. Això vol dir que sempre apareix l’operador abans que els seus operands. Com exemples, l’expressió 4 + 3 vindria donada així:

+ 4 3
L’expressió 8 * (4 + 3) vindria donada així:

* 8 + 4 3
L’expressió (2 − 8) * (4 + 3) vindria donada així:

* - 2 8 + 4 3
Sortida

Cal escriure un enter en una línia: el resultat d’avaluar l’expressió.

Pista

Fixeu-vos que una expressió o bé és un dígit, o bé és un operador, seguit d’una expressió, seguit d’una altra expressió. Inspireu-vos en aquest fet per escriure un senzill programa recursiu.
*/

#include <iostream>
using namespace std;

int expresion () {
    char c;
    cin >> c;
    if (c >= '0' and c <= '9') return c - '0';
    else {
        int a = expresion ();
        int b = expresion ();
        if ( c == '+') return (a+b);
        else if ( c == '-') return (a-b);
        else return (a*b);
    }
}

int main () {
    cout << expresion() << endl;
}
