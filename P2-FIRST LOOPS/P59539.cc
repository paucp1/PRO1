#include <iostream>
using namespace std;

int main () {
    cout.precision(4);
    cout.setf(ios::fixed);
    
    int n;
    cin >> n;
    double suma = 0;
    
    for (int i = 1; i <= n; ++i) {
        suma = suma + (1.0/i);
    }
    
    cout << suma << endl;
}
