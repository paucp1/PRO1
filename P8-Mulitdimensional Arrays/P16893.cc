/*
Recordeu que un Sudoku és un joc que consisteix a completar una graella 9 × 9 amb números entre 1 i 9 de manera que el resultat final no tingui números repetits a la mateixa fila, columna o submatriu 3 × 3. Per exemple, aquest és un Sudoku i la seva solució:

unit=0.6cm linewidth=0.1pt (9,9) [linewidth=1.25pt](0,0)(0,9) (1,0)(1,9) (2,0)(2,9) [linewidth=1.25pt](3,0)(3,9) (4,0)(4,9) (5,0)(5,9) [linewidth=1.25pt](6,0)(6,9) (7,0)(7,9) (8,0)(8,9) [linewidth=1.25pt](9,0)(9,9)
[linewidth=1.25pt](0,0)(9,0) (0,1)(9,1) (0,2)(9,2) [linewidth=1.25pt](0,3)(9,3) (0,4)(9,4) (0,5)(9,5) [linewidth=1.25pt](0,6)(9,6) (0,7)(9,7) (0,8)(9,8) [linewidth=1.25pt](0,9)(9,9)

[c](0.5,0.5)4 [c](2.5,0.5)5 [c](3.5,0.5)6

[c](1.5,1.5)2 [c](2.5,1.5)9 [c](3.5,1.5)1

[c](4.5,2.5)7 [c](5.5,2.5)5 [c](8.5,2.5)8

[c](2.5,3.5)6 [c](3.5,3.5)4 [c](4.5,3.5)2

[c](1.5,4.5)4 [c](2.5,4.5)8 [c](6.5,4.5)5 [c](7.5,4.5)6

[c](4.5,5.5)6 [c](5.5,5.5)1 [c](6.5,5.5)8

[c](0.5,6.5)1 [c](3.5,6.5)9 [c](4.5,6.5)3

[c](5.5,7.5)6 [c](6.5,7.5)4 [c](7.5,7.5)5

[c](5.5,8.5)2 [c](6.5,8.5)3 [c](8.5,8.5)7

      (9,9) [linewidth=1.25pt](0,0)(0,9) (1,0)(1,9) (2,0)(2,9) [linewidth=1.25pt](3,0)(3,9) (4,0)(4,9) (5,0)(5,9) [linewidth=1.25pt](6,0)(6,9) (7,0)(7,9) (8,0)(8,9) [linewidth=1.25pt](9,0)(9,9)

[linewidth=1.25pt](0,0)(9,0) (0,1)(9,1) (0,2)(9,2) [linewidth=1.25pt](0,3)(9,3) (0,4)(9,4) (0,5)(9,5) [linewidth=1.25pt](0,6)(9,6) (0,7)(9,7) (0,8)(9,8) [linewidth=1.25pt](0,9)(9,9)

[c](0.5,0.5)4 [c](1.5,0.5)7 [c](2.5,0.5)5 [c](3.5,0.5)6 [c](4.5,0.5)8 [c](5.5,0.5)9 [c](6.5,0.5)1 [c](7.5,0.5)3 [c](8.5,0.5)2

[c](0,1) [c](0.5,0.5)9 [c](1.5,0.5)2 [c](2.5,0.5)9 [c](3.5,0.5)1 [c](4.5,0.5)4 [c](5.5,0.5)3 [c](6.5,0.5)6 [c](7.5,0.5)7 [c](8.5,0.5)5

[c](0,2) [c](0.5,0.5)6 [c](1.5,0.5)3 [c](2.5,0.5)1 [c](3.5,0.5)2 [c](4.5,0.5)7 [c](5.5,0.5)5 [c](6.5,0.5)9 [c](7.5,0.5)4 [c](8.5,0.5)8

[c](0,3) [c](0.5,0.5)5 [c](1.5,0.5)1 [c](2.5,0.5)6 [c](3.5,0.5)4 [c](4.5,0.5)2 [c](5.5,0.5)8 [c](6.5,0.5)7 [c](7.5,0.5)9 [c](8.5,0.5)3

[c](0,4) [c](0.5,0.5)2 [c](1.5,0.5)4 [c](2.5,0.5)8 [c](3.5,0.5)3 [c](4.5,0.5)9 [c](5.5,0.5)7 [c](6.5,0.5)5 [c](7.5,0.5)6 [c](8.5,0.5)1

[c](0,5) [c](0.5,0.5)7 [c](1.5,0.5)9 [c](2.5,0.5)3 [c](3.5,0.5)5 [c](4.5,0.5)6 [c](5.5,0.5)1 [c](6.5,0.5)8 [c](7.5,0.5)2 [c](8.5,0.5)4

[c](0,6) [c](0.5,0.5)1 [c](1.5,0.5)5 [c](2.5,0.5)7 [c](3.5,0.5)9 [c](4.5,0.5)3 [c](5.5,0.5)4 [c](6.5,0.5)2 [c](7.5,0.5)8 [c](8.5,0.5)6

[c](0,7) [c](0.5,0.5)3 [c](1.5,0.5)8 [c](2.5,0.5)2 [c](3.5,0.5)7 [c](4.5,0.5)1 [c](5.5,0.5)6 [c](6.5,0.5)4 [c](7.5,0.5)5 [c](8.5,0.5)9

[c](0,8) [c](0.5,0.5)9 [c](1.5,0.5)6 [c](2.5,0.5)4 [c](3.5,0.5)8 [c](4.5,0.5)5 [c](5.5,0.5)2 [c](6.5,0.5)3 [c](7.5,0.5)1 [c](8.5,0.5)7

En aquest problema no us demanem que resolgueu cap Sudoku, només que comproveu que cada matriu donada pot ser la solució d’un Sudoku.

Entrada

L’entrada consisteix en un nombre n, seguit de n casos. Cada cas té 9 files, cadascuna amb 9 ‍números entre 1 i 9.

Sortida

Per a cada cas, escriviu “si” o “no” depenent de si la matriu donada compleix les regles de les solucions dels Sudokus.
  */

