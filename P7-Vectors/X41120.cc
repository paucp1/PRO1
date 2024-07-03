/*
Podem descriure el perfil de desnivell d’una excursió per la muntanya mitjançant les alçades (respecte al nivell del mar) de diferents punts consecutius del trajecte. Una forma d’emmagatzemar aquesta informació i representar així el perfil muntanyós és mitjançant un vector que guardi les alçades de diferents punts del trajecte i, en particular, dels cims que hi travessa.

Per exemple, el vector

v = [0, 250, 515, 880, 430, 990, 1300, 1000, 700, 400, 0]
descriu l’ascenció a dues muntanyes amb punt de partida i retorn a nivell del mar. El primer cim del trajecte s’hi troba a 880m, i el segon a 1300m.

Escriviu un programa que, donat un perfil muntanyós representat en un vector, calculi el nombre de cims que conté i quins d’aquests cims són més alts que l’últim cim del perfil.

El vostre programa ha d’implementar i fer servir la següent funció:

// PRE: |v|≥ 3

// POST: retorna un vector amb l’alçada de tots els cims de v (en el mateix ordre)

 vector<int> calcula_cims(const vector<int>& v);
que, donat un vector v que representa un perfil muntanyós, retorna un vector w (amb |w|<|v|) amb tots els cims de v en el mateix ordre que hi apareixen. El vector retornat només conté els cims de v.

Entrada

L’entrada està formada per un natural n≥ 3 que indica el nombre de punts del perfil muntanyós. A continuació s’hi troben els n registres d’alçada dels diferents punts del trajecte. Les alçades són nombres enters.

Sortida

Cal indicar el nombre total de cims que té el perfil muntanyós descrit a l’entrada i les seves alçades. A continuació, l’alçada d’aquells cims que siguin més alts que l’últim cim descrit al perfil. En cas de no haver-hi cap cim al perfil, o de no haver-hi cims més alts a l’últim, cal indicar-ho convenientment.

Seguiu el format especificat als exemples. El vostre codi ha de seguir bones normes d’estil, i ha de contenir els comentaris que considereu oportuns.
  */

#include <iostream>
#include <vector>
using namespace std;

vector<int> calcula_cims(const vector<int>& v) {
    int m = v.size();
    vector<int> calc;
    for (int i = 1; i < m - 1; ++i) {
        if (v[i] > v[i - 1] and v[i] > v[i + 1]) {
            calc.push_back(v[i]);
        }
    }
    return calc;
}

int main () {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    vector<int> aux = calcula_cims(v);
    cout << aux.size() << ":";
    if (aux.size() != 0) {
        cout << " ";
        for (int i = 0; i < aux.size(); ++ i) {
            cout << aux[i];
            if (i != aux.size() - 1) cout << " ";
        }
    }
    cout << endl;
    bool algun = false;
    if (aux.size() != 0) {
    vector<int> x;
    for (int i = 0; i < aux.size() - 1; ++i) {
        if (aux[aux.size() - 1] < aux[i]) {
            x.push_back(aux[i]);
            algun = true;
        }
    }
    for (int i = 0; i < x.size(); ++i) {
        cout << x[i];
        if (i != x.size() - 1) cout << " ";
    }
    }
    if (not algun or aux.size() == 0) cout << "-";
    cout << endl;
}
