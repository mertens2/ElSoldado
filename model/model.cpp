#include<iostream>
#include "../view/view.h"
#include "model.h"

class View;

using namespace std;

void Arma::Disparar() {
	if (this->nombre == "Revolver") {
		cout << "PUM!";
	}
	else if (this->nombre == "Rifle") {
		cout << "PUM PUM PUM!";
	}
	else {
		cout << "PAM!";
	}
}


Soldado::~Soldado() {
	_arma->nombre = ".";
	_arma = NULL;
}
void Soldado::RecogerArma(Arma* arma) {
	if (!this->TieneArma()) {
		_arma = arma;
	}
	else {
		cout << "Parece que el Soldado ya tiene un arma en sus manos...";
	}
}

void Soldado::DejarArma() {
	if (this->TieneArma()) {
		this->_arma = NULL;
	}
	else {
		cout << "Parece que el soldado no tiene ningun arma en sus manos...";
	}
}

void Soldado::JalarGatillo() {
	if (this->TieneArma()) {
		_arma->Disparar();
	}
	else {
		cout << "Parece que el soldado no tiene ningun arma en sus manos...";
	}
}

void Soldado::VerArma() {
	if (this->TieneArma()) {
		cout << "El arma siendo usada es: " << _arma->nombre;
	}
	else {
		cout << "Parece que el soldado no tiene ningun arma en sus manos...";
	}
}

bool Soldado::TieneArma() {
	if (this->_arma) {
		return true;
	}
	else {
		return false;
	}
}