#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

void llegir_mat (Matriu& m) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> m[i][j];
        }
    }
}

Matriu submatriu (const Matriu& m, int f, int c) {
    Matriu aux(3, Fila(3));
    int f_aux = f;
    int c_aux = c;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            aux[i][j] = m[f_aux][c_aux];
            ++c_aux;
        }
        ++f_aux;
        c_aux = c;
    }
    return aux;
}
    
    

bool es_solucio (const Matriu& m) {
    for (int i = 0; i < 9; ++i) {
        vector<int> f(9,0);
        for (int j = 0; j < 9; ++j) {
            int a = m[i][j];
            for (int k = 0; k < 9; ++k) {
                if (a == f[k]) return false;
            }
            f[j] = a;
        }
    }
    
    for (int i = 0; i < 9; ++i) {
        vector<int> c(9,0);
        for (int j = 0; j < 9; ++j) {
            int a = m[j][i];
            for (int k = 0; k < 9; ++k) {
                if (a == c[k]) return false;
            }
            c[j] = a;
        }
    }
    
    int f = 0;
    int c = 0;
    for (int i = 0; i < 9; ++i) {
        Matriu aux = submatriu (m, f, c);
        vector<int> s(9,0);
        int h = 0;
        for (int j = 0; j < 3; ++j) {
           for (int k = 0; k < 3; ++k) {
               s[h] = aux[j][k];
               ++h;
           }
        }
        
        for (int j = 0; j < 9; ++j) {
            int a = s[j];
            for (int k = 0; k < 9; ++k) {
                if (j != k and a == s[k]) return false;
            }
        }
        
        c = c + 3;
        if (c > 6) {
            c = 0;
            f = f +3;
        }
    }
    
    return true;
}

int main () {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        Matriu s (9, Fila(9));
        llegir_mat(s);
        if (es_solucio(s)) cout << "si" << endl;
        else cout << "no" << endl;
    }
}
