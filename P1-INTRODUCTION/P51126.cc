#include <iostream>
using namespace std;

int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if ((a <= c) and (b >= c)) {
        if (b <= d) {
            cout << "[" << c << "," << b << "]" << endl;
        }
        
        else {
            cout << "[" << c << "," << d << "]" << endl;
        }
    }
    
    else if ((c <= a) and (d >= a)) {
        if (b <= d) {
            cout << "[" << a << "," << b << "]" << endl;
        }
        
        else {
            cout << "[" << a << "," << d << "]" << endl;
        }
    }
    
    else cout << "[]" << endl;
}
