#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi un enter que representa una temperatura en graus Celsius, i que digui si fa calor, si fa fred, o si s’està bé. Suposeu que fa calor si la temperatura és més alta que 30 graus, que fa fred si és més baixa que 10 graus, i que s’està bé en altre cas. A més, cal avisar si amb temperatura donada l’aigua bulliria, o si es gelaria. Suposeu que l’aigua bull amb 100 o més graus, i que es gela amb 0 o menys graus.

Entrada

L’entrada consisteix en un enter.

Sortida

Cal escriure una línia dient si fa calor, si fa fred, o si s’està bé. Adicionalment, potser cal escriure una altra línia si l’aigua bulliria o si es gelaria.
*/

int main () {
    int x;
    cin >> x;
    
    if (x <= 30 and x >= 10) {
        cout << "it's ok" << endl;
    }
    
    else if (x > 30) {
        cout << "it's hot" << endl;
    }
    
    else {
        cout << "it's cold" << endl;
    }
    
    if (x >= 100) {
        cout << "water would boil" << endl;
    }
    
    else if (x <= 0) {
        cout << "water would freeze" << endl;
    }
}
