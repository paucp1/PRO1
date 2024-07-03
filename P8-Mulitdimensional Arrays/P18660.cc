/*
Feu un programa que resolgui sopes de lletres! Les paraules es poden trobar escrites horitzontalment (d’esquerra a dreta), verticalment (de dalt a baix) o diagonalment (d’esquerra a dreta i de dalt a baix).

Entrada

L’entrada consisteix de diferents jocs de proves. Cada joc de proves conté tres parts: La primer part conté tres naturals x, m i n no nuls. La segona part és una seqüència de x paraules. La tercera part és una matriu amb m files i n columnes que representa la sopa de lletres. Tots els símbols que apareixen a les paraules i a la sopa són lletres minúscules a,…,z.

Sortida

Per a cada joc de proves cal reproduir la matriu d’entrada, però canviant totes les lletres que formen part de paraules en majúscules. Separeu cada lletra de la sopa per un espai en blanc; separeu cada joc de proves per una línia en blanc.
  */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef vector <string>Llista;
typedef vector <vector <char> >Matriu;

Llista lleguir_llista(int x) {
	Llista s(x);
	for (int i = 0; i < s.size(); ++i) cin >> s[i];
	return s;
}
Matriu lleguir_sopa(int n, int m) {
	Matriu sopa(n, vector <char> (m));
	for (int i = 0; i < sopa.size(); ++i) {
		for (int j = 0; j < sopa[0].size(); ++j) cin >> sopa[i][j];
	}
	return sopa;
}
void imprimir_sopa(const Matriu& sopa) {
	for (int i = 0; i < sopa.size(); ++i) {
		bool primero = false;
		for (int j = 0; j < sopa[0].size(); ++j) {
			if (primero) cout << ' ';
			else primero = true;
			cout << sopa[i][j];
		}
		cout << endl;
	}
}
void convertir_mayusculas(Matriu& sopa, int l, int i, int j, int inici_i, int inici_j) {
	int k = 0;
	while (k < l) {
		if (sopa[i][j] >= 'a' and sopa[i][j] <= 'z') sopa[i][j] = char(int(sopa[i][j])-int('a')+int('A'));
		i += inici_i;
		j += inici_j;
		++k;
	}
}
bool esta(const Matriu& aux, string s, int i, int j, int inici_i, int inici_j) {
	int k = 0;
	while (i < aux.size() and j < aux[0].size() and k < s.length()) {
		if (s[k] != aux[i][j]) return false;
		i += inici_i;
		j += inici_j;
		++k;
	}
	return k == s.length();
}
void sopa_lletres(const Matriu& aux, Matriu& sopa, Llista s) {
	for (int k = 0; k < s.size(); ++k) {
		int i  = 0;
		string s1 = s[k];
		while (i < sopa.size()) {
			int j = 0;
			while (j < sopa[0].size()) {
				if (s1[0] == aux[i][j]) {
					if (esta(aux, s1, i, j, 0, 1)) convertir_mayusculas(sopa, s1.length(), i, j, 0, 1);
					if (esta(aux, s1, i, j, 1, 0)) convertir_mayusculas(sopa, s1.length(), i, j, 1, 0);
					if (esta(aux, s1, i, j, 1, 1)) convertir_mayusculas(sopa, s1.length(), i, j, 1, 1);
				}
				++j;
			}
			++i;
		}
	}
}
int main() {
	int x, n, m;
	bool primero = true;
	while (cin >> x >> n >> m) {
		Llista s = lleguir_llista(x);
		Matriu sopa = lleguir_sopa(n, m);
		Matriu aux  = sopa;
		sopa_lletres(aux, sopa, s);
		if (not primero) cout << endl;
		else primero = false;
		imprimir_sopa(sopa);
	}
}
