/*
Feu una funció recursiva eficient que retorni la posició on es troba x dins del subvector v[esq..dre]. Si x no pertany a v[esq..dre] o si esq > dre, cal retornar -1.

Precondició El vector v està ordenat de forma estrictament creixent. A més, es té 0 ≤ esq ≤ mida de v i −1 ≤ dre < mida de v.

Interfície

C++	
    int posicio(double x, const vector<double>& v, int esq, int dre);
C	
    int posicio(double x, double v[], int esq, int dre);
Java	
    public static int posicio(double x, double[] v, int esq, int dre);
Python	
    posicio(x, v, esq, dre)  # returns int
MyPy	
    posicio(x: float, v: list[float], esq: int, dre: int) -> int
Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
#include <vector>

using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre) {
	if (esq > dre) return -1;
	int mid = (esq+dre)/2;
	if (x < v[mid]) return posicio(x, v, esq, mid-1);
	if (x > v[mid]) return posicio(x, v, mid+1, dre);
	return mid;
}
