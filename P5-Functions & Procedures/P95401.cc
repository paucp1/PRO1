/*
Feu una funció que indiqui si l’any donat és de traspàs o no. Per recordar les regles sobre els anys de traspàs, consulteu l’exercici ‍.

    bool es_any_de_traspas(int any);
Interfície

C++	
    bool es_any_de_traspas(int any);
C	
    int es_any_de_traspas(int any);
Java	
    public static boolean esAnyDeTraspas(int any);
Python	
    es_any_de_traspas(any)  # returns bool
 	
    es_any_de_traspas(any: int) -> bool
Precondició El paràmetre any està entre 1800 i 9999, ambdós inclosos.

Observació Només cal enviar el procediment demanat; el programa principal serà ignorat.
*/

using namespace std;

bool es_any_de_traspas(int any) {
    bool traspas = false;
    if ((any%4 == 0 and any%100 != 0) or (any%100 == 0 and (any/100)%4 == 0)) traspas = true;
    return traspas;
}
