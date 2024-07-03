/*
Un riu digital és una seqüència de nombres on el nombre que segueix n és n més la suma dels seus dígits. Per exemple, 12345 ve seguit de 12360, perquè 12345+1+2+3+4+5 = 12360.

Si el primer número d’un riu digital és k, llavors anomenem aquella seqüència riu k. Per exemple, el riu 480 és la sequencia 480, 492, 507, 519, ‍... i el riu 483 és la seqüència 483, 498, 519, ‍...

Igual que els rius amb aigua, els rius digitals poden trobar-se. Això passa quan dos rius digitals comparteixen alguns dels seus valors. Per exemple: El riu 480 es troba amb el riu 483 al valor 519, i es troba amb el riu 507 al valor 507. En canvi, mai es troba amb el riu 481.

Es pot demostrar que qualsevol riu digital es trobarà eventualment amb el riu 1, el riu 3 o el riu 9. Per això, feu la funció

    int trobada_de_rius(int n);
que, donat un natural n, retorni el primer valor per al qual el riu n troba els rius 1, 3 o 9.

Precondició

Es té 1≤ n ≤16384.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.

Aquest problema prové de la “The British Informatics Olympiad for schools and colleges”.
*/

#include <iostream>
using namespace std;
 
int suma_de_digits(int riu) {
	int n = riu;
	while (riu > 0) {
		n += riu%10;
		riu /= 10;
	}
	return n;
}
 
int trobada_de_rius(int n) {
	int riu1 = 1;
	int riu3 = 3;
	int riu9 = 9;
	while (n!= riu1 and n != riu3 and n != riu9) {
		while (riu1 < n) riu1 = suma_de_digits(riu1);
		while (riu3 < n) riu3 = suma_de_digits(riu3);
		while (riu9 < n) riu9 = suma_de_digits(riu9);
		if (n != riu1 and n != riu3 and n != riu9) n = suma_de_digits(n);
	}
	return n;
}
