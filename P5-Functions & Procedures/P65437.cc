/*
Escriviu un procediment

    void swap2(int& a, int& b);
que intercanvïi el valor dels seus paràmetres.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

using namespace std;

void swap2(int& a, int& b) {
    int aux = a;
    a = b;
    b = aux;
}
