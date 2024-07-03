/*
En un popular gestor de finestres, s’usa la definició següent per mantenir la informació de les finestres visibles a la pantalla de l’ordinador:

    struct Rectangle {
        int x_esq, x_dre, y_baix, y_dalt;
    };
Aquí, els rectangles tenen els costats paral·lels als eixos x i y, i x_esq, x_dre, y_baix i y_dalt són respectivament la mínima coordenada horitzontal, la màxima coordenada horitzontal, la mínima coordenada vertical i la màxima coordenada vertical de cada rectangle.

Feu un procediment que llegeixi un rectangle:

    void llegeix(Rectangle& r);
el qual ve donat a l’entrada amb els quatre enters x_esq, x_dre, y_baix i y_dalt en aquest ordre.

Feu també una funció que indiqui la relació que tenen dos rectangles r1 i r2 donats:

    int relacio(const Rectangle& r1, const Rectangle& r2);
Cal que la funció retorni 1 si r1 és interior a r2, 2 si r2 és interior a r1, 3 si cap rectangle és interior a l’altre però els rectangles intersecten, 4 si els rectangles són idèntics, i 0 altrament (si els rectangles no tenen cap punt en comú).

Suposeu que dos rectangles intersecten fins i tot si coincideixen només en un segment o només en un punt. A més, suposeu que tots els rectangles estan ben formats, és a dir, que x_esq és estrictament més petit que x_dre, i que y_baix és estrictament més petit que y_dalt.

Useu aquestes definicions i procediments per fer un programa que llegeixi una sèrie de parells de rectangles, i per a cadascun escrigui quina relació tenen.

Entrada

L’entrada consisteix en un natural n, seguit de n línies, cadascuna amb dos rectangles (vuit nombres enters).

Sortida

Per a cada parell de rectangles, cal escriure la seva relació segons es mostra en els exemples.
*/

#include <iostream>
using namespace std;

struct Rectangle {
    int x_esq, x_dre, y_baix, y_dalt;
};

void llegeix(Rectangle& r) {
    cin >> r.x_esq >> r.x_dre >> r.y_baix >> r.y_dalt;
}

int relacio(const Rectangle& r1, const Rectangle& r2) {
    if (r1.x_esq == r2.x_esq and r1.x_dre == r2.x_dre and r1.y_baix == r2.y_baix and r1.y_dalt == r2.y_dalt) return 4;
    else if (r1.x_esq >= r2.x_esq and r1.x_dre <= r2.x_dre and r1.y_baix >= r2.y_baix and r1.y_dalt <= r2.y_dalt) return 1;
    else if (r1.x_esq <= r2.x_esq and r1.x_dre >= r2.x_dre and r1.y_baix <= r2.y_baix and r1.y_dalt >= r2.y_dalt) return 2;
    else if (r1.x_dre < r2.x_esq or r2.x_dre < r1.x_esq or r1.y_dalt < r2.y_baix or r2.y_dalt < r1.y_baix) return 0;
    else return 3;
}

int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        Rectangle r1;
        llegeix(r1);
        Rectangle r2;
        llegeix(r2);
        if (relacio(r1, r2) == 1) cout << "el primer rectangle es interior al segon" << endl;
        else if (relacio(r1, r2) == 2) cout << "el segon rectangle es interior al primer" << endl;
        else if (relacio(r1, r2) == 3) cout << "els rectangles intersecten" << endl;
        else if (relacio(r1, r2) == 4) cout << "els rectangles son iguals" << endl;
        else cout << "els rectangles no intersecten" << endl;
    }
}
