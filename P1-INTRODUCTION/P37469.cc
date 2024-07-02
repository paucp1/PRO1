#include <iostream>
using namespace std;

/*
Feu un programa que, donada una quantitat de segons, digui quantes hores, minuts i segons representa.

Entrada

L’entrada consisteix en un natural n.

Sortida

Escriviu tres naturals h, m, s tals que 3600h+60m+s=n, amb m<60 i s<60.
*/

int main () {
    int n;
    cin >> n;
    
    int h = n/3600;
    int m = (n%3600)/60;
    int s = n%60;
    
    cout << h << " " << m << " " << s << endl;
}
