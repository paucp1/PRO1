/*
Feu un programa que, donat un temps expressat en hores, minuts i segons, calculi el temps corresponent a sumar-li un segon, i també el temps corresponent a restar-li un segon.

El vostre programa ha d’usar la definció

    struct Temps {
        int hora, minut, segon;
    };
i implementar i fer servir un procediment

    void un_segon(const Temps& t, Temps& t1, Temps& t2);
que deixi a t1 el temps contingut a t més un segon, i a t2 el temps contingut a t menys un segon. Per exemple, si t conté 23 59 59, llavors t1 ha de ser 0 0 0 i t2 ha de ser 23 59 58.

Entrada

L’entrada consisteix en diversos casos, cadascun amb tres nombres (hora, minut i segon) que formen un temps correcte. És a dir, l’hora està entre 0 i 23, i el minut i el segon entre 0 i 59.

Sortida

Per a cada temps donat t, escriviu dues línies amb t1 i t2.

Observació

Podeu implementar procediments auxiliars.
*/

#include <iostream>
using namespace std;

struct Temps {
    int hora, minut, segon;
};

void un_segon(const Temps& t, Temps& t1, Temps& t2) {
    Temps copia = t;
    ++copia.segon;
    if (copia.segon == 60) {
        copia.segon = 0;
        ++copia.minut;
        if (copia.minut == 60) {
            copia.minut = 0;
            ++copia.hora;
            if (copia.hora == 24) {
                copia.hora = 0;
            }
        }
    }
    t1.hora = copia.hora;
    t1.minut = copia.minut;
    t1.segon = copia.segon;
    
    Temps aux = t;
    --aux.segon;
    if (aux.segon == -1) {
        aux.segon = 59;
        --aux.minut;
        if (aux.minut == -1) {
            aux.minut = 59;
            --aux.hora;
            if (aux.hora == -1) {
                aux.hora = 23;
            }
        }
    }
    t2.hora = aux.hora;
    t2.minut = aux.minut;
    t2.segon = aux.segon;
}

int main () {
    Temps t;
    while (cin >> t.hora >> t. minut >> t.segon) {
        Temps t1;
        Temps t2;
        un_segon(t, t1, t2);
        cout << t1. hora << " " << t1.minut << " " << t1.segon << endl;
        cout << t2. hora << " " << t2.minut << " " << t2.segon << endl;
    }
}
