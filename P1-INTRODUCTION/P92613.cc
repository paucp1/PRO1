#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi un real x≥0 i que escrigui ⌊ x ⌋ (la part entera inferior de x), ⌈ x ⌉ (la part entera superior de x), i l’arrodoniment de x.

Entrada

L’entrada consisteix en un real x ≥ 0.

Sortida

Escriviu la part entera inferior de x, la part entera superior de x, i l’enter més proper a x (⌈ x ⌉ ‍en cas d’empat).
*/

int main () {
    double x;
    cin >> x;
    int infe = x/1;
    int super = (x/1) + 1;
    
    if ((x - infe >= 0.5)) {
        cout << infe << " " << super << " " << super << endl;
    }
    
    else if (x - infe == 0) {
        cout << infe << " " << infe << " " << infe << endl;
    }
    
    else {
        cout << infe << " " << super << " " << infe << endl;
    }
}
