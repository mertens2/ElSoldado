#include<iostream>
#include "view.h"
#include "../model/model.h"

class Soldado;
class Arma;
using namespace std;

//clase menu


View::View(Soldado* soldado) {
	Arma arma;
	Arma* armaptr;
	armaptr = &arma;
	do {
		_volver = 1;
		cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-\n\n¿Qué desea hacer?\n(presione el número correspondiente a la opción del menú)\n\n1- Recoger \n2 - Dejar arma\n3 - Disparar\n4 - Ver arma en uso\n0 - Salir\n\nRespuesta: ";
		cin >> _opcion;
		switch (_opcion) {
		case RECOGER:
				if (!soldado->TieneArma()) {
					cout << "Por favor, escoja el arma que desea utilizar:\n\n(presione el número correspondiente a la opción del menú)\n\n1- Revolver \n2 - Rifle\n3 - Escopeta\n0 - Atrás\n\nRespuesta: ";
					cin >> _opcion;
					switch (_opcion)
					{
					case REVOLVER:
						armaptr->nombre = "Revolver";
						soldado->RecogerArma(armaptr);
						break;
					case RIFLE:
						armaptr->nombre = "Rifle";
						soldado->RecogerArma(armaptr);
						break;
					case ESCOPETA:
						armaptr->nombre = "Escopeta";
						soldado->RecogerArma(armaptr);
						break;
					case ATRAS:
						_volver = 0;
						break;
					default:
						cout << "Opción incorrecta.";
						_volver = 0;
						break;
					}
				}
				else {
					cout << "Parece que el Soldado ya tiene un arma en sus manos...";
				}
				cout << "\n¿Continuar operaciones? \n1-Si\n2-No\n\nRespuesta: ";
				cin >> _opcion;
				if (_opcion == 1) {
					_volver = 0;
				}
			break;
		case DEJAR:
			soldado->DejarArma();
			cout << "\n¿Continuar operaciones? \n1-Si\n2-No\n\nRespuesta: ";
			cin >> _opcion;
			if (_opcion == 1) {
				_volver = 0;
			}
			break;
		case DISPARAR:
			soldado->JalarGatillo();
			cout << "\n¿Continuar operaciones? \n1-Si\n2-No\n\nRespuesta: ";
			cin >> _opcion;
			if (_opcion == 1) {
				_volver = 0;
			}
			break;
		case VERARMA:
			soldado->VerArma();
			cout << "\n¿Continuar operaciones? \n1-Si\n2-No\n\nRespuesta: ";
			cin >> _opcion;
			if (_opcion == 1) {
				_volver = 0;
			}
			break;
		case SALIR:
			break;
		default:
			cout << "opcion incorrecta. intentar de nuevo.";
			_volver = 0;
		}
	} while (_volver <= 0);
}

View::~View() {
	arma = nullptr;
	soldado = nullptr;
	_opcion = 0;
	_volver = 0;
}