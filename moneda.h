
#ifndef MONEDA_H
#define MONEDA_H

#include <iostream>
#include <time.h>
#include <string>
using namespace std;

class moneda {
private:
	string estado;
public:
	moneda();
	 void jugar();
	 string getEstado();
};

#endif /* DADO_H */
