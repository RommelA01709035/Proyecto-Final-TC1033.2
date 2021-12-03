/*
-Proyecto: Registro de pedidos
-Rommel Pacheco Hernández 
-A01709035
02/12/2021

Descripcion: Este es mi proyecto final para la clase de
"pensamiento computacional orientada a objetos" y su funcionamiento
es para registrar los productos que traen los provedores frecuentes
 con respecto a los pedidos

*/



//bibliotecas
#include<iostream> // para poder imprimir
#include<string> 	//para el uso de string con std

//Archivos de mis clases para el proyecto
#include "Comida.h"
#include "Provedor.h"
#include "Agua.h"
#include "Pedido.h"

Comida listaProv [100];//arreglo que cree para apartar memoria
int numid = 0; //contador de listaProv

Pedido listaPedidos[100];//arreglo que cree para apartar memoria
int numped =0; //contador mi listaPedidos

void agregar_provedorde_comida(); //funcionnes de Agregación
void Crear_pedido();


void menu(){ //nuestro menu de opciones que puedes hacer
	std::cout<<"\n \n menu \n";
	std::cout<<"1.-Empezar programa \n";
	std::cout<<"Cualquier numero.-Salir \n";
}



//Procedimiento
int main(){
	
	
	int opcion; //variable para escoger opcion de salir o empezar
	opcion=1;
	
	int continua;//variable para ciclar el prgrama
	continua=0;
	
	while(continua ==0){ //ciclo del programa
		menu();
		std::cin>>opcion;
		if(opcion==1){ //condicional para escoger la opcion que quieras
		
		
		Comida Pollo ("Pollos Juanito","Pollo",17.00); //creando el objeto Pollo con su clase Comida
		Agua AguaLimon ("La Michoacana","Agua de Limon",10.20);//creando el objeto AguaLimon con su clase Agua 
	
		std::cout<<AguaLimon.getMarca()<<std::endl; 
		std::cout<<AguaLimon.getProducto()<<std::endl; //Imprimiendo Caracteristicas del producto
		std::cout<<AguaLimon.getPrecio()<<std::endl;	//como marca, producto,
		std::cout<<AguaLimon.getLitros()<<std::endl;	//Precio o litros del agua.
	
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
		//Imprime los datos pedidos de la ListaProvedor en la casilla 2	
	
	
		
	
	
	
		}
		else
		{
			std::cout<<"Gracias por venir";
			continua=continua + 1;
		}
	}
	
	
	

	
	
}

void agregar_provedorde_comida(){          //funcion para agregar datos del objeto  en un arreglo
	
	Comida Pollo ("Pollos Juanito","Pollo",25.00); //el objeto o en este caso el producto se
	listaProv[numid] = Pollo;						// se guarda en una casilla con su información
	numid++;										// y el contador sirve para identificar esa casilla
	Comida torta ("DE tortas a Tortotas","torta",30.00);
	listaProv[numid] = torta;
	numid++;
	Comida carne ("Carnitas el Goku","Carnitas Krilin",50.00);
	listaProv[numid] = carne;
	numid++;
}

void Crear_pedido(){
	Pedido Pollo ("01",25,listaProv[0]); // datos para crear un pedido usando un arreglo
	listaPedidos[numped] = Pollo;
	numped++;
	
	Pedido torta ("02",35,listaProv[1]); //los datos del objeto se guardan en una casilla 
	listaPedidos[numped] = torta;		// y el contador sirve para identificar esa casilla
	numped++;
	
	Pedido carne ("03",80,listaProv[2]);
	listaPedidos[numped] = carne;
	numped++;
}

