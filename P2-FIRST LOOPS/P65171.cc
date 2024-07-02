#include <iostream>
using namespace std;

/*
Feu un programa que donat un natural n≥ 2 seguit de n nombres reals x1, x2,…, xn, calculi la variança dels nombres fent servir la fórmula

1
n−1
n
∑
i=1
xi2 ⁠ ⁠ − ⁠ ⁠	
1
n(n−1)
⎛
⎜
⎜
⎝	
n
∑
i=1
xi	⎞
⎟
⎟
⎠	
2



 
 .
Per exemple, la variança del 2, 3, i 5 és

1
2
 	⎛
⎝	22 + 32 + 52 	⎞
⎠	⁠ ⁠ − ⁠ ⁠	
1
3 · 2
 	⎛
⎝	2 + 3 + 5 	⎞
⎠	
2

 
⁠ ⁠ = ⁠ ⁠	
38
2
 − 	
100
6
⁠ ⁠ ≃ ⁠ ⁠ 2.33 ⁠ ⁠ .
Entrada

L’entrada és un natural n≥ 2 seguit de n nombres reals x1, x2,…, xn.

Sortida

Cal escriure el valor de la variança dels n nombres donats amb exactament dos dígits desprès del punt decimal. Per aconseguir-ho, poseu aquestes dues línies a l’inici del main:

    cout.setf(ios::fixed);
    cout.precision(2);
*/

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);
    
    int n;
    cin >> n;
    double suma1 = 0;
    double suma2 = 0;
    
    for (int i = 0; i < n; ++i) {
        double x;
        cin >> x;
        suma1 = suma1 + x*x;
        suma2 = suma2 + x;
    }
    
    cout << (1.0/(n - 1))*suma1 - (1.0/(n*(n - 1)))*suma2*suma2 << endl;
}
