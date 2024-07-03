/*
Useu recursivitat per fer un programa que, per a cada nombre donat, l’escrigui en notació binària, octal i hexadecimal.

Entrada

L’entrada consisteix en diversos nombres naturals.

Sortida

Per a cada nombre de l’entrada, cal escriure la seva representació binària, octal i hexadecimal seguint el format de l’exemple.
*/

#include <iostream>
using namespace std;

void binari (int n) {
    if (n != 0) {
        binari (n/2);
        cout << n%2;
    }
}

void octal (int n) {
    if (n != 0) {
        octal (n/8);
        cout << n%8;
    }
}

void hexa (int n) {
    if (n != 0) {
        hexa (n/16);
        if (n%16 < 10) cout << n%16;
        else if (n%16 == 10) cout << "A";
        else if (n%16 == 11) cout << "B";
        else if (n%16 == 12) cout << "C";
        else if (n%16 == 13) cout << "D";
        else if (n%16 == 14) cout << "E";
        else if (n%16 == 15) cout << "F";
    }
}


int main () {
    int x;
    while (cin >> x) {
    cout << x << " = ";
    binari (x);
    if (x == 0) cout << x; 
    cout << ", ";
    octal (x);
    if (x == 0) cout << x;
    cout << ", ";
    hexa (x);
    if (x == 0) cout << x;
    cout << endl;
}
}
