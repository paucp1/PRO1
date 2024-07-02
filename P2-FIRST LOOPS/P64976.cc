   
#include <iostream>
using namespace std;

/*
Les n primeres línies de la taula de multiplicar d’un natural n venen donades per n multiplicat per u, per dos, per tres, …, fins a n. Per exemple, per a n = 5 tenim 5× 1=5, 5× 2=10, 5× 3=15, 5× 4=20, 5× 5=25.

Feu un programa que llegeixi un nombre natural n i escrigui les n primeres línies de la seva taula de multiplicar.

Entrada

L’entrada és un natural n.

Sortida

Cal escriure les n primeres línies de la taula de multiplicar de n, segons el format dels exemples.
*/

int main () {
    int n;
    cin >> n;
    int x = 1;
    
    while (x <= n) {
        cout << n << " x " << x << " = " << n*x << endl;
        x = x + 1;
    }
}
