#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    cout << n;
    int suma = 0;
     
    while (n > 0) {
        suma = suma + (n%10);
        n = n/100;
    }
    
    if (suma%2 != 0) {
        cout << " NO";
    }
    
    cout << " ES TXATXI" << endl;
}
