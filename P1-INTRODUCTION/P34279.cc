#include <iostream>
using namespace std;

/*
Feu un programa que afegeixi un segon a una hora del dia, donades les seves hores, minuts i segons.

Entrada

L’entrada consisteix en tres naturals h, m i s que representen una hora del dia, és a dir, tals que h<24, m<60 i s<60.

Sortida

Cal escriure el nou temps definit per h, m i s més un segon en el format “HH:MM:SS”.
*/

int main () {
    int h, m, s;
    cin >> h >> m >> s;
 
    s = s+1;
    
    if (s == 60) {
        m = m+1;
        s = s%60;
    }
    
    if (m == 60) {
        h = h+1;
        m = m%60;
    }
    
    if (h == 24) {
         h = h%24;
     }
     
     if ( h < 10 ) cout << "0";
     cout << h << ":";
     if ( m < 10 ) cout << "0";
     cout << m << ":";
     if ( s < 10 ) cout << "0";
     cout << s << endl;
}
