/*
Feu una funció que indiqui si la data definida amb un dia d, mes m i any a és vàlida o no.

Per fer aquesta funció, us serà útil usar la funció dels anys de traspàs de l’exercici ‍.

Interfície

C++	
    bool es_data_valida(int d, int m, int a);
C	
    int es_data_valida(int d, int m, int a);
Java	
    public static boolean esDataValida(int d, int m, int a);
Python	
    es_data_valida(d, m, a)  # returns bool
 	
    es_data_valida(d: int, m: int, a: int) -> bool
Precondició El paràmetre a està entre 1800 i 9999, ambdós inclosos.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
using namespace std;

bool es_any_de_traspas(int any) {
    bool traspas = false;
    if ((any%4 == 0 and any%100 != 0) or (any%100 == 0 and (any/100)%4 == 0)) traspas = true;
    return traspas;
}

bool es_data_valida(int d, int m, int a) {
    bool valida = true;
    if (es_any_de_traspas (a)) {
        if (m > 0 and m <= 12) {
            if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) {
                if (d > 0 and d <= 31) {
                    return valida;
                }
                else return not valida;
            }
            else if (m == 4 or m == 6 or m == 9 or m == 11) {
                 if (d > 0 and d <= 30) {
                    return valida;
                }
                else return not valida;
            }
            else if (m == 2) {
                 if (d > 0 and d <= 29) {
                    return valida;
                }
                else return not valida;
            }
        }
        else return not valida;
    }
    
    else if (not es_any_de_traspas (a)) {
        if (m > 0 and m <= 12) {
            if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) {
                if (d > 0 and d <= 31) {
                    return valida;
                }
                else return not valida;
            }
            else if (m == 4 or m == 6 or m == 9 or m == 11) {
                 if (d > 0 and d <= 30) {
                    return valida;
                }
                else return not valida;
            }
            else if (m == 2) {
                 if (d > 0 and d <= 28) {
                    return valida;
                }
                else return not valida;
            }
        }
        else return not valida;
    }
    return not valida;
}
