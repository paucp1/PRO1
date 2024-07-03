/*
Donada una matriu rectangular n × m, i una posició inicial dins de la matriu, determineu si els elements de les quatre diagonals que surten de la posició inicial es troben en ordre estrictament creixent.

Entrada

L’entrada consisteix en diversos casos. Cada cas comença amb el nombre de files n i el nombre de columnes m, seguits de n línies amb m enters cadascuna, seguits de la fila i columna inicials (començant en 0).

Sortida

Per a cada cas, escriviu “si” o “no” segons convingui.

El vostre codi ha de seguir les normes d’estil i contenir els comentaris que considereu oportuns.
*/

#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

void llegir_mat (Matriu& m) {
    int f = m.size();
    int c = m[0].size();
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> m[i][j];
        }
    }
}

bool esq_dalt (const Matriu& mat, int n, int t) {
    int n_aux = n;
    int t_aux = t;
    while (n_aux != 0 and t_aux != 0) {
        if (mat[n_aux][t_aux] >= mat[n_aux - 1][t_aux - 1]) return false;
        --n_aux;
        --t_aux;
    }
    return true;
}

bool dre_dalt (const Matriu& mat, int n, int t) {
    int n_aux = n;
    int t_aux = t;
    while (n_aux != (mat.size() - 1) and t_aux != 0) {
        if (mat[n_aux][t_aux] >= mat[n_aux + 1][t_aux - 1]) return false;
        ++n_aux;
        --t_aux;
    }
    return true;
}

bool esq_baix (const Matriu& mat, int n, int t) {
    int n_aux = n;
    int t_aux = t;
    while (n_aux != 0 and t_aux != (mat[0].size() - 1)) {
        if (mat[n_aux][t_aux] >= mat[n_aux - 1][t_aux + 1]) return false;
        --n_aux;
        ++t_aux;
    }
    return true;
}

bool dre_baix (const Matriu& mat, int n, int t) {
    int n_aux = n;
    int t_aux = t;
    while (n_aux != (mat.size() - 1) and t_aux != (mat[0].size() - 1)) {
        if (mat[n_aux][t_aux] >= mat[n_aux + 1][t_aux + 1]) return false;
        ++n_aux;
        ++t_aux;
    }
    return true;
}

int main () {
    int f, c;
    while (cin >> f >> c) {
        Matriu mat(f, Fila(c));
        llegir_mat(mat);
        int n, m;
        cin >> n >> m;
        if (esq_dalt(mat, n, m) and dre_dalt(mat, n, m) and esq_baix(mat, n, m) and dre_baix(mat, n, m)) {
            cout << "si" << endl;
        }
        else cout << "no" << endl;
    }
}
