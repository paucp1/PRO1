#include <iostream>
using namespace std;

int main () {
    int x, n;
    cin >> x;
    int suma = 0;
    
    while (cin >> n) {
        if (n%x == 0) suma = suma + 1;
    }
    
    cout << suma << endl;
}
