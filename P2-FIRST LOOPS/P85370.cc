#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
     
    double c, i;
    int t;
    string m;
    cin >> c >> i >> t >> m;
    double suma = c;
     
    if (m == "simple") {
        for (int x = 1; x <= t; ++x) {
            suma = suma + (i/100.0)*c;
        }
    }
    
    else {
        for (int x = 1; x <= t; ++x) {
            suma = suma + (i/100.0)*suma;
        }
    }
    
    cout << suma << endl;
}
