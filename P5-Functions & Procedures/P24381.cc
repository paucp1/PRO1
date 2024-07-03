/*
Escriviu un procediment

    void cross(int n, char c);
que escrigui una creu n × n amb el caràcter c. Per exemple, la crida

    cross(5, 'X');
produeixen aquesta sortida:

  X
  X
XXXXX
  X
  X
Precondició

n ≥ 3, n és senar.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
using namespace std;

void cross (int n, char c) {
    
    for (int i = 0; i < n/2; ++i) {
        for (int j = 0; j < n/2; ++j) {
            cout << " ";
        }
        cout << c << endl;
    }
    
    for (int i = 0; i < n; ++i) {
        cout << c;
    }
    
    cout << endl;
    
    for (int i = 0; i < n/2; ++i) {
        for (int j = 0; j < n/2; ++j) {
            cout << " ";
        }
        cout << c << endl;  
    }
}
