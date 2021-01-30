#include <iostream>
using namespace std;

int main () {
    char x = 'x';
    int suma = 0;
    
    while (x != '.') {
        cin >> x;
        if (x == 'a') suma = suma + 1;
    }
    cout << suma << endl;
}
