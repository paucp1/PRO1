/*
Feu una funció que retorni una taula ordenada amb la diferència dels vectors ordenats v1 i v2. El resultat ha de tenir els elements de v1 que no es troben a v2, i sense repetits. Per exemple, el resultat de fer la diferència d’una taula amb 1, 2, 2, 5, 5 i 7 amb una taula amb 2, 3, 3 i 7 és una taula amb 1 i 5.

Interfície

C++	
    vector<double> diferencia(const vector<double>& v1, const vector<double>& v2);
Java	
    public static double[] diferencia(double[] v1, double[] v2);
Python	
    diferencia(v1, v2)  # returns list
MyPy	
    diferencia(v1: list[float], v2: list[float]) -> list[float]
Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<double> diferencia(const vector<double>&v1, const vector<double>&v2) {
    int s1 = v1.size();
    int s2 = v2.size();
    vector<double> aux(s1);
    int i, j, k;
    i = j = k = 0;
    while (i < s1 and j < s2) {
        if (v1[i] < v2[j]) {
            if (k == 0 or v1[i] != aux[k-1]) {
                aux[k] = v1[i];
                ++k;
            }
            ++i;
        }
        else if (v1[i] > v2[j]) ++j;
        else ++i;
    }
    while (i < s1) {
        if (k == 0 or aux[k-1] != v1[i]) {
            aux[k] = v1[i];
            ++k;
        }
        ++i;
    }
    vector<double> dif(k);
    for (i = 0; i < k; ++i) dif[i] = aux[i];
    return dif;
}

/*
int main(){
    int n;
    cin >> n;
    vector<double> v1(n);
    for (int i = 0; i < n; ++i) cin >> v1[i];

    int k;
    cin >> k;
    vector<double> v2(k);
    for (int i = 0; i < k; ++i) cin >> v2[i];

    vector<double> dif;
    dif = diferencia(v1,v2);

    for (int i = 0; i < dif.size(); ++i) {
        if (i > 0) cout << ' ';
        cout << dif[i];
    }
}
*/
