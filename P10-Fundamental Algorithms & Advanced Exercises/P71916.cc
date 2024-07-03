/*
Dues frases (o dues paraules) són anagrames si es pot obtenir l’una de l’altra simplement reordenanant les seves lletres (tot oblidant els espais i símbols de puntuació).

Per exemple, “ROMA” i “AMOR” són anagrames. També, “AVE MARIA, GRATIA PLENA, DOMINUS TECUM” i “VIRGO SERENA, PIA, MUNDA ET IMMACULATA” són anagrames.

Feu un programa que digui si parells de frases són o no anagrames.

Entrada

L’entrada comença amb un nombre n corresponent al nombre de parells de frases. Després, cada frase es dóna en una línia que acaba en un punt. Les frases poden contenir lletres (en majúscules), blancs i signes de puntuació (però només un punt final).

Sortida

Per a cada parell de frases, cal escriure “SI” si formen un anagrama, “NO” altrament.
*/

#include <iostream>
#include <vector>

using namespace std;

const int ABC = 26;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		vector<int> alfabet(ABC, 0);
		char c;
		while (cin >> c and c != '.') {
			if (c >= 'A' and c <= 'Z') ++alfabet[c - 'A'];
		}
		while (cin >> c and c != '.') {
			if (c >= 'A' and c <= 'Z') --alfabet[c - 'A'];
		}
		int j = 0;
		bool trobat = false;
		while (not trobat and j < ABC) {
			if (alfabet[j] != 0) trobat = true;
			else ++j;
		}
		if (trobat) cout << "NO" << endl;
		else cout << "SI" << endl;
	}
}
