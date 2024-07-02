#include <iostream>
using namespace std;

/*
Feu un programa que passi una quantitat donada d’anys, dies, hores, minuts i segons a segons.

Entrada

L’entrada consisteix en cinc naturals corresponents als anys, dies, hores, minuts i segons, respectivament.

Sortida

Escriviu el nombre total de segons corresponents a l’entrada.

Observació

Podeu assumir que tots els anys tenen 365 dies.
*/

int main () {
    int y, d, h, m, s;
    cin >> y >> d >> h >> m >> s;
    int seg_year = 365*24*60*60;
    int seg_day = 24*60*60;
    int seg_hour = 60*60;
    int seg_minute = 60;
    cout << (y*seg_year)+(d*seg_day)+(h*seg_hour)+(m*seg_minute)+(s) << endl;
}
