/*
Feu un procediment

    void descompon(int n, int& h, int& m, int& s);
que, donada una quantitat de segons n ≥ 0, calculi quantes hores h, minuts m i segons s representa. És a dir, cal que s + 60m + 3600h = n, amb 0≤ s <60 i 0≤ m <60.

Precondició

n és un natural.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

using namespace std;

void descompon(int n, int& h, int& m, int& s) {
    h = n/3600;
    m = (n%3600)/60;
    s = (n%3600)%60;
}
