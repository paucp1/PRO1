#include <iostream>
using namespace std;

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
