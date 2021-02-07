#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        cout << x;
        bool primer = true;
        int passos = 0;
        int divisor = 2;
        
        while (primer and passos <= sqrt(x)) {
            if ((x%divisor == 0 and divisor != x) or x == 1) { 
                cout << " no es primer" << endl;
                primer = false;
            }
            passos = passos + 1;
            divisor = divisor + 1;
        }
        
        if (primer) cout << " es primer" << endl;
    }
}
