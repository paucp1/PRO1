/*
Feu una funció que retorni la posició de l’element màxim de v[0..m]. En cas d’empat, cal retornar la posició més petita.

Precondició

0 ≤ m < mida de v.

Interfície

C++	
    int posicio_maxim(const vector<double>& v, int m);
C	
    int posicio_maxim(double v[], int m);
Java	
    public static int posicioMaxim(double[] v, int m);
Python	
    posicio_maxim(v, m)  # returns int
MyPy	
    posicio_maxim(v: list[float], m: int) -> int
Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
#include <vector>

using namespace std;

int posicio_maxim(const vector<double>& v, int m) {
	int max = 0;
	double max_value = v[0];
	for (int i = 1; i <= m; ++i) {
		if (v[i] > max_value) {
			max = i;
			max_value = v[i];
		}
	}
	return max;
}
