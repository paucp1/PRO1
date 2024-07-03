/*
Feu un procediment que, suposant que totes les posicions de v, excepte potser la darrera, estan ordenades de petit a gran, deixi v totalment ordenat de petit a gran.

Per exemple, si v fos ⟨ 2, 4, 7, 7, 8, 9, 5⟩, hauria de quedar ⟨ 2, 4, 5, 7, 7, 8, 9⟩.

Interfície

C++	
    void insereix(vector<double>& v);
C	
    void insereix(int n, double v[n]);
Java	
    public static void insereix(double[] v);
Python	
    insereix(v)  # returns None
MyPy	
    insereix(v: list[float]) -> None
Precondició

Es té |v|≥ 1. A més, les posicions 0 a |v| − 2 de v estan ordenades de petit a gran.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
#include <vector>

using namespace std;

void insereix(vector<double>& v) {
	int tam = v.size();
	for (int i = 1; i < tam; ++i)  {
		double x = v[i];
		int j = i;
		while (j > 0 && x < v[j - 1]) {
			v[j] = v[j - 1];
			--j;
		}
		v[j] = x;
	}
}
