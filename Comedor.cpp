#include<iostream>
 
#include<string> 

#include "comida.h"
#include "Provedor.h"
#include "Agua.h"
#include "Pedidos.h"

Comida listaProv [100];
int numid = 0;

Pedidos listaPedidos[100];
int numped =0;

void agregar_provedorde_comida();
void Crear_pedido();

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
	
	agregar_provedorde_comida();		//funciones para hacer agregación
	Crear_pedido();						//funciones para hacer agregación
	
	std::cout<<listaPedidos[0].getprov().getMarca()<<" pedidos: "<<listaPedidos[0].getcantidad() 
	<<" y su ID es: "<<listaPedidos[0].getid()<<std::endl;
	//imprimo datos de pedidos de la casilla 0
	
	std::cout<<listaProv[1].getProducto()<<"de la marca "<<listaProv[1].getMarca()<<" pedidos: " 
	<<listaPedidos[1].getcantidad()<<std::endl;
	// imprimo datos de pedidos y del provedor de casilla 1
	
	std::cout<<listaProv[2].getProducto()<<"de la marca "<<listaProv[2].getMarca()
	<<" pedidos: "<<listaPedidos[2].getcantidad()<<std::endl;
	
	std::cout<<listaPedidos[1].getcantidad()<<std::endl;
	
}

void agregar_provedorde_comida(){          //funcion para agregar datos del objeto  en un arreglo
	Comida Pollo ("Pollos Juanito","Pollo",25.00);
	listaProv[numid] = Pollo;
	numid++;								//
	Comida torta ("DE tortas a Tortotas","torta",30.00);
	listaProv[numid] = torta;
	numid++;
	Comida carne ("Carnitas el Goku","Carnitas Krilin",50.00);
	listaProv[numid] = carne;
	numid++;
}

void Crear_pedido(){
	Pedidos Pollo ("01",25,listaProv[0]); // datos para crear un pedido usando un arreglo
	listaPedidos[numped] = Pollo;
	numped++;
	
	Pedidos torta ("02",35,listaProv[1]);
	listaPedidos[numped] = torta;
	numped++;
	
	Pedidos carne ("03",80,listaProv[2]);
	listaPedidos[numped] = carne;
	numped++;
}
