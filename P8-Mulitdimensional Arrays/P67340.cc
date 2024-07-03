/*
Considereu un tauler d’escacs rectangular sobre el qual s’han disposat diversos alfils. Un alfil n’amenaça un altre si tots dos es troben a la mateixa diagonal i no n’hi ha cap altre entre ells dos. Es vol conèixer quines són totes les amenaces entre alfils.

Per exemple, considereu el tauler següent amb 4 files i 5 columnes:

unit=0.75cm linewidth=0.6pt (6,5.5)
(1,1)(1,0)6(0,0)(0,4) (1,1)(0,1)5(0,0)(5,0)

[c](0.5 , 1.5 )4 [c](0.5 , 2.5 )3 [c](0.5 , 3.5 )2 [c](0.5 , 4.5 )1

[c](1.5 ,0.5 )1 [c](2.5 ,0.5 )2 [c](3.5 ,0.5 )3 [c](4.5 ,0.5 )4 [c](5.5 ,0.5 )5

[c](1.5 ,1.5 )X [c](3.5 ,3.5 )X [c](4.5 ,2.5 )X [c](4.5 ,4.5 )X [c](5.5 ,2.5 )X

L’alfil de la posició (3,5) no té amenaces. L’alfil de la posició (4,1) amenaça el de la posició (2,3), i cap altre. L’alfil de la posició (2,3) amenaça els de les posicions (4,1), (1,4) i (3,4). El conjunt de totes les amenaces és:

(4,1)↔(2,3) 
(2,3)↔(4,1) 
(2,3)↔(1,4) 
(1,4)↔(2,3) 
(2,3)↔(3,4) 
(3,4)↔(2,3)
Feu un programa que llegeixi un tauler amb alfils i escrigui totes les seves amenaces.

Entrada

L’entrada comença amb el nombre de files i el nombre de columnes del tauler (dos enters estrictament positius). A continuació ve un tauler de la mida indicada, amb caràcters ‘|X|’ per marcar els alfils i punts per marcar les caselles buides.

Sortida

Per a cada amenaça d’un alfil a la posició (f1,c1) amb un altre alfil a la posició (f2,c2), cal escriure una línia amb el text “(|f1|,|c1|)<->(|f2|,|c2|)”. Les posicions es numeren de dalt a baix i d’esquerra a dreta, començant per ‍1.

Observació

L’ordre en què escriviu les línies és irrellevant. El Jutge donarà per bona qualsevol sortida que contingui totes les amenaces correctes, amb independència del seu ordre.
*/

#include <iostream>
#include <vector>
using namespace std;

typedef vector <bool>Fila;
typedef vector <Fila>Tauler;

void find_threats_direction(const Tauler& tauler, int f1, int c1, int dx, int dy) {
	int n = tauler.size();
	int m = tauler[0].size();

	int i = f1+dx;
	int j = c1+dy;

	bool trobat = false;
	while (not trobat and i < n and i >= 0 and j < m and j >= 0) {
		if (tauler[i][j]) {
			cout << '(' << f1+1 << ',' << c1+1 << ")<->(" << i+1 << ',' << j+1 << ')' << endl;
			trobat = true;
		}

		i += dx;
		j += dy;
	}
}

void find_threats(const Tauler& tauler, int f1, int c1) {
	find_threats_direction(tauler, f1, c1, 1, 1);  // cap a baix a la dreta
	find_threats_direction(tauler, f1, c1, 1, -1);  // cap a baix a l'esquerra
	find_threats_direction(tauler, f1, c1, -1, 1);  // cap a dalt a la dreta
	find_threats_direction(tauler, f1, c1, -1, -1);  // cap a dalt a l'esquerra
}

int main() {
	int n, m;
	cin >> n >> m;

	Tauler tauler = Tauler(n, Fila(m));

	char c;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> c;
			tauler[i][j] = (c == 'X');
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (tauler[i][j]) {
				find_threats(tauler, i, j);
			}
		}
	}
}
