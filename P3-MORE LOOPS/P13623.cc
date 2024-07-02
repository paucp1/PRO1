#include <iostream>
using namespace std;

/*
Considereu un tauler d’escacs amb f files i c columnes, on a cada casella hi ha entre 0 i 9 monedes. Suposeu que la casella de dalt a l’esquerra és blanca. Per exemple, aquest és un tauler buit amb quatre files i cinc columnes:

showmover=false, label=false, maxfield=e4

Feu un programa que, donat un tauler, calculi el nombre total de monedes contingudes a les caselles blanques.

Entrada

L’entrada comença amb el nombre de files f i el nombre de columnes c. Segueixen f línies, cadascuna amb c caràcters entre ‘0’ i ‘9’.

Sortida

Cal escriure el nombre total de monedes a les caselles blanques del tauler.
*/

int main () {
    int f, c;
    cin >> f >> c;
    int suma = 0;
    char n;
    
    for (int i = 1; i <= f; ++ i) {
        if (i%2 != 0) {
            for (int j = 1; j <= c; ++j) {
                cin >> n;
                if (j%2 != 0) {
                    suma = suma + (n - '0');
                }
            }
        }
        
        if (i%2 == 0) {
            for (int j = 1; j <= c; ++j){
                cin >> n;
                if (j%2 == 0) {
                    suma = suma + (n - '0');
                }
            }
        }
    }
    cout << suma << endl;
}
