#include <iostream>
using namespace std;

int main () {
    cout.precision(6);
    cout.setf(ios::fixed);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        string f;
        cin >> f;
        
        if (f == "rectangle") {
            double l, a;
            cin >> l >> a;
            cout << l*a << endl;
        }
        
        else {
            double r;
            cin >> r;
            double pi = 3.141592653589793238462;
            cout << pi*r*r << endl;
        }
    }
}
