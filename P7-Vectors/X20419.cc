/*
Donada una seqüència de paraules, volem saber:

Quina és la longitud mitjana L dels seus mots.
Per a cada mot de longitud igual o superior a L, quina és la lletra més freqüent i, en cas d’empat entre diverses lletres, la més petita d’elles en ordre lexicogràfic.
Per a resoldre el segon punt, el vostre programa ha d’implementar la funció

char lletra_mes_frequent(const string& s);
que retorna la lletra minúscula que apareix més cops a la paraula s (la menor en ordre lexicogràfic, en cas d’empat).

Entrada

L’entrada consisteix en un natural n > 0 seguit de n paraules no buides. Cada paraula está formada només per lletres minúscules.

Sortida

Escriviu la longitud mitjana de les paraules de la seqüència d’entrada fent servir dos decimals de precisió. Escriviu també, per a cada mot de longitud igual o superior a la mitjana, quina és la lletra minúscula que més freqüentment hi apareix (la més petita lexicogràficament, en cas d’empat). Seguiu el format especificat als exemples.

Observació

Recordeu que, per tal de fixar una precisió de d decimals al canal de sortida, cal fer servir les instruccions

cout.setf(ios::fixed);
cout.precision(d);

Si us resulta útil, podeu fer servir la constant LONG_ALFABET, definida com a

const int LONG_ALFABET = ’z’ - ’a’ + 1;
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char lletra_mes_frequent(const string& s) {
    vector<char> char_list(s.begin(), s.end());
    sort(char_list.begin(), char_list.end());
    int c = 1, cmax = 0;
    char p0 = '#', pmax = '#';
    
    for (int i = 0; i < char_list.size(); ++i) {
        if (p0 == char_list[i]) ++c;
        else c = 1;
        
        if (cmax < c) {
            cmax = c;
            pmax = char_list[i];
        }
        p0 = char_list[i];
    }
    return pmax;
}

        
int main () {
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    double suma = 0;
    cin >> n;
    vector<string> l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
        suma = suma + l[i].size();
    }
    double m = suma/n;
    cout << m << endl;
    for (int i = 0; i < n; ++i) {
        if (l[i].size() >= m) {
            char c = lletra_mes_frequent (l[i]);
            cout << l[i] << ": " << c << endl;
        }
    }
}
