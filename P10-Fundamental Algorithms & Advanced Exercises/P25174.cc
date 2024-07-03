/*
Feu un programa que llegeixi cubs n × n × n d’enters i calculi quantes ratlles de mida m conté, per a tota m entre 2 i n. Aquí, una ratlla és una seqüència d’enters idèntics adjacents en la mateixa direcció. Les direccions considerades són la vertical, horitzontal, de fondària, i totes les diagonals en dues o tres dimensions (en total, 26 sentits en 13 direccions).

Entrada

L’entrada consisteix en una seqüència de descripcions de cubs separades amb una línia buida. Cada descripció comença amb un natural n ≥ 2. Segueixen, separades amb una línia buida, n descripcions de cada pla del cub, cadascuna de les quals té n files amb n enters cadascuna.

Sortida

Per a cada cub, escriviu quantes ratlles de mida m conté, per a tota m entre 2 i n. Separeu les diverses sortides amb una línia buida.
  */

#include <iostream>
#include <vector>
using namespace std;
typedef  vector< vector< vector<int> > > cub;

cub readcub(int n) {
	cub c(n, vector< vector<int> >(n, vector< int >(n)));
	for (int k = 0; k < n; ++k) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> c[i][j][k];
			}
		}
	}
	return c;
}

void rat(cub& c, int x, int y, int z, int pi, int pj, int pk, int n, vector<int>& ratlles) {
	int zero = c[x][y][z];
	x -= pi;
	y -= pj;
	z -= pk;

	int count = 1;
	x += 2 * pi;
	y += 2 * pj;
	z += 2 * pk;
	while (not (x < 0 or x >= n or y < 0 or y >= n or z < 0 or z >= n) and c[x][y][z] == zero) {
		x += pi;
		y += pj;
		z += pk;
		++count;
		++ratlles[count - 2];
	}

}

int main() {
	int n;
	bool first = true;
	while (cin >> n) {
		cub c = readcub(n);
		vector<int> ratlles(n - 1, 0);
		for (int k = 0; k < n; ++k) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {

					bool fhalf = true;
					int pi = -1;
					while (pi < 2 and fhalf) {
						int pj = -1;
						while (pj < 2 and fhalf) {
							int pk = -1;
							while (pk < 2 and fhalf) {
								rat(c, i, j, k, pi, pj, pk, n, ratlles);
								++pk;
								if (pk == 0 and pj == 0 and pi == 0) fhalf = false;
							}
							++pj;
						}
						++pi;
					}

				}
			}
		}
		if (not first) {
			cout << endl;
		}
		first = false;
		for (int i = 0; i < n - 1; i++) {
			cout << "Ratlles de mida " << i + 2 << ": " << ratlles[i] << endl;
		}
	}
}
