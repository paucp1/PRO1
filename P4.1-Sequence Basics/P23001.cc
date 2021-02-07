#include <iostream>
using namespace std;

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
