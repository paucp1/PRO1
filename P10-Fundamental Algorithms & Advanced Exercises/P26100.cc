/*
El matemàtic anglès John Conway es va inventar l’any 1970 el joc següent: Imagineu una matriu amb n files i m columnes. Es consideren posicions veïnes a una posició les (vuit, com a molt) posicions adjacents, ja sigui horitzontalment, verticalment o bé en diagonal. En cada instant, cada posició està buida o conté una bactèria. Les regles són:

Una posició buida en un instant t contindrà una bactèria en l’instant t + 1 si i només si en l’instant t tenia exactament tres bactèries veïnes.
Una posició ocupada en un instant t contindrà una bactèria en l’instant t + 1 si i només si en l’instant t tenia dos o tres bactèries veïnes.
Feu un programa que, per a cada matriu donada, escrigui la matriu a l’instant de temps posterior.

Entrada

L’entrada consisteix en diversos casos. Cada cas comença amb n i m, ambdós estrictament positius, seguits de n línies, cadascuna amb m caràcters: ‘B’ si la posició té una bactèria, i ‘.’ si la posició és buida. Un cas especial amb n = m = 0 marca el final de l’entrada.

Sortida

Per a cada cas, escriviu la matriu corresponent a l’instant següent usant el mateix format de l’entrada (excepte n i m, que no s’escriuen). Separeu les matrius amb una línia buida.
*/

#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> row;
typedef vector<row> board;

int adjacent_bacterias(const board& a, const int x, const int y) {
	int rows, cols, c = 0;
	rows = a.size();
	cols = a[0].size();

	for (int i = -1; i < 2; i++) {
		for (int j = -1; j < 2; j++) {
			int xx, yy;
			xx = x + i;
			yy = y + j;

			if (xx >= 0 and yy >= 0 and xx < cols and yy < rows) {
				if (a[yy][xx] == 'B' and (i != 0 or j != 0))
					c++;
			}
		}
	}

	return c;
}


void evaluate_cell(const board& a, const int x, const int y, board& b) {
	int adj = adjacent_bacterias(a, x, y);
	if ((a[y][x] == '.' and adj == 3) or (a[y][x] == 'B' and (adj == 2 or adj == 3)))
		b[y][x] = 'B'; else b[y][x] = '.';
}

int main() {
	bool first = true;
	int rows, cols;

	while (cin >> rows >> cols and rows != 0 and cols != 0) {
		board a(rows, row(cols));
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++)
				cin >> a[i][j];
		}

		if (not first) cout <<	endl;
		else first = false;

		board b(rows, row(cols));
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				evaluate_cell(a, j, i, b);
				cout << b[i][j];
			}
			cout << endl;
		}
	}
}
