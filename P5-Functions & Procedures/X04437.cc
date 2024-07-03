/*
Escriviu una funció

     double dist_or(double x, double y);
que retorna la distància a l’origen del punt (x,y).

Entrada

L’entrada consisteix en dos reals.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
#include <math.h>
using namespace std;

double dist_or(double x, double y) {
    double d;
    d = sqrt(x*x + y*y);
    return d;
}
