/*
La distància de Manhattan entre dos punts amb coordenades enteres en el pla es defineix com el nombre de passos unitaris cap amunt, avall, esquerra o dreta que cal fer per anar d’un punt a l’altre. (Té aquest nom perquè és el nombre d’illes que cal caminar en un barri quadricular per anar d’un encreuament a un altre.)

Per exemple, considereu el punt (1, -2) de la figura de la dreta (el més gros). El punt més proper és el (2, -3), que es troba a distància 2. El punt més llunyà és el (-2, 1), que es troba a distància 6. Excepte el (2, 2), la resta de punts es troben a distància 4.

Feu un programa que, donat un punt (x, y) i n punts (x1, y1), …, (xn, yn), escrigui aquests punts ordenats en funció de la seva distància de Manhattan a (x, y).

(205, 230)(-85, -140) (-80, 0)(1, 0)200 (115, 5)x (0, -140)(0, 1)200 (5, 55)y

(-80, -2)(0, 1)4 (-60, -2)(0, 1)4 (-40, -2)(0, 1)4 (-20, -2)(0, 1)4 (20, -2)(0, 1)4 (40, -2)(0, 1)4 (60, -2)(0, 1)4 (80, -2)(0, 1)4 (100, -2)(0, 1)4

(-2, -140)(1, 0)4 (-2, -120)(1, 0)4 (-2, -100)(1, 0)4 (-2, -80)(1, 0)4 (-2, -60)(1, 0)4 (-2, -40)(1, 0)4 (-2, -20)(1, 0)4 (-2, 20)(1, 0)4 (-2, 40)(1, 0)4

(20, -40)6 (25, -43)(1, -2) (40, -60)4 (45, -63)(2, -3) (20, -120)4 (25, -123)(1, -6) (100, -40)4 (105, -43)(5, -2) (-60, -40)4 (-55, -43)(-3, -2) (-40, -20)4 (-35, -23)(-2, -1) (-40, 20)4 (-53, 25)(-2, 1) (40, 40)4 (45, 37)(2, 2) (60, 0)4 (47, 5)(3, 0)

(20, -45)(0, -1)4 (20, -51)(0, -1)4 (20, -57)(0, -1)3 (20, -60)(1, 0)3 (25, -60)(1, 0)4 (31, -60)(1, 0)4

(20, 20)(0, -1)4 (20, 14)(0, -1)4 (20, 8)(0, -1)4 (20, 2)(0, -1)4 (20, -4)(0, -1)4 (20, -10)(0, -1)4 (20, -16)(0, -1)4 (20, -22)(0, -1)4 (20, -28)(0, -1)4 (20, -34)(0, -1)2

(20, 20)(-1, 0)4 (14, 20)(-1, 0)4 (8, 20)(-1, 0)4 (2, 20)(-1, 0)4 (-4, 20)(-1, 0)4 (-10, 20)(-1, 0)4 (-16, 20)(-1, 0)4 (-22, 20)(-1, 0)4 (-28, 20)(-1, 0)4 (-34, 20)(-1, 0)2

Entrada

L’entrada consisteix només en nombres enters, i està formada per una línia amb x i y, una línia amb n, i per una o més línies amb les coordenades dels n punts: x1, y1, x2, y2, …, xn, yn. Podeu suposar 0 ≤ n ≤ 105. Els n punts són tots diferents, i venen donats en qualsevol ordre.

Sortida

Escriviu els n punts agrupats segons la seva distància a (x, y). Si dos punts es troben a la mateixa distància, cal escriure primer aquell que tingui la primera coordenada més petita i, en cas d’empat, el que tingui la segona coordenada més petita. Seguiu el format dels exemples.

Observació

El vostre algorisme ha de ser eficient en tots els casos, perquè n pot ser gran, i perquè els jocs de proves privats inclouran casos límit com ara molts punts a la mateixa distància.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Punt {
    int x, y;
};

int dist(const Punt& p) {
    return abs(p.x) + abs(p.y);
}

bool comp(const Punt& p1, const Punt& p2) {
    int d1 = dist(p1);
    int d2 = dist(p2);
    if (d1 != d2) return d1 < d2;
    if (p1.x != p2.x) return p1.x < p2.x;
    return p1.y < p2.y;
}

int main() {
    int x, y, n, a, b;
    cin >> x >> y >> n;
    vector<Punt> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        v[i].x = a - x;
        v[i].y = b - y;
    }

    sort(v.begin(),v.end(),comp);

    int d_pre = -1;
    for (int i = 0; i < n; ++i) {
        int d = dist(v[i]);
        if (d > d_pre) {
            cout << "punts a distancia " << d << endl;
            d_pre = d;
        }
        cout << v[i].x + x << ' ' << v[i].y + y << endl;
    }
}
