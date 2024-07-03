/*
L’Anna i en Bernat juguen al joc següent: Primer, cadascú s’inventa n nombres. Després, i de forma alternativa, l’Anna escriu el seu primer nombre, en Bernat escriu el seu primer nombre, l’Anna escriu el seu segon nombre, en Bernat escriu el seu segon nombre, i així consecutivament. Perd el primer que escrigui un nombre tal que el seu dígit central no coincideixi amb el del nombre anterior. (El primer nombre, sempre de l’Anna, pot tenir qualsevol dígit central.) Si algú escriu un nombre amb un nombre parell de dígits, perd immediatament. Si després d’escriure els 2n nombres no perd ningú, la partida acaba en empat.

Feu un programa que decideixi qui guanya una partida.

Entrada

L’entrada consisteix en un natural n≥ 1, seguit de 2n naturals a1, b1, a2, b2, …, an, bn: a1 és el primer nombre de l’Anna, b1 és el primer nombre d’en Bernat, a2 és el segon nombre de l’Anna, etcètera.

Sortida

Cal escriure ‘A’, ‘B’, o bé ‘=’, depenent de si guanya l’Anna, guanya en Bernat, o és empat.
*/

#include <iostream>
using namespace std;

int main () {
    int i = 0;
    int ant = 0;
    int act = 0;
    int n;
    cin >> n;
    bool guanyador = false;
    bool primer = true;
    
    
    while (not guanyador and i < 2*n) {
        int xifres = 1;
        int x;
        cin >> x;
        int aux = x;
        
        while (x > 9) {
            x = x/10;
            ++xifres;
        }
        
        if (xifres%2 == 0) guanyador = true;
        
        else {
            int j = 0;
            while (j < xifres/2) {
                aux = aux/10;
                ++j;
            }
            act = aux%10;
            if (primer) {
                ant = act;
                primer = false;
            }
                
            if (act != ant) guanyador = true;
        }
        ++i;
        ant = act;
    }
    
    if (guanyador) {
        if (i%2 == 1) cout << "B" << endl;
        else cout << "A" << endl;
    }
    else cout << "=" << endl;
}
