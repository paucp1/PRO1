#include <iostream>
using namespace std;

int main () {
    int n, m;
    bool first = true;
    
    while (cin >> n >> m) {
        if (not first) {
            cout << endl;
        }
        
        int x = 9;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << x;
                x = x - 1;
                if (x == -1) x = x + 10;
            }
            
            cout << endl;
        }
        
        first = false;
    }
}
