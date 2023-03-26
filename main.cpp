#include "model/model.h"
#include "view/view.h"
class Soldado;
class Arma;
class View;

int main() {
	Soldado soldado;
	Soldado* soldadoptr;
	soldadoptr = &soldado;
	View vista(soldadoptr);
	soldadoptr = nullptr;
	return 0;
}
