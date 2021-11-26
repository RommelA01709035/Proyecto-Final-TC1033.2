#ifndef Agua_H
#define Agua_H

#include "Provedor.h" 

class Agua/*clase hija*/: public Provedor/*clase padre*/{//herencia
	
	private: //atributos
		float litros;
	
	public: //metodos
		Agua (std::string mar, std::string pro,float lit):Provedor(mar,pro,10.00){litros = lit;}//constructor
		float getLitros(){return litros; }//getters
};



#endif
