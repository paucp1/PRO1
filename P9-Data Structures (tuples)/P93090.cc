/*
Feu un programa que calculi el resultat de sumar una seqüència de fraccions.

Utilitzant la definició

    struct Fraccio {
        int num, den;   // sempre estrictament positius
    };
el vostre programa ha d’incloure i fer servir la funció

    Fraccio suma(const Fraccio& x, const Fraccio& y);
que retorna la suma de |x| i |y|, sense factors comuns en el numerador i el denominador.

Entrada

L’entrada és una seqüència d’una o més fraccions simplificades separades per signes de suma, acabada en un igual. Cada fracció consisteix en el seu numerador, una barra, i el seu denominador. Els numeradors i els denominadors són naturals estrictament positius.

Sortida

Escriviu la fracció simplificada corresponent a la suma de totes les fraccions donades.

Observacions

Per evitar sobreeixements, useu la funció |suma()| per acumular els càlculs parcials.
Es valorà negativament el càlcul ineficient del màxim comú divisor.
No podeu usar vectors per resoldre aquest problema.
*/

#include <iostream>
using namespace std;

struct Fraccio {
    int num, den;   // sempre estrictament positius
};

int mcd (int n, int d) {
    int a = n;
    int b = d;
    while (b != 0) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int mcm (int d1, int d2) {
    return (d1/mcd(d1, d2))*d2;
}

Fraccio racional(int n, int d) {
    int n_aux = n;
    int d_aux = d;
    if (n_aux != 0) {
        int div = mcd(n_aux, d_aux);
        n_aux = n_aux/div;
        d_aux = d_aux/div;
        Fraccio r;
        r.num = n_aux;
        r.den = d_aux;
        return r;
    }
    
    else {
        Fraccio r;
        r.num = 0;
        r.den = 1;
        return r;
    }
}

Fraccio suma(const Fraccio& x, const Fraccio& y) {
    int den = mcm(x.den, y.den);
    int num_a = (den/x.den)*x.num;
    int num_b = (den/y.den)*y.num;
    int num = num_a + num_b;
    Fraccio r = racional(num, den);
    return r;
}

int main () {
    Fraccio total;
    total.num = 0;
    total.den = 1;
    Fraccio f;
    bool final = false;
    char c;
    while ((cin >> f.num >> c >> f.den) and not final) {
        Fraccio resul = suma(total, f);
        total = resul;
        char op;
        cin >> op;
        if (op == '=') final = true;
    }
    cout << total.num << "/" << total.den << endl;
}
