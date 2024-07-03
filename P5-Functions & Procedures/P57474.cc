/*
Escriviu una funció iterativa que, donat un naturak n, retorni el seu factorial n!.

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

using namespace std;

int factorial(int n) {
    int f = 1;
    
    for (int i = 2; i <= n; ++i) {
        f = f*i;
    }
    
    return f;
}
