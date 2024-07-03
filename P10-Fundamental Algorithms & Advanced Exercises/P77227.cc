/*
Sigui v un vector de nombres enters. Començant en una posició p qualsevol de v, salteu pel vector segons indica el valor de v[p]: si és positiu, cal saltar d’un sol cop v[p] passos cap a la dreta; si és negatiu, cal saltar d’un sol cop −v[p] passos cap a l’esquerra. El procés es repeteix per sempre, a no ser que se surti del vector, ja sigui per la banda dreta o per la banda esquerra.

Feu una funció

    string sortida(int p, vector<int>& v);
que retorni “esquerra”, “dreta” o “mai” segons se surti per l’esquerra, per la dreta o no se surti mai.

Precondició

0 ≤ p < v.size()

Observació

El valor que tingui v al final no és important. A més, fixeu-vos que no s’ha declarat constant. Aprofiteu-vos d’aquest fet per escriure una funció com més eficient millor.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
#include <vector>
using namespace std;

string sortida(int p, vector<int>& v) {
    int tam = v.size();
    vector<bool> aux(tam, false);
    while(not aux[p]) {
        aux[p] = true;
        if (v[p] > 0) {
            if (p+v[p] >= tam) return "dreta";
            p += v[p];
        } else if (v[p] < 0) {
            if (p+v[p] < 0) return "esquerra";
            p += v[p];
        }
    }
    return "mai";
}

/*
int main() {
    int vs, p;
    cin >> vs;
    vector<int> v(vs);
    for (int i = 0; i < vs; ++i) cin >> v[i];
    while (cin >> p) cout << sortida(p, v) << endl;
}
*/
