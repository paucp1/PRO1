/*
Feu una funció

    int elements_comuns (const vector<int>& X, const vector<int>& Y);
que donats dos vectors X i Y ordenats estrictament creixentment, retorni el nombre d’elements comuns als dos vectors, és a dir, el nombre d’enters a tals que a=X[i]=Y[j] per a alguns i i j.

Precondició

Els dos vectors estàn ordenats estrictament creixentment.

Exemples

elements_comuns([3,5,7,8], [2,3,7,9,10]) = 2.
elements_comuns([1,2,3,4,5], [3,4,5,6,7,8]) = 3.
elements_comuns([1,2,3,4,5], [8,9]) = 0.
*/

#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y) {
    int n1 = X.size();
    int n2 = Y.size();
    int suma = 0;
    for (int i = 0; i < n1; ++i) {
        int izq = 0;
        int der = n2 - 1;
        while (izq <= der) {
            int m = (izq + der)/2;
            if (X[i] < Y[m]) der = m - 1;
            else if (X[i] > Y[m]) izq = m + 1;
            else {
                suma = suma + 1;
                izq = der + 1;
            }
        }
    }
    return suma;
}
