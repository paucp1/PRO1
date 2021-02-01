#include <iostream>
using namespace std;

int main () {
    int f, c;
    cin >> f >> c;
    int suma = 0;
    char n;
    
    for (int i = 1; i <= f; ++ i) {
        if (i%2 != 0) {
            for (int j = 1; j <= c; ++j) {
                cin >> n;
                if (j%2 != 0) {
                    suma = suma + (n - '0');
                }
            }
        }
        
        if (i%2 == 0) {
            for (int j = 1; j <= c; ++j){
                cin >> n;
                if (j%2 == 0) {
                    suma = suma + (n - '0');
                }
            }
        }
    }
    cout << suma << endl;
}
