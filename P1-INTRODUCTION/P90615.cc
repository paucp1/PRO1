using namespace std;
/*
Feu un programa que llegeixi tres nombres i que n’escrigui el màxim. Aquest exercici és una mica més difícil que ‍.

Entrada

L’entrada consisteix en tres enters.

Sortida

Cal escriure una línia amb el màxim dels tres nombres.
*/

int main () {
    int x, y, z;
    cin >> x >> y >> z;
    
    if (x >= y and x >= z) {
        cout << x << endl;
    }
    
    else if (y >= z) {
        cout << y << endl;
    }
    
    else cout << z << endl;
}
