#ifndef MENU.H
#define MENU.H

//enums

enum PrimerMenu {
	RECOGER = 1, DEJAR = 2, DISPARAR = 3, VERARMA = 4, SALIR = 0
};

enum Armas {
	REVOLVER = 1, RIFLE = 2, ESCOPETA = 3, ATRAS = 0
};


//clase view
class View {
private:
	Soldado* soldado;
	Arma* arma;
	int _opcion, _volver;
public:
	//void MostrarMenu(Soldado* soldado);
	View(Soldado* soldado);
	~View();
};



#endif // !MENU.H
