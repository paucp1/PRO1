#include <iostream>
using namespace std;

int main () {
    double x;
    cin >> x;
    int infe = x/1;
    int super = (x/1) + 1;
    
    if ((x - infe >= 0.5)) {
        cout << infe << " " << super << " " << super << endl;
    }
    
    else if (x - infe == 0) {
        cout << infe << " " << infe << " " << infe << endl;
    }
    
    else {
        cout << infe << " " << super << " " << infe << endl;
    }
}
