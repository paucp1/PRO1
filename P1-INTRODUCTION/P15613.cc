#include <iostream>
using namespace std;

int main () {
    int x;
    cin >> x;
    
    if (x <= 30 and x >= 10) {
        cout << "it's ok" << endl;
    }
    else if (x > 30) {
        cout << "it's hot" << endl;
    }
    
    else {
        cout << "it's cold" << endl;
    }
    
    if (x >= 100) {
        cout << "water would boil" << endl;
    }
    
    else if (x <= 0) {
        cout << "water would freeze" << endl;
    }
}
