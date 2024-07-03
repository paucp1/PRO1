/*
Escriviu una funció que retorni n!.

Resoleu aquest problema recursivament.

Interfície

C++	
    int factorial(int n);
C	
    int factorial(int n);
Java	
    public static int factorial(int n);
Python	
    factorial(n)  # returns int
 	
    factorial(n: int) -> int
Precondició

Es compleix 0≤ n ≤ 12.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
using namespace std;

int factorial (int n) {
    if (n == 0) return 1;
    else return n*factorial(n - 1);
}


int main () {
    int x;
    cin >> x;
    cout << factorial (x) << endl;
}
