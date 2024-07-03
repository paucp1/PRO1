/*
Feu una funció que, donat un natural x, retorni la reducció dels seus dígits.

Interfície

C++	
    int reduccio_digits(int x);
C	
    int reduccio_digits(int x);
Java	
    public static int reduccioDigits(int x);
Python	
    reduccio_digits(x)  # returns int
 	
    reduccio_digits(x: int) -> int
En aquest exercici, direm que reduir els dígits d’un nombre consisteix a calcular la suma dels seus dígits. Si la suma és un dígit, aquest ja és el resultat. Altrament, es torna a aplicar el mateix procés a la suma obtinguda, fins a tenir un sol dígit.

Resoleu aquest problema utilitzant la funció recursiva que retorna la suma dels dígits d’un natural x.

Interfície

C++	
    int suma_digits(int x);
C	
    int suma_digits(int x);
Java	
    public static int sumaDigits(int x);
Python	
    suma_digits(x)  # returns int
 	
    suma_digits(x: int) -> int
Precondició

x és un natural.

Observació

Encara que hi ha un truc matemàtic per resoldre aquest problema més ràpidament que sumant dígits, no el feu servir aquí.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

   
#include <iostream>
using namespace std;

int suma_digits (int x) {
    if (x <= 9) return x;
    else return x%10 + suma_digits (x/10);
}

int reduccio_digits (int x) {
    if (suma_digits(x) <= 9) return suma_digits(x);
    else return reduccio_digits (suma_digits (x));
}

int main () {
    int x;
    cin >> x;
    cout << reduccio_digits (x) << endl;
}
