#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int x = 1;
    
    while (x <= 10) {
        cout << n << "*" << x << " = " << n*x << endl;
        x = x + 1;
    }
}
