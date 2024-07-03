/*
Feu un procediment que ordeni v de petit a gran utilitzant l’algorisme d’ordenació per inserció.

Interfície

C++	
    void ordena_per_insercio(vector<double>& v);
C	
    void ordena_per_insercio(int n, double v[n]);
Java	
    public static void ordenaPerInsercio(double[] v);
Python	
    ordena_per_insercio(v)  # returns None
MyPy	
    ordena_per_insercio(v: list[float]) -> None
Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
#include <vector>
using namespace std;

void ordena_per_insercio(vector<double>& v) {
    for (int i = 1; i < v.size(); ++i) {
        double x = v[i];
        int j = i;
        while (j > 0 and v[j - 1] > x) {
            v[j] = v[j - 1];
            --j;
        }
        v[j] = x;
    }
}
