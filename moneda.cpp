

#include "moneda.h"

moneda::moneda() {
	jugar();
	cout << "Se crea una moneda" << endl;
}


void moneda::jugar() {
	int x = rand() %  2;
	x == 0 ? estado = "cara" : estado = "cruz";
}


string moneda::getEstado()
{
	return estado;
}
