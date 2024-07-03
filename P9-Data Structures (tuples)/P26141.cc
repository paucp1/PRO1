/*
Aprofitant els procediments fets als exercicis , i , feu un programa que llegeixi una seqüència de racionals i operacions

r0   o1 ⁠ ⁠ r1   o2 ⁠ ⁠ r2   …   on − 1 ⁠ ⁠ rn − 1   on ⁠ ⁠ rn   ,
i escrigui el resultat després de cada operació.

Entrada

L’entrada consisteix en una línia amb un racional inicial, seguit d’una seqüència de línies, cadascuna amb un parell operació/racional. Com a l’exercici , cada racional ve donat per un parell d’enters, el segon dels quals no és zero. Les operacions poden ser “suma”, “resta”, “multiplica” o “divideix”. En aquest darrer cas, el següent racional no és un zero.

Sortida

Cal escriure el racional inicial, seguit del resultat acumulat de cada operació. Cada racional ha d’anar en una línia aprt.
  */

#include <iostream>
using namespace std;

struct Racional {
    int num, den;
};

struct Expressio {
    string operacio;
    Racional fraccio;
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

Racional racional(int n, int d) {
    int n_aux = n;
    int d_aux = d;
    if (n_aux != 0) {
        int div = mcd(n_aux, d_aux);
        n_aux = n_aux/div;
        d_aux = d_aux/div;
        if (d_aux < 0) {
            d_aux = d_aux*(-1);
            n_aux = n_aux*(-1);
        }
        Racional r;
        r.num = n_aux;
        r.den = d_aux;
        return r;
    }
    
    else {
        Racional r;
        r.num = 0;
        r.den = 1;
        return r;
    }
}

void escriure (Racional r) {
    if (r.num%r.den == 0) cout << r.num/r.den << endl;
    else cout << r.num << "/" << r.den << endl;
}

Racional op_suma(Racional res, Racional f) {
    int den = mcm(res.den, f.den);
    int num_a = (den/res.den)*res.num;
    int num_b = (den/f.den)*f.num;
    int num = num_a + num_b;
    Racional r;
    r.num = num;
    r.den = den;
    return r;
}

Racional op_resta(Racional res, Racional f) {
    int den = mcm(res.den, f.den);
    int num_a = (den/res.den)*res.num;
    int num_b = (den/f.den)*f.num;
    int num = num_a - num_b;
    Racional r;
    r.num = num;
    r.den = den;
    return r;
}

Racional op_multi(Racional res, Racional f) {
    int den = res.den*f.den;
    int num = res.num*f.num;
    Racional r;
    r.num = num;
    r.den = den;
    return r;
}

Racional op_divi(Racional res, Racional f) {
    int num = res.num*f.den;
    int den = res.den*f.num;
    Racional r;
    r.num = num;
    r.den = den;
    return r;
}

int main () {
    Racional ini;
    cin  >> ini.num >> ini.den;
    Racional simp = racional(ini.num, ini.den);
    Racional res = simp;
    escriure(res);
    Expressio e;
    while (cin >> e.operacio >> e.fraccio.num >> e.fraccio.den) {
        if (e.operacio == "suma") {
            res = op_suma(res, e.fraccio);
            Racional res_aux = racional(res.num, res.den);
            res = res_aux;
            escriure(res);
        }
        
        else if (e.operacio == "resta") {
            res = op_resta(res, e.fraccio);
            Racional res_aux = racional(res.num, res.den);
            res = res_aux;
            escriure(res);
        }
        
        else if (e.operacio == "multiplica") {
            res = op_multi(res, e.fraccio);
            Racional res_aux = racional(res.num, res.den);
            res = res_aux;
            escriure(res);
        }
        
        else {
            res = op_divi(res, e.fraccio);
            Racional res_aux = racional(res.num, res.den);
            res = res_aux;
            escriure(res);
        }
    }
}
