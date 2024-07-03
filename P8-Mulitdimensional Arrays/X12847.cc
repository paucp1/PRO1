/*
El joc dels barquets es juga sobre un tauler de 10x10, on les files es numeren amb lletres (de l’a a la j), i les columnes es numeren amb números de l’1 al 10.


Cadascun dels dos jugadors que hi participen té un tauler. Sobre les caselles del tauler cada jugador disposa un total de 10 vaixells, que ocupen 2, 3, 4 o 5 caselles contigües en línia recta. En concret, cada jugador disposa d’una flota formada per: 1 vaixell de longitud 5, 2 de longitud 4, 3 de longitud 3, i 4 de longitud 2.


Els vaixells no es poden tocar entre ells ni es poden posicionar de qualsevol forma: sempre han de definir una línia contínua horitzontal o vertical, però mai diagonal. Sempre que es compleixin aquestes restriccions, els jugadors poden disposar els seus vaixells en qualsevol lloc del tauler. Després, cada jugador intentaà enfonsar els vaixells de l’altre jugador mitjançant ’trets’ directes a una coordenada del tauler contrari.

Entrada

Les primeres 10 línies defineixen el taulervàlid pel jugador 1. Cada línia defineix la posició d’un vaixell al tauler. Cada vaixell es defineix per una coordenada inicial del tauler, una mida i una orientació: la coordenada està formada per una lletra de {a..j} i un número de {1..10}, la mida és un enter entre 2 i 5, i l’orientació és una lletra h (horitzontal) una v (vertical). El vaixell es posarà al tauler a partir de la coordenada inicial, seguint l’orientació indicada, al llarg de tantes caselles com indica la llargada. Quan l’orientació és horitzontal, la coordenada inicial indica la de la casella més a l’esquerra, i quan és vertical, la casella superior.
Per exemple, el vaixell definit per a1 3 h ocupa les caselles a1, a2, a3, mentre que el vaixell definit per a1 3 v ocupa les caselles a1, b1, c1.

A continuació hi ha una seqüència (sense repeticions) de coordenades vàlides que representen els trets del jugador 2 sobre el tauler del jugador 1.
Sortida

Dibuixeu el tauler del jugador 1 després de posicionar-hi els 10 vaixells definits a l’entrada.
A continuació indiqueu, per a cada coordenada de la seqüència de trets del jugador 2, si hi ha vaixell en aquella posició al tauler del jugador 1. En cas que no n’hi hagi, indiqueu quina és la distància al vaixell més proper.
Seguiu el format indicat als exemples.

Observació

Els taulers i les coordenades dels tirs dels jocs de proves compleixen les condicions del joc. No cal que les comproveu, doncs.
Feu servir la definició següent:
typedef vector< vector<bool> > Tauler;
La distància entre dues caselles (i,j) i (i′,j′) del tauler es defineix com la màxima diferència entre les seves coordenades, és a dir,
distancia((i,j), (i′,j′)) = max{|  i−i′|, |j−j′|}
Fixeu-vos que, segons això, les posicions a distància 1 són totes les posicions contigües (horitzontalment, verticalment o en diagonal), les posicions a distància 2 són les contigües a les de distància 1, etc.
Es valorarà l’eficiència de l’algorisme utilitzat per a calcular el vaixell més pròxim.
  */

#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<bool> > Tauler;

int traduir (char c) {
    if (c == 'a') return 0;
    else if (c == 'b') return 1;
    else if (c == 'c') return 2;
    else if (c == 'd') return 3;
    else if (c == 'e') return 4;
    else if (c == 'f') return 5;
    else if (c == 'g') return 6;
    else if (c == 'h') return 7;
    else if (c == 'i') return 8;
    else return 9;
}

char destraduir (int x) {
    if (x == 0) return 'a';
    else if (x == 1) return 'b';
    else if (x == 2) return 'c';
    else if (x == 3) return 'd';
    else if (x == 4) return 'e';
    else if (x == 5) return 'f';
    else if (x == 6) return 'g';
    else if (x == 7) return 'h';
    else if (x == 8) return 'i';
    else return 'j';
}

void escriure (const Tauler& t) {
    cout << "  12345678910" << endl;
    char c = 'a';
    for (int i = 0; i < 10; ++i) {
        cout << c << " ";
        for (int j = 0; j < 10; ++j) {
            if (t[i][j] == true) cout << "X";
            else cout << ".";
        }
        cout << endl;
        ++c;
    }
    cout << endl;
}

int min(int a, int b) {
	if (a <= b) return a;
	else return b;
}
int max(int a, int b) {
	if (a >= b) return a;
	else return b;
}

bool trobar_horizontal(const Tauler& t, int i, int from, int to) {
	for (int j = from; j <= to; ++j) {
		if (t[i][j]) return true;
	}
	return false;
}

bool trobar_vertical(const Tauler& t, int j, int from, int to) {
	for (int i = from; i <= to; ++i) {
		if (t[i][j]) return true;
	}
	return false;
}

int distancia(const Tauler& t, int i0, int j0) {
	int dist = 1;

	while (dist <= 10) {
		// Busquem la part de dalt
		if (i0-dist >= 0) {
			if (trobar_horizontal(t, i0-dist, max(0, j0-dist), min(j0+dist, 10-1))) return dist;
		}

		// Busquem la part de baix
		if (i0+dist < 10) {
			if (trobar_horizontal(t, i0+dist, max(0, j0-dist), min(j0+dist, 10-1))) return dist;
		}

		// Busquem la part esquerra
		if (j0-dist >= 0) {
			if (trobar_vertical(t, j0-dist, max(0, i0-dist), min(i0+dist, 10-1))) return dist;
		}

		// Busquem la part dreta
		if (j0+dist < 10) {
			if (trobar_vertical(t, j0+dist, max(0, i0-dist), min(i0+dist, 10-1))) return dist;
		}

		++dist;
	}

	return dist;
}

void comprovar (const Tauler& t, int x, int y) {
    if (t[x][y] == true) {
        char c = destraduir(x);
        cout << c << y + 1 << " tocat!" << endl;
    }
    else if (t[x][y] == false) {
        char c = destraduir(x);
        cout << c << y + 1 << " aigua! vaixell mes proper a distancia ";
        cout << distancia(t, x, y) << endl;
    }
}
    
        

int main () {
    Tauler t(10, vector<bool>(10, false));
    for (int i = 0; i < 10; ++i) {
        char c, l;
        int y_aux, n;
        cin >> c >> y_aux >> n >> l;
        int x = traduir(c);
        int y = y_aux - 1;
        for (int j = 0; j < n; ++j) {
            if (l == 'h') {
                t[x][y + j] = true;
            }
            else {
                t[x + j][y] = true;
            }
        }
    }
    escriure(t);
    
    char c;
    int y_aux;
    while (cin >> c >> y_aux) {
        int x = traduir(c);
        int y = y_aux - 1;
        comprovar(t, x, y);
    }
}
