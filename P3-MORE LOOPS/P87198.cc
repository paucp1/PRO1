#include <iostream>
using namespace std;

/*
Feu un programa que per a cada n donada escrigui “un octàgon de mida n”, segons el patró que es pot veure en els exemples.

Entrada

L’entrada consisteix en diversos naturals n ≥ 2.

Sortida

Per a cada n, escriviu un “octàgon de mida n” usant ics majúscules. No escrigueu cap espai a la dreta de les ics. Escriviu una línia buida després de cada octàgon.
*/

int main () {
    int n;
    
    while (cin >> n) {
        int e = 1;
        
        for (int i = 0; i < n - 1; ++i) {
            
            for (int j = 0; j < n - e; ++j) {
                cout << " ";
            }
            
            for (int j = 0; j < n + 2*i; ++j) {
                cout << "X";
            }
            
            cout << endl;
            e = e + 1;
        }
        
        e = n;
        
        for (int i = 0; i < n; ++i) {
            
            for (int j = 0; j < n + (2*(n - 1)); ++j) {
                cout << "X";
            }
            
            cout << endl;
        }
        
        int num = 0;
        
        for (int i = 0; i < n - 1; ++i) {
            
            for (int j = 0; j < n - (e - 1); ++j) {
                cout << " ";
            }
            
            for (int j = 0; j < n + (2*(n - 1)) - 2 - (num*2); ++j) {
                cout << "X";
            }
            
            num = num + 1;
            e = e - 1;
            cout << endl;
        }
        
        cout << endl;
    }
}
