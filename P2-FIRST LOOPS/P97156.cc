#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi dos nombres a i b, i que escrigui tots els nombres entre a i b.

Entrada

L’entrada consisteix en dos naturals a i b.

Sortida

Escriviu una línia amb a,a+1,…,b−1,b. Separeu els nombres amb comes.
*/

int main () {
    int a, b;
    cin >> a >> b;
    
    while (a <= b) {
       if (a == b) {
           cout << a;
       }
       
        else {
            cout << a << ",";
        }
        
        a = a + 1;
    }
    
    cout << endl;
}
