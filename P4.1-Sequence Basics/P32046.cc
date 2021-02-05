#include <iostream>
using namespace std;

int main () {
    int n;
    int aux;
    int total = 0;
    cin >> n;
    
    cout << "nombres que acaben igual que " << n << ":" << endl;
    n = n%1000;
    
    while (cin >> aux) {
        if (aux%1000 == n) {
            cout << aux << endl;
            total = total + 1;
        }
    }
    
    cout << "total: " << total << endl;
}
