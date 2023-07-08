#ifndef JUEGO_H
#define JUEGO_H

#include "moneda.h";
#include "jugador.h";

class juego {

private:
	int canJuegos;
public:
	juego();
	void jugar(moneda, jugador);
};

#endif /* JUEGO_H */
