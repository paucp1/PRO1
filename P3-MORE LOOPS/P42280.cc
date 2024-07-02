#include <iostream>
using namespace std;

/*
Considereu un tauler d’escacs amb f files i c columnes, on a cada casella hi ha entre 0 i 9 monedes. Feu un programa que, donat un tauler, calculi el nombre total de monedes que conté.

Entrada

L’entrada comença amb el nombre de files f i el nombre de columnes c. Segueixen f línies, cadascuna amb c caràcters entre ‘0’ i ‘9’.

Sortida

Cal escriure el nombre total de monedes del tauler.
*/

int main () {
    int f, c;
    cin >> f >> c;
    int suma = 0;
    char n;
    
    for (int i = 0; i < f; ++i) {
         for (int j = 0; j < c; ++j) {
            cin >> n;
            suma = suma + (n - '0');
        }
    }
    cout << suma << endl;
}
