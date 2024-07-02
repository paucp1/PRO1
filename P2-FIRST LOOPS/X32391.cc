#include <iostream>
using namespace std;

/*
Teniu n euros estalviats. Addicionalment, durant les properes t setmanes us donaran, cada dilluns, una assignació setmanal de a1, a2, ..., at euros, respectivament. Cada setmana, però, teniu un seguit de despeses fixes que ascendeixen exactament a d euros.


Escriviu un programa que compti quantes setmanes acaben amb un saldo estrictament positiu.

Entrada

L’entrada consisteix en tres naturals d ≥ 0, n ≥ 0 i t>0, que representen les despeses fixes setmanals, els estalvis inicials, i el nombre de setmanes amb assignació, respectivament.


A continuació s’hi troben les quantitats corresponents a les t diferents assignacions setmanals a1, ..., at. Tota assignació és un natural ai ≥ 0.

Sortida

La sortida és un número natural que indica quantes de les t setmanes s’ha tingut saldo estrictament positiu després de pagar les despeses de la setmana.


Feu servir el format especificat als exemples. El vostre codi ha de seguir les normes d’estil i contenir els comentaris que considereu oportuns.
*/

int main () {
    int d, n, t;
    cin >> d >> n >> t;
    int suma = 0;
    
    for (int i = 1; i <= t; ++i) {
        int s;
        cin >> s;
        n = n + s - d;
        if (n > 0) suma = suma + 1;
    }
    cout << suma << endl;
}
