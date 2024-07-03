#include <iostream>
using namespace std;

/*
Donada una seqüència amb només ‘(’ i ‘)’, digueu si els parèntesis tanquen correctament.

Entrada

L’entrada consisteix en una seqüència de parèntesis.

Sortida

Escriviu “si” o “no”, depenent de si els parèntesis tanquen correctament o no.
*/

int main () {
   char n;
   int c = 0;
   bool trobat = false;
   
   while (cin >> n and not trobat) {
       if (n == '(') ++c;
       else if (n == ')') --c;
       if (c < 0) trobat = true;
   }
   
   if (c == 0) cout << "si" << endl;
   else cout << "no" << endl;
}
