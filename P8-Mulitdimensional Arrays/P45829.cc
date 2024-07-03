/*
Un camp rectangular de mida m× n conté mn zones quadrades. Algunes de les zones estan ocupades per un determinat conreu (tomàquets, pastanagues, etc.) que s’identifica per un natural estrictament positiu. Se sap que els conreus s’agrupen en diferents rectangles disjunts i que un conreu sempre està separat d’un altre per zones sense conrear, identificades per el valor 0.

Feu un programa que llegeixi camps i escrigui el seu nombre de conreus rectangulars.

Entrada

L’entrada consisteix en una seqüència de camps. Per cada camp es dónen primer dos naturals m i n amb m≥1 i n≥1 que representen la seva mida. A continuació es dónen m files, cadascuna amb n naturals que representen el conreu en aquella zona. Els camps segueixen les hipòtesis descrites anteriorment.

Sortida

Per a cada camp de l’entrada, cal escriure en una línia el seu nombre de conreus rectangulars.
*/

#include <iostream>
#include <vector>
using namespace std;

typedef vector <int>Row;
typedef vector <Row>Matrix;

void erase(vector <vector <int> >& v, int x, int y, int& count) {
	int f = v.size();
	int c = v[0].size();
	int i = x;
	bool contains = false;
	while (i < f and v[i][y] != 0) {
		int j = y;
		while (j < c and v[i][j] != 0) {
			v[i][j] = 0;
			contains = true;
			++j;
		}
		++i;
	}
	if (contains) ++count;
}

int main() {
	int f, c;
	while (cin >> f >> c) {
		Matrix M(f, Row(c));
		for (int i = 0; i < f; ++i) {
			for (int j = 0; j < c; ++j) {
				cin >> M[i][j];
			}
		}
		int count = 0;
		for (int i = 0; i < f; ++i) {
			for (int j = 0; j < c; ++j) {
				if (M[i][j] != 0) {
					erase(M, i, j, count);
				}
			}
		}
		cout << count << endl;
	}
}
