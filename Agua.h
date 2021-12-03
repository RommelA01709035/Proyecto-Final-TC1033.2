/*-Proyecto: Registro de pedidos
-Rommel Pacheco Hernández 
-A01709035
02/12/2021
*/
#ifndef Agua_H	//se utiliza mucho la clase asi que mejor
#define Agua_H	//la definimos

#include "Provedor.h" //incluimos clase abstracta

class Agua/*clase hija*/: public Provedor/*clase padre*/{//herencia
	
	private: // declaro su atributo(s)
		float litros;
	
	public: //declaro sus metodo(s)
		Agua(); //Constructor default
		
		Agua (std::string mar, std::string pro,float lit):Provedor(mar,pro,10.00){litros = lit;}
		//constructor asimilando variables heredadas
		float getLitros(){return litros; }//getter que retorna los litros
};



#endif
