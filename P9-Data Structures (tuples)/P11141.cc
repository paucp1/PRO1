/*
Usant la definició

    struct Estudiant {
        int dni;
        string nom;
        double nota;        // La nota és un valor entre 0 i 10, o -1 que representa NP
        bool repetidor;
    };
implementeu l’acció

    void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj)
que calculi la nota mínima (min), la nota màxima (max) i la nota mitjana (mitj) de tots els estudiants de la taula es que s’hagin presentat i que no siguin repetidors. Si no hi ha cap estudiant no repetidor presentat, el valor d’aquestes tres variables ha de ser −1.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat. Seguiu estrictament la definició dels tipus de l’enunciat.
*/

#include <iostream>
#include <vector>
using namespace std;

struct Estudiant {
    int dni;
    string nom;
    double nota;        // La nota Ã©s un valor entre 0 i 10, o -1 que representa NP
    bool repetidor;
};

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj) {
    min = 11;
    max = -1;
    double suma = 0;
    int valids = 0;
    for (int i = 0; i < es.size(); ++i) {
        if (es[i].nota != -1 and not es[i].repetidor) {
            ++valids;
            suma = suma + es[i].nota;
            if (es[i].nota < min) min = es[i].nota;
            if (es[i].nota > max) max = es[i].nota;
        }
    }
    
    if (valids != 0) {
        mitj = suma/valids;
    }
    else {
        min = -1;
        max = -1;
        mitj = -1;
    }
}
