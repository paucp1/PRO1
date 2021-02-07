#include <iostream>
using namespace std;

int main () {
    int n, x;
    cin >> n;
    bool trobat = false;
    int pos = 0;
    
   while (not trobat and cin >> x) {
       pos = pos + 1;
       if (pos == n) {
            cout << "A la posicio " << n << " hi ha un " << x << "." << endl;
            trobat = true;
       }
   }
   
   if (not trobat) cout << "Posicio incorrecta." << endl;
}
