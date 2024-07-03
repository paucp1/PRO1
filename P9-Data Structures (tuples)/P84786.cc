/*
Per resoldre aquest exercici us caldrà la definició de Punt i de distancia() del problema P46254.

Feu un procediment

    void desplaca(Punt& p1, const Punt& p2);
que mou el punt p1 segons indiquen les coordenades del punt p2.

Per exemple, sigui p1 el punt (2, 1), i p2 el punt (−0.5, 4). Llavors desplaca(p1, p2) faria que p1 valgués (1.5, 5).

Addicionalment, usant la definició

    struct Cercle {
        Punt centre;
        double radi;
    };
feu dos procediments,

    void escala(Cercle& c, double esc);
que escala el cercle c proporcionalment al real estrictament positiu esc, i

    void desplaca(Cercle& c, const Punt& p);
que mou el cercle c segons indiquen les coordenades de p.

Per exemple, sigui c un cercle de centre (1, 2) i radi 3. Llavors, escala(c, 2) obtindria un cercle de centre (1, 2) i radi 6. En canvi, si p és (3.5, −1), desplaca(c, p) obtindria un cercle de centre (4.5, 1) i radi 3.

Feu també una funció que indiqui si un punt p és interior a un cercle c:

    bool es_interior(const Punt& p, const Cercle& c);
Suposeu que els radis són sempre estrictament positius, i que p mai estarà exactament a la frontera de c.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat. Seguiu estrictament la definició dels tipus de l’enunciat.
*/

#include <iostream>
#include <math.h>
using namespace std;

struct Punt {
    double x, y;
};

struct Cercle {
    Punt centre;
    double radi;
};

double distancia(const Punt& a, const Punt& b) {
    double dif_x = b.x - a.x;
    double dif_y = b.y - a.y;
    return sqrt((dif_x*dif_x) + (dif_y*dif_y));
}

void desplaca(Punt& p1, const Punt& p2) {
    p1.x = p1.x + p2.x;
    p1.y = p1.y + p2.y;
}

void escala(Cercle& c, double esc) {
    c.radi = c.radi*esc;
}

void desplaca(Cercle& c, const Punt& p) {
    c.centre.x = c.centre.x + p.x;
    c.centre.y = c.centre.y + p.y;
}

bool es_interior(const Punt& p, const Cercle& c) {
    if (distancia(p, c.centre) > c.radi) return false;
    else return true;
}
