




#include <string>
#include <iostream>

class Comida
{
private://Atributos
    std::string nombre;	
    int pieza;
    float precio;

public://Metodos
    
    Comida() :  nombre(""), pieza(0), precio(0.0) { }; // constructor default
    Comida(std::string name, int pie, float pre) :	//Constructor con variables predefinidas
        nombre(name), pieza(pie), precio(pre) { };
		   
    void set_nombre(std::string ); //Metodos Modificadores siendo get y set para cada atributo
    std::string get_nombre();		//de Comida
    
    void set_pieza(int );
    int get_pieza();
    
    void set_precio(float );
    float get_precio();

    void Comprar(int, float );
};

// Metodos modificadores get y set agrupado según su atributo
std::string Comida::get_nombre() { return nombre; }			
void Comida::set_nombre(std::string name) { nombre = name; }

// Metodos modificadores get y set agrupado según su atributo
int Comida::get_pieza() { return pieza; }
void Comida::set_pieza(int pie) { pieza = pie; }

// Metodos modificadores get y set agrupado según su atributo
float Comida::get_precio() { return precio; }
void Comida::set_precio(float pre) { precio = pre; }


//Funcion que te muestra las piezas de pollo y su precio unitario que compraste
void Comida::Comprar(int pieza,float precio)
{
    precio=precio * pieza;
    std::cout<<""<<pieza<< "es el numero de piezas que compro "<<" y su precio total es de:"<<precio;
}

class Bebida //clase
{
private://atributos
    std::string nombre;
    int litros;
    float precio;

public://metodos
    
    Bebida() :  nombre(""), litros(0), precio(0.0) { }; // constructor default
    Bebida(std::string name, int li, float pre) ://Constructor con variables predefinidas
        nombre(name), litros(li), precio(pre) { };
        
    // Metodos modificadores get y set agrupado según su atributo
    void set_nombre(std::string );
    std::string get_nombre();

    // Metodos modificadores get y set agrupado según su atributo
    void set_litros(int );
    int get_litros();

    // Metodos modificadores get y set agrupado según su atributo
    void set_precio(float );
    float get_precio();

    void ComprarAgua(int, float );
};

// Metodos modificadores get y set agrupado según su atributo
std::string Bebida::get_nombre() { return nombre; }
void Bebida::set_nombre(std::string name) { nombre = name; }

// Metodos modificadores get y set agrupado según su atributo
int Bebida::get_litros() { return litros; }
void Bebida::set_litros(int li) { litros = li; }

// Metodos modificadores get y set agrupado según su atributo
float Bebida::get_precio() { return precio; }
void Bebida::set_precio(float pre) { precio = pre; }

void Bebida::ComprarAgua(int litros,float precio)
{
    precio=precio * litros;
    
    std::cout<< litros << "Compro esa cantidad de litros "<<" y su precio total es:"<<precio;
    
}

class Ordenes
{
private:
    int Nordenes;
    float precio;

public:
    
    Ordenes() :  Nordenes(0), precio(0.0) { }; // constructor default
    Ordenes(int NO, float pre) ://Constructor con variables predefinidas
        Nordenes(NO),precio(pre) { };

    // Metodos modificadores get y set agrupado según su atributo
    void set_Nordenes(int );
    int get_Nordenes();

    // Metodos modificadores get y set agrupado según su atributo
    void set_precio(float );
    float get_precio();

    void Nordeneseneldia(int, float ); //Funcion para ver las ordenes del día
};

// Metodos modificadores get y set agrupado según su atributo
int Ordenes::get_Nordenes() { return Nordenes; }
void Ordenes::set_Nordenes(int NO) { Nordenes = NO; }

// Metodos modificadores get y set agrupado según su atributo
float Ordenes::get_precio() { return precio; }
void Ordenes::set_precio(float pre) { precio = pre; }


class Provedor //clase
{
private://atributos
    std::string nombre;
    std::string empresa;
    float precio;
    

public://metodos
    
    Provedor() :  nombre(""), empresa(""), precio(0.0) { }; // constructor default
    Provedor(std::string name, std::string emp, float pre) ://Constructor con variables predefinidas
        nombre(name),  empresa(emp), precio(pre) { };
        
    // Metodos modificadores get y set agrupado según su atributo
    void set_nombre(std::string );
    std::string get_nombre();

    // Metodos modificadores get y set agrupado según su atributo
    void set_empresa(std::string );
    std::string get_empresa();

    // Metodos modificadores get y set agrupado según su atributo
    void set_precio(float );
    float get_precio();

    void precioAlimentos(float, std::string );
};

// Metodos modificadores get y set agrupado según su atributo
std::string Provedor::get_nombre() { return nombre; }
void Provedor::set_nombre(std::string name) { nombre = name; }

// Metodos modificadores get y set agrupado según su atributo
std::string Provedor::get_empresa() { return empresa; }
void Provedor::set_empresa(std::string emp) { empresa = emp; }

// Metodos modificadores get y set agrupado según su atributo
float Provedor::get_precio() { return precio; }
void Provedor::set_precio(float pre) { precio = pre; }

void Provedor::precioAlimentos(float precio, std::string nombre){ //funcion que muestra el valor de un alimento
    std::cout<< nombre<< " "<<" su precio es:"<<precio;
    
}



//Funcion que muestras las ordenes en el dia
void Ordenes::Nordeneseneldia(int nordenes,float precio)//Funcion para ver las ordenes del día
{
	precio = precio * nordenes;
	std::cout<<"";
    std::cout<<""<<nordenes<< "es el numero de ordenes hoy"<<" y su precio total es de:"<<precio;
}
