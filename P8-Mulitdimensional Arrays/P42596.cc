/*
Feu un programa que llegeixi una seqüència de matrius d’enters, i digui quina d’elles té la diferència màxima entre el seu element més gran i el seu element més petit. En cas d’empat, heu de triar la matriu que aparegui abans a la seqüència.

Utilitzant la definició

    typedef vector<vector<int> > Matriu;
el vostre programa ha d’implementar i usar l’acció

    void min_max(const Matriu& mat, int& minim, int& maxim);
que, donada la matriu no buida mat, deixa a minim i a maxim els elements mínim i màxim de mat, respectivament.

Entrada

L’entrada és una seqüència no buida de matrius no buides d’enters. Cada matriu es descriu amb les seves dimensions n > 0 i m > 0, seguides dels seus n × m elements.

Sortida

La sortida són dues línies indicant quina és la màxima entre les diferències de l’element més gran i més petit de cada matriu, i quina és la primera matriu amb aquesta diferència.
*/

#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

void llegir_mat (Matriu& m) {
    int f = m.size();
    int c = m[0].size();
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> m[i][j];
        }
    }
}

void min_max(const Matriu& mat, int& minim, int& maxim) {
    int f = mat.size();
    int c = mat[0].size();
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            if (mat[i][j] < minim) minim = mat[i][j];
            if (mat[i][j] > maxim) maxim = mat[i][j];
        }
    }
}

int main () {
    int n, m;
    bool primer = true;
    int pos = 1;
    int pos_min = 1;
    int dif_max = 0;
    while (cin >> n >> m) {
        Matriu mat(n, vector<int>(m));
        llegir_mat(mat);
        int max = -999999999;
        int min = 999999999;
        min_max(mat, min, max);
        int dif = max - min;
        if (primer) {
            dif_max = dif;
            pos_min = pos;
            primer = false;
        }
        if (dif > dif_max) {
            dif_max = dif;
            pos_min = pos;
        }
        ++pos;
    }
    cout << "la diferencia maxima es " << dif_max << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << pos_min << endl;
}
