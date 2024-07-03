#include <iostream>
using namespace std;

/*
Feu un programa que, donat un enter i i una seqüència de naturals x1, …, xn, escrigui xi.

Entrada

L’entrada comença amb un nombre i, seguit de la seqüència x1, …, xn acabada en −1. Teniu la garantia que 1 ≤ i ≤ n.

Sortida

Cal escriure el contingut de la posició i segons es mostra als exemples.
*/

 int main () {
     int n;
     cin >> n;
     int x;
     
     for (int i = 1; i <= n; ++i) {
         cin >> x;
     }
     cout << "A la posicio " << n << " hi ha un " << x << "." << endl;
 }
