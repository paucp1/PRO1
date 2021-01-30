#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    if (n < 2) {
        cout << n;
    }
            
    while (n >= 2) {
        cout << n%2;
        if (n == 2 or n == 3) {
            cout << n/2;
        }
        n = n/2;
    }
    cout << endl;
}
