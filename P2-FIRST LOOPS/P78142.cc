#include <iostream>
using namespace std;

int main () {
    cout.precision(2);
    cout.setf(ios::fixed);
    
    double n;
    
    double suma = 0.0;
    int nombres = 0;
    
    while (cin >> n) {
        suma = suma + n;
        nombres = nombres + 1;
    }
    cout << suma/nombres << endl;
}
