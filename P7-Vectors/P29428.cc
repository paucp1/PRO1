/*
Feu un programa que llegeixi una seqüència de paraules i que escrigui, per a cada paraula, totes les altres paraules de la seqüència contingudes en ella.

El vostre programa ha d’implementar i utilitzar la funció

    bool conte(string s1, string s2);
que indica si la paraula |s1| conté la paraula |s2| sota la precondició que la llargada de |s1| és més gran o igual que la llargada de |s2|.

Per exemple, |conte("remor", "em")|, |conte("remor", "remor")|, |conte("remor", "mor")| i
|conte("remor", "rem")| han de retornar |true|, però, en canvi, |conte("remor", "eo")|
i |conte("remor", "rom")| han de retornar |false|.

Entrada

L’entrada consisteix en un natural n seguit de n paraules diferents p1,…,pn.

Sortida

Cal escriure una línia per a cada p1,…,pn en aquest ordre. Cada línia comença amb pi, seguida del símbol de dos punts i de la llista de totes les paraules de l’entrada contingudes dins de pi, en el mateix ordre de l’entrada. Fixeu-vos que la llista corresponent a cada pi sempre inclou la pròpia pi, ja que tota paraula es conté a ella mateixa.
  */

#include <iostream>
#include <vector>
using namespace std;

bool conte(string s1, string s2) {
	int i = 0;
	bool trobat = (s1.size() == 0);
	int n = int(s2.size())-int(s1.size());

	while (not trobat and i <= n) {
		int j = 0;
		bool encaixa = true;
		while (encaixa and j < s1.size()) {
			encaixa = (s1[j] == s2[i+j]);
			j++;
		}
		if (encaixa) trobat = true;
		else i++;
	}
	if (trobat) return true;
	else return false;
}

int main() {
	int n;
	cin >> n;

	vector <string>seq(n);
	for (int i = 0; i < n; i++) cin >> seq[i];
	for (int i = 0; i < n; i++) {
		cout << seq[i] << ':';
		for (int j = 0; j < n; j++) {
			if (conte(seq[j], seq[i])) cout << ' ' << seq[j];
		}
		cout << endl;
	}
}
