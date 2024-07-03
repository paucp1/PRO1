/*
Feu un programa que llegeixi una matriu, i que després n’escrigui les files, columnes i elements que es demanin.

Entrada

L’entrada consisteix en una matriu, seguida d’una seqüència de consultes sobre la matriu. La matriu es descriu amb dos naturals n > 0 i m > 0, seguits de n línies amb m enters cadascuna. Cada consulta comença amb la paraula “fila”, “columna” o “element”. Si la paraula és “fila”, li segueix un número de fila. Si la paraula és “columna”, li segueix un número de columna. Si la paraula és “element”, li segueix un número de fila i un número de columna. Tots els números donats tant de fila com de columna són correctes, i comencen en 1.

Sortida

Per a cada consulta, escriviu la fila, la columna, o l’element que s’hagi demanat.
*/

#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

Matriu llegir_mat() {
    int n, m;
    cin >> n >> m;
    Matriu mat(n, Fila(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> mat[i][j];
    }
    return mat;
}

int main () {
    Matriu mat = llegir_mat();
    string c;
    while (cin >> c) {
        if (c == "fila") {
            int x;
            cin >> x;
            cout << c << " " << x << ":";
            for (int j = 0; j < mat[0].size(); ++j) cout << " " << mat[x - 1][j];
            cout << endl;
        }
        
        else if (c == "columna") {
            int x;
            cin >> x;
            cout << c << " " << x << ":";
            for (int i = 0; i < mat.size(); ++i) cout << " " << mat[i][x - 1];
            cout << endl;
        }
        
        else {
            int x, y;
            cin >> x >> y;
            cout << c << " " << x << " " << y << ": " << mat[x - 1][y - 1] << endl;
        }
    }
}
