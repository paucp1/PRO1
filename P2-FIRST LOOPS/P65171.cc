#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);
    
    int n;
    cin >> n;
    double suma1 = 0;
    double suma2 = 0;
    
    for (int i = 0; i < n; ++i) {
        double x;
        cin >> x;
        suma1 = suma1 + x*x;
        suma2 = suma2 + x;
    }
    
    cout << (1.0/(n - 1))*suma1 - (1.0/(n*(n - 1)))*suma2*suma2 << endl;
}
