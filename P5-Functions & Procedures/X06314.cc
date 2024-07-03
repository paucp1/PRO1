/*
En aquest problema, direm que dues seqüències de nombres són similars si tenen la mateixa suma i acaben en el mateix nombre. Feu un programa que calculi quantes de les seqüències donades són similars a la primera (aquesta inclosa).

En el vostre programa, heu d’implementar i fer servir el següent procediment:

void info_sequencia(int& suma, int& ultim);
que llegeix una seqüència de l’entrada i calcula als paràmetres suma i ultim, la suma dels elements de la seqüència llegida i l’últim element d’aquesta, respectivament.

Entrada

L’entrada consisteix en una o més seqüències no buides de nombres naturals estrictament positius. Cada seqüència acaba amb un 0. El final de l’entrada es marca amb una seqüència buida.

Sortida

Escriviu quantes seqüències són similars a la primera, aquesta inclosa.

Observació

No podeu usar strings, ni vectors o similars.
*/

#include <iostream>
using namespace std;

void info_sequencia (int& suma,int& ultim) {
    int x = 1;
    ultim = 0;
    while (x != 0) {
        cin >> x;
        suma += x;
        if (x!= 0) ultim = x;
    }
}

int main () {
    int x0 = 0, x = 1, sum0 = 0, counter = 1;
    
    while (x != 0) {
        cin >> x;
        sum0 += x;
        if (x != 0) x0 = x;
    }
    
    x = 1;
    int sum1 = 1, seqlast = 1;
    while (x != 0 and seqlast != 0) {
        sum1 = 0;
        info_sequencia (sum1, seqlast);
        if (sum0 == sum1 and x0 == seqlast) counter++;
    }
    cout << counter << endl;
}
