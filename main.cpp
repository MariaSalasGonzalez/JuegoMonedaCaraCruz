#include <time.h>
#include <cstdlib> //librería para random
#include <iostream>
using namespace std;

#include "juego.h"
#include "moneda.h"
#include "jugador.h"

int main() {
	srand(time(NULL));
	moneda m;
	string nom;
	cout << "Cual es tu nombre?  ";
	cin >> nom;
	juego j;
	jugador p(nom);
    j.jugar(m, p);          
	cin.get();
	return 0;
}

