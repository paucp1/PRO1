/*
Usant la definició

    struct Rellotge {
        int h;      // hores (0<=h<24)
        int m;      // minuts (0<=m<60)
        int s;      // segons (0<=s<60)
    };
implementeu les funcions i accions següents:

    Rellotge mitja_nit();
    void incrementa(Rellotge& r);
    void escriu(const Rellotge& r);
La funció mitja_nit() retorna un rellotge inicialitzat a mitja nit (00:00:00). L’acció incrementa() avança el rellotge d’un segon. L’acció escriu() escriu l’hora del rellotge en format HH:MM:SS en una línia.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat. Seguiu estrictament la definició dels tipus de l’enunciat.
*/

#include <iostream>
using namespace std;

struct Rellotge {
    int h;      // hores (0<=h<24)
    int m;      // minuts (0<=m<60)
    int s;      // segons (0<=s<60)
};

Rellotge mitja_nit() {
    Rellotge r;
    r.h = 0;
    r.m = 0;
    r.s = 0;
    return r;
}

void incrementa(Rellotge& r) {
    ++r.s;
    if (r.s == 60) {
        r.s = 0;
        ++r.m;
        if (r.m == 60) {
            r.m = 0;
            ++r.h;
            if (r.h == 24) {
                r.h = 0;
            }
        }
    }
}

void escriu(const Rellotge& r) {
    if (r.h < 10) cout << "0" << r.h;
    else cout << r.h;
    cout << ":";
    if (r.m < 10) cout << "0" << r.m;
    else cout << r.m;
    cout << ":";
    if (r.s < 10) cout << "0" << r.s;
    else cout << r.s;
    cout << endl;
}
