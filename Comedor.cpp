#include<iostream>

#include<string> 

#include "comida.h"
#include "Provedor.h"
#include "Agua.h"

int main(){
	
	
	Comida Pollo ("Pollos Juanito","Pollo",17.00); //creando el objeto Pollo con su clase Comida
	Agua AguaLimon ("La Michoacana","Agua de Limon",10.20);//creando el objeto AguaLimon con su clase Agua 
	
	
	std::cout<<Pollo.getMarca()<<std::endl; 
	std::cout<<Pollo.getProducto()<<std::endl;  //Imprimiendo Caracteristicas del producto
	std::cout<<Pollo.getPrecio()<<std::endl; 
	std::cout<<Pollo.getPiezas()<<std::endl;
	
	
	std::cout<<AguaLimon.getMarca()<<std::endl; 
	std::cout<<AguaLimon.getProducto()<<std::endl; //Imprimiendo Caracteristicas del producto
	std::cout<<AguaLimon.getPrecio()<<std::endl;
	std::cout<<AguaLimon.getLitros()<<std::endl; 
	
	
	
	
}
