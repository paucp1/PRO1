/*

Feu un programa que criptografiï missatges amb el “codi Cèsar”, utilitzat per Juli Cèsar per comunicar-se amb els seus generals. Donada una constant k, es canvia cada lletra del missatge original per la lletra que es troba alfabèticament k posicions a la seva dreta (sical, circularment). Per exemple, si k = 5, cal canviar ‘a’ per ‘f’, ‘b’ per ‘g’, …, ‘y’ per ‘d’, i ‘z’ per ‍‘e’.

Per resoldre aquest exercici, us pot ser útil usar una funció

    char codificat(char c, int k);
que retorni el caràcter corresponent a c quan la constant és k.

Entrada

L’entrada consisteix en diversos casos. Cada cas comença amb un natural k > 0, seguit d’un text compost només per lletres minúscules i caràcters separadors, però sense espais, i acabat en un punt.

Sortida

Per a cada cas, escriviu en una línia el text criptografiat, usant lletres majúscules. Canvieu cada ‘_’ per un espai en blanc, i deixeu els altres caràcters separadors tal qual.
*/

#include <iostream>
using namespace std;

char codificat (char c, int k) {
    return 'A' + (c - 'a' + k) % 26;
}

int main () {
    int n;
    
    while (cin >> n) {
        char l;
        cin >> l;
        while (l != '.') {
            if (l >= 'a' and l <= 'z') {
                cout << codificat (l, n);
            }
            else if (l == '_') cout << " ";
            else cout << l;
            cin >> l;
        }
        cout << endl;
    }
}
