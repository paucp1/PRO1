/*
Un quadrat màgic d’ordre n és un arranjament dels enters 1 a n2 en un quadrat n× n on la suma dels números de cada fila, de cada columna i de les dues diagonals principals és la mateixa. La figura següent mostra dos exemples de quadrats màgics d’ordre 3 i 6:

                                  28  4   3   31  35  10
                4  9  2           36  18  21  24  11  1
                3  5  7           7   23  12  17  22  30
                8  1  6           8   13  26  19  16  29
                                  5   20  15  14  25  32
                                  27  33  34  6   2   9
Els quadrats màgics han estat sovint utilitzats com a talismans, per ajudar en els parts, per guarir picades d’insectes o per curar malalties. S’han trobat molts quadrats màgics gravats en plats, copes, medallons o monuments. Per exemple, podeu trobar un altre quadrat màgic a la façana oest de la Sagrada Família de Gaudí.

Dissenyeu una funció

    bool quadrat_magic(const vector< vector<int> >& t);
que, donada una taula t de n× n enters, indiqui si representa un quadrat màgic o no.

Precondició

La taula t és quadrada.
  */

#include <iostream>
#include <vector>

using namespace std;

bool quadrat_magic(const vector< vector<int> >& t) {
	int tam = t.size();
	int aux_comp = 0;
	for (int i = 0; i < tam; ++i) {
		aux_comp += t[i][0];
	}

	for (int i = 0; i < tam; ++i) {
		int suma = 0;
		for (int j = 0; j < tam; ++j) {
			suma += t[i][j];
		}
		if (suma != aux_comp) return false;
	}

	for (int j = 0; j < tam; ++j) {
		int suma = 0;
		for (int i = 0; i < tam; ++i) {
			suma += t[i][j];
		}
		if (suma != aux_comp) return false;
	}

	int i = 0;
	int j = 0;
	int suma = 0;
	while (i < tam && j < tam) {
		suma += t[i][j];
		++i;
		++j;
	}
	if (suma != aux_comp) return false;

	i = tam-1;
	j = 0;
	suma = 0;
	while (i >= 0 && j < tam) {
		suma += t[i][j];
		++j;
		--i;
	}
	if (suma != aux_comp) return false;

	for (int k = 1; k <= tam*tam; ++k) {
		bool found = false;
		for (i = 0; i < tam && not found; ++i) {
			for (j = 0; j < tam && not found; ++j) {
				if (not found && t[i][j] == k) found = true;
			}
		}
		if (not found) return false;
	}

	return true;
}
