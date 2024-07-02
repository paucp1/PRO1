#include <iostream>
using namespace std;

/*
Feu un programa que llegeixi una lletra i que indiqui si és una majúscula, si és una minúscula, si és una vocal, i si és una consonant. Recordeu que en català les vocals són les lletres ‘a’, ‘e’, ‘i’, ‘o’ i ‘u’, i llurs majúscules.

Entrada

L’entrada consisteix en una lletra.

Sortida

Heu de dir si la lletra és majúscula, minúscula, vocal o consonant. Seguiu el format dels exemples.
*/

int main () {
    char x;
    cin >> x;
    
    if (x >= 'A' and x <= 'Z') {
        cout << "uppercase" << endl;
    }
    
    else { 
        cout << "lowercase" << endl;
    }
    
    if (x == 'a' or x == 'A' or x == 'e' or x == 'E' or x == 'i' or x == 'I' or x == 'o' or x == 'O' or x == 'u' or x == 'U') {
        cout << "vowel" << endl;
    }
    
    else {
        cout << "consonant" << endl;
    }
}
