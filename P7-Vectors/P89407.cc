/*
Diem que el producte de x per y és estable si els dígits de x i de y per una banda, i els digits de x * y per l’altra, són els mateixos. Per exemple, el producte

875 * 650 = 568750
és estable, ja que a les dues bandes hi ha un 0, dos 5s, un 6, un 7, i un 8.

Aquesta propietat es pot estendre a altres bases diferents de 10. Per exemple, el producte de 3 per 53 és estable en base 2:

11 * 110101 = 10011111
ja que a cada banda hi ha dos 0s i sis 1s.

Feu un programa que, donada una sèrie de parells x i y, digui per a quines bases entre 2 i 16 (incloses) el producte x * y és estable.

Per resoldre aquest problema, implementeu i useu la funció

    bool mateixos_digits(int x, int y, int b);
que indica si, en base b (amb 2≤ b≤ 16), x i y per una banda, i x * y per l’altra, tenen els mateixos dígits.

També, implementeu i useu l’acció

    void escriu(int n, int b);
que escriu n en base b per pantalla (tal qual, sense espais ni salts de línia).

Entrada

L’entrada és una seqüència de parells de naturals x i y. Es compleix x ≥ 1, y ≥ 1, x * y ≤ 109. Podeu assumir aquesta informació com a precondició dels vostres procediments.

Sortida

Per a cada parell de x i y, cal indicar en quines bases el producte x * y és estable. Si no n’hi ha cap, cal indicar-ho. Escriviu una línia en blanc després de la sortida per a cada cas. Seguiu el format de l’exemple.

Observació

Si feu proves amb nombres a l’atzar i el vostre programa no troba cap solució, no us espanteu: la majoria de productes no són estables
*/

#include <iostream>
#include <vector>
using namespace std;

bool mateixos_digits(int x, int y, int b) {
	vector <int>v(b, 0);
	int taman = v.size();
	int xy = x * y;
	while (xy != 0) {
		if (x != 0) v[x % b]++;
		if (y != 0) v[y % b]++;
		v[xy % b]--;
		x /= b;
		y /= b;
		xy /= b;
	}
	for (int i = 0; i < taman; ++i) {
		if (v[i] != 0) return false;
	}
	return true;
}

void escriu(int n, int b) {
	if (n != 0) {
		escriu(n / b, b);
		int aux = n % b;
		if (aux < 10) cout << aux;
		else cout << char(aux-10+'A');
	}
}

int main() {
	int x, y;
	while (cin >> x >> y) {
		int in = 2;
		bool entra = false;
		cout << "solucions per a " << x << " i " << y;
		while (in <= 16) {
			bool resultat = mateixos_digits(x, y, in);
			if (resultat) {
				if (not entra) cout << endl;
				escriu(x, in);
				cout << " * ";
				escriu(y, in);
				cout << " = ";
				int nxy = x * y;
				escriu(nxy, in);
				cout << " (base " << in << ')' << endl;
				entra = true;
			}
			in++;
		}
		if (not entra) {
			cout << endl;
			cout << "cap" << endl;
		}
		cout << endl;
	}
}
