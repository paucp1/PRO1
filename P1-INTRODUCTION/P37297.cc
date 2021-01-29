#include <iostream>
using namespace std;

int main () {
    int x;
    cin >> x;
    int suma = 0;
    
    for (int i = 0; i <= 2; ++i) {
        suma = suma + (x%10);
        x = x/10;
    }
    
    cout << suma << endl;
}
