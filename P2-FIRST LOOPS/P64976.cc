   
#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int x = 1;
    
    while (x <= n) {
        cout << n << " x " << x << " = " << n*x << endl;
        x = x + 1;
    }
}
