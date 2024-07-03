/*
El producte escalar de dos vectors u=(u0,…,un−1) i v=(v0,…,vn−1) és ∑i=0n−1 ui vi.

Feu una funció que retorni el producte escalar de u i v.

Interfície

C++	
    double producte_escalar(const vector<double>& u, const vector<double>& v);
C	
    double producte_escalar(int n, double u[n], double v[n]);
Java	
    public static double producteEscalar(double[] u, double[] v);
Python	
    producte_escalar(u, v)  # returns float
MyPy	
    producte_escalar(u: list[float], v: list[float]) -> float
Precondició

Els vectors u i v tenen la mateixa mida.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
#include <vector>
using namespace std;

double producte_escalar (const vector<double>& u, const vector<double>& v) {
    int x = u.size();
    double suma = 0;
    for (int i = 0; i < x; ++i) {
        suma = suma + u[i]*v[i];
    }
    return suma;
}
