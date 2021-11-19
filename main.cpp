#include <iostream>
#include <string>
#include "comida.h"

int main()
{
	std::cout<< "Proceso finalizado :D \n" ;
    // En esta parte se crea el objeto mencionando la clase y después el objeto
    Comida Pollo("Pollo",2,17.50);
    std::cout << Pollo.get_nombre() << " su precio es " << Pollo.get_precio() << std::endl;

    
    // Esta función es para MOSTRAR el nombre de la comida,su costo unitario y el numero de piezas que llevo
    Pollo.Comprar(5,38.60);
    std::cout<<std::endl;
              

    // // En esta parte se crea el objeto mencionando la clase y después el objeto
    Bebida AguaLimon("Agua de limon",2,15.50);
    std::cout << AguaLimon.get_nombrel() << " su precio es " << AguaLimon.get_precio() << std::endl;
    	      
    			

    // En esta Función muestra los LITROS que compro alguien y su costo unitario
    AguaLimon.ComprarAgua(4,20.50);
    std::cout<<std::endl;
             
             
	// En esta parte se crea el objeto mencionando la clase y después el objeto
    Ordenes Cuenta(20,33.50);
    
    	      
    			

    // En esta función se meciona cuantas ordenes en el dia fueron y el costo de cada una suponiendo que se compra una agua de limon y un pollo
    Cuenta.Nordeneseneldia(20,33.00);
                 
    return 0;
}
