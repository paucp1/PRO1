/*
Usant la definició

    struct Punt {
        double x, y;
    };
feu una funció

    double distancia(const Punt& a, const Punt& b);
que retorni la distància euclídea (l’habitual) entre dos punts a i b.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat. Seguiu estrictament la definició dels tipus de l’enunciat.
*/

#include <iostream>
#include <math.h>
using namespace std;

struct Punt {
    double x, y;
};

double distancia(const Punt& a, const Punt& b) {
    double dif_x = b.x - a.x;
    double dif_y = b.y - a.y;
    return sqrt((dif_x*dif_x) + (dif_y*dif_y));
}
