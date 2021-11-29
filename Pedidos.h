#ifndef Pedidos_H
#define Pedidos_H
#include "Comida.h"
#include "Provedor.h"
#include<iostream>
#include<stdlib.h>
#include<string.h>
 

class Pedidos/*clase*/{
	private://atributos  
		int cantidad;
		std::string id; 
		Comida prov;
		 
	
	public: //metodos
		Pedidos(){}
		Pedidos(std::string ID,int cant, Comida PROVEDOR){
			cantidad = cant; 
			id = ID;  
			prov = PROVEDOR;  			 
		}
		
		//getters y setters agrupados
		int getcantidad(){return cantidad; }
		std::string getid(){return id; }
		Comida getprov(){return prov;} 
		
		void setcantidad (int cant){cantidad = cant;}
		void setprov (Comida PROVEDOR){prov = PROVEDOR;}
		
};



#endif
