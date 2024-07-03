/*
Escriviu un procediment

    void read_rational(int& num, int& den);
que llegeixi un nombre racional donat en el format “numerator”/“denominator”, i que guardi aquests dos valors a num i den, respectivament. A més, cal eliminar tots els factors comuns de num i den. Per exemple, si l’entrada té

66/12
després de la crida num ha de valer 11 i den ha de valer 2.

Precondició

1 ≤ num ≤ 109 and 1 ≤ den ≤ 109

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
using namespace std;
 
int gcd (int x, int y) {
    while ( x != y) {
        if (x > y) x = x - y;
        else y = y - x;
    }
    return x;
}
    
void read_rational (int& num, int& den) { char c;
    cin >> num >> c >> den;
    int d = gcd (num, den);
    num = num/d;
    den = den/d;
    }


int main () {
    int numerador, denominador;
    char barra;
    cin >> numerador;
    cin >> barra;
    cin >> denominador;
    read_rational (numerador, denominador);
    cout << numerador << "/" << denominador << endl;
}
