#include <iostream>
using namespace std;

int main () {
    cout.precision(10);
    cout.setf(ios::fixed);
    
    int n, m;
    
    while (cin >> n >> m) {
        double suma1 = 0;
        if (n == m) {
            cout << suma1 << endl;
        }
     
        else {
            for (int i = m + 1; i <= n; ++i) {
                suma1 = suma1 + (1.0/i);
            }
        
            cout << suma1 << endl;
        }
    }
}
