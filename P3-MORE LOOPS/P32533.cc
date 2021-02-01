#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        int j = 0;
        
        while (j < n - i) {
            cout << "+";
            j = j + 1;
        }
        
        while (j == n - i) {
            cout << "/";
            j = j + 1;
        }
        
        while (j > n - i and j < n) {
            cout << "*";
            j = j + 1;
        }
        
        cout << endl;
    }
}
