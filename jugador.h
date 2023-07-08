#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
using namespace std;
#include "moneda.h"

class jugador {
private:
	int juegosPerdidos;
	int juegosGanados; 
	string nickname;
public:
	jugador(string);
	int getJuegosPerdidos();
	int getJuegosGanados();
	void incrementarGanes();
	void incrementarPierdes();
	string getNickname() ;
	void setNickname(string);
	void lanzar(moneda&);
};

#endif /* JUGADOR_H */

