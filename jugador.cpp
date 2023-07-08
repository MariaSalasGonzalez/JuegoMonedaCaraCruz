
#include <iostream>
using namespace std;

#include "jugador.h"

jugador::jugador(string pnickname) :
	juegosPerdidos(0), juegosGanados(0), nickname(pnickname) {
}

int jugador::getJuegosPerdidos() {
	return juegosPerdidos;
}

int jugador::getJuegosGanados() {
	return juegosGanados;
}
string jugador::getNickname()  {
	return nickname;
}
void  jugador::setNickname(string n){
	nickname = n;
}

void jugador::lanzar(moneda& m) {
	m.jugar();
//	return m.getEstado();
}


void jugador::incrementarGanes() { juegosGanados++; };
void jugador::incrementarPierdes() { juegosPerdidos++; };
