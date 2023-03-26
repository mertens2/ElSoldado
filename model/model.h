
#ifndef MODEL_H
#define MODEL_H

#include <string>
class Arma {
public:
	string nombre = ".";
	void Disparar();
};

//clase soldado

class Soldado {
	Arma* _arma;
public:
	void RecogerArma(Arma* arma);
	void DejarArma();
	void JalarGatillo();
	void VerArma();
	~Soldado();
	bool TieneArma();
};
#endif // !1