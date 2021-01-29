#include <iostream>
using namespace std;

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
