/*-Proyecto: Registro de pedidos
-Rommel Pacheco Hernández 
-A01709035
02/12/2021
*/
#ifndef Provedor_H//se utiliza mucho la clase asi que mejor
#define Provedor_H//la definimos

//incluimos bibliotecas
#include<iostream>
#include<stdlib.h>
#include<string.h>

 

class Provedor/*clase abstracta*/{
	protected://declaro su s atributos 
		std::string marca;
		std::string producto; 
		float precio;
		 
	
	public: //declaro sus metods 
		Provedor(){} //Constructor default que incluye listas
		Provedor(std::string mar, std::string pro, float pre){
			marca = mar; 
			producto = pro;  
			precio = pre;  			 
		}//constructor asimilando variables heredadas
		
		//getters agrupados 
		std::string getMarca(){return marca; }
		std::string getProducto(){return producto; }
		int getPrecio(){return precio;}
		// setters agrupados
		void setPrecio (int pre){precio = pre;}
		void setMarca (std::string mar){marca = mar;}
		void setProducto (std::string pro){producto = pro;}
		
};



#endif
