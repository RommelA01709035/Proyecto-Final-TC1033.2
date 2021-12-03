/*-Proyecto: Registro de pedidos
-Rommel Pacheco Hernández 
-A01709035
02/12/2021
*/

#ifndef Comida_H//se utiliza mucho la clase asi que mejor
#define Comida_H//la definimos

#include "Provedor.h"//incluimos clase abstracta

class Comida/*clase hija*/: public Provedor/*clase abstracta*/{
	
	private: //declaro atributo(s)
		int piezas; 
	
	public: //declaro metodosmetodos
		Comida(){} // constructor default con listas
		
		Comida (std::string mar, std::string pro, int pie): Provedor(mar,pro,15)
		{piezas = pie;}
		//constructor asimilando variables heredadas
		
	
		int getPiezas(){return piezas;}
};


#endif
