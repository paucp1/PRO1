#include <iostream>
using namespace std;

/*
Donada una seqüència de paraules, escriviu la longitud de la subseqüència consecutiva més llarga que només conté la primera paraula. És a dir, si la seqüència és s1, …, sn, cal escriure

màx{j − i + 1 : 1 ≤ i ≤ j ≤ n ∧ si = si+1 = … = sj−1 = sj = s1 } .
Entrada

L’entrada consisteix en una seqüència no buida de paraules.

Sortida

Cal escriure el nombre de paraules de la subseqüència consecutiva més llarga que només conté la primera paraula.
*/

int main () {
    int lseq = 1;
    int max = 1;
    string p, act;
    cin >> p;
    
    while (cin >> act and act != ".") {
        if (act == p) {
            ++lseq;
            if (max < lseq) max = lseq;
        }
        
        else {
            lseq = 0;
        }
    }
    
    cout << max << endl;
}
