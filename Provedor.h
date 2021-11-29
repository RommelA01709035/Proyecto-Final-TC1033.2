#ifndef Provedor_H
#define Provedor_H

#include<iostream>
#include<stdlib.h>
#include<string.h>

 

class Provedor/*clase*/{
	private://atributos  
		std::string marca;
		std::string producto; 
		float precio;
		 
	
	public: //metodos
		Provedor(){}
		Provedor(std::string mar, std::string pro, float pre){
			marca = mar; 
			producto = pro;  
			precio = pre;  			 
		}
		
		//getters y setters agrupados
		std::string getMarca(){return marca; }
		std::string getProducto(){return producto; }
		int getPrecio(){return precio;}
		void setPrecio (int pre){precio = pre;}
		void setMarca (std::string mar){marca = mar;}
		void setProducto (std::string pro){producto = pro;}
		
};



#endif
