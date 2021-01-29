#include <iostream>
using namespace std;

int main () {
    char x;
    cin >> x;
    
    if (x >= 'A' and x <= 'Z') {
        x = x + 'a' - 'A';
        cout << x << endl;
    }
    
    else {
        x = x + 'A' - 'a';
        cout << x << endl;
    }
}
