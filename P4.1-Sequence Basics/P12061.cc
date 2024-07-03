#include <iostream>
using namespace std;

/*
Feu un programa que, donada una seqüència de paraules, escrigui quantes paraules hi ha entre la paraula “principi” i la paraula “final”. Si falta la paraula “principi”, o falta la paraula “final”, o ambdues, o si apareixen en ordre invers, cal indicar-ho.

Entrada

L’entrada consisteix en diverses paraules. Tant la paraula “principi” com la paraula “final” hi apareixen, com a molt, una vegada.

Sortida

Cal escriure el nombre de paraules entre la paraula “principi” i la paraula “final”, si aquestes apareixen en aquest ordre. Altrament, cal escriure “sequencia incorrecta”.
*/

int main () {
    bool principi = false;
    bool final = false;
    int num = 0;
    string p;
    
    while (cin >> p and not final) {
        
        if (p == "final" and not principi) {
            final = true;
        }
        
        if (p == "final" and principi) {
            final = true;
        }
        
        if (principi and not final) {
            ++num;
        }
        
        if (p == "principi") {
            principi = true;
        }
    }
    if (principi and final) cout << num << endl;
    else cout << "sequencia incorrecta" << endl;

}
