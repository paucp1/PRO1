#include <iostream>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    
    while (a <= b) {
       if (a == b) {
           cout << a;
       }
       
        else {
            cout << a << ",";
        }
        
        a = a + 1;
    }
    
    cout << endl;
}
