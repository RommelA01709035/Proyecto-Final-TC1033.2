#ifndef comida_H
#define comida_H

#include "Provedor.h"

class Comida/*clase hija*/: public Provedor/*clase padre*/{
	
	private: //atributos
		int piezas; 
	
	public: //metodos
		Comida(){}
		
		Comida (std::string mar, std::string pro, int pie): Provedor(mar,pro,15)
		{piezas = pie;}
	
		int getPiezas(){return piezas;}
};


#endif
