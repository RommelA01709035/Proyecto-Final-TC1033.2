#ifndef Pedido_H		//se utiliza mucho la clase asi que mejor
#define Pedido_H		//la definimos

#include "Comida.h"		//incluyo mis archivos
#include "Provedor.h"
//bibliotecas
#include<iostream>
#include<stdlib.h>
#include<string.h>
 

class Pedido/*clase que se agrega*/{
	private://declaro atributos  
		int cantidad;
		std::string id; 
		Comida prov; //agregación
		 
	
	public: //declaro metodos
		Pedido(){}//constructor con llaves para listas
		Pedido(std::string ID,int cant, Comida PROVEDOR){
			cantidad = cant; 
			id = ID;  
			prov = PROVEDOR;  			 
		}//constructor con la agregación
		
		//getters agrupados
		int getcantidad(){return cantidad; }
		std::string getid(){return id; }
		Comida getprov(){return prov;} 
		
		//setters agrupados
		void setcantidad (int cant){cantidad = cant;}
		void setprov (Comida PROVEDOR){prov = PROVEDOR;}
		
};



#endif
