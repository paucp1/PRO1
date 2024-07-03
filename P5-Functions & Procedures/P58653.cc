/*
Feu un programa que llegeixi un caràcter i que indiqui si és una lletra, si és una vocal, si és una consonant, si és una lletra majúscula, si és una lletra minúscula, i si és un dígit.

Per comoditat a l’hora de resoldre aquest exercici, useu el procediment

    void escriu_linia(char c, string s, bool b) {
        cout << s << "('" << c << "') = ";
        if (b) cout << "cert" << endl;
        else cout << "fals" << endl;
    }
que escriu en una línia si el caràcter c és un s o no, en funció del booleà b. Per exemple, la crida escriu_linia(’J’, "lletra", true); escriu la primera línia del primer exemple de sortida.

Entrada

L’entrada consisteix en un caràcter dels que es pot escriure, com ara una lletra, o un dígit, o un símbol de puntuació.

Sortida

Indiqueu si el caràcter donat és una lletra, una vocal, una consonant, una lletra majúscula, una lletra minúscula i un dígit, seguint el format dels exemples.
*/

#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) {
         cout << s << "('" << c << "') = ";
         if (b) cout << "cert" << endl;
         else cout << "fals" << endl;
     }
     
int main () {
    char c;
    cin >> c;
    
    string ll = "lletra";
    bool es_ll = false;
    if ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z')) es_ll = true;
    escriu_linia (c, ll, es_ll);
    
    string vo = "vocal";
    bool es_vo = false;
    if (c == 'a' or c == 'A' or c == 'e' or c == 'E' or c == 'i' or c == 'I' or c == 'o' or c == 'O' or c == 'u' or c == 'U') es_vo = true;
    escriu_linia (c,vo, es_vo);
    
    string co = "consonant";
    bool es_co = false;
    if ( not es_vo and ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z'))) es_co = true;
    escriu_linia (c, co, es_co);
    
    string ma = "majuscula";
    bool es_ma = false;
    if (c >= 'A' and c <= 'Z') es_ma = true;
    escriu_linia (c, ma, es_ma);
    
    string mi = "minuscula";
    bool es_mi = false;
    if (c >= 'a' and c <= 'z') es_mi = true;
    escriu_linia (c, mi, es_mi);
    
    string di = "digit";
    bool es_di = false;
    if (c >= '0' and c <= '9') es_di = true;
    escriu_linia (c, di, es_di);
}
