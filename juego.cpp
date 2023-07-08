#include <iostream>
using namespace std;

#include "juego.h"

juego::juego() {
	canJuegos = 0;
}

void juego::jugar(moneda m, jugador j) {
	string x;
	int numjuego = 0;
	string esperado;
	int con ;
	cout << "Desea jugar (si o no): ";
	cin >> x;
	while (x =="si") {
		int i = 1;
		cout << "Que eliges (cara o cruz)?  " ;
		cin >> esperado;
		cin.clear();
		cin.ignore(1024, '\n');
		con = 0;
		numjuego++;
		cout << endl;
		while (i <= 5)
		{
			j.lanzar(m);
			cout << "tiro #"<<i << ",  salio: " << m.getEstado() <<    " <ENTER>";
			cin.get();
			if (m.getEstado() == esperado) {
				con++;
			}
		
			i++;
		}
		canJuegos++;
		(con>=3) ? j.incrementarGanes() : j.incrementarPierdes();
		(con >= 3) ? cout<<endl<<"GANASTE!!!"<<endl : cout <<endl << "PERDISTE!!!" << endl;
		cout << endl << endl;

		cout << "\t\t -Juego #:" << numjuego << endl;
		cout << "\t\t -Nombre:" << j.getNickname() << endl;
		cout << "\t\t -Juegos realizados:" << j.getJuegosGanados() + j.getJuegosPerdidos() << endl;
		cout << "\t\t -Juegos ganados:" << j.getJuegosGanados()  << endl;
		cout << "\t\t -Juegos perdidos:" <<  j.getJuegosPerdidos() << endl << endl;

		cout <<endl<< "Desea jugar nuevamente? (si o no)   ";
		cin >> x;
		system("cls"); //limpiar pantalla
	}
}