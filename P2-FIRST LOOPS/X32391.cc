#include <iostream>
using namespace std;

int main () {
    int d, n, t;
    cin >> d >> n >> t;
    int suma = 0;
    
    for (int i = 1; i <= t; ++i) {
        int s;
        cin >> s;
        n = n + s - d;
        if (n > 0) suma = suma + 1;
    }
    cout << suma << endl;
}
