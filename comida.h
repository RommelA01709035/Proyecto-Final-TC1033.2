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
}

class Bebida //clase
{
private://atributos
    std::string nombrel;
    int litros;
    float precio;

public://metodos
    
    Bebida() :  nombrel(""), litros(0), precio(0.0) { }; // constructor default
    Bebida(std::string namel, int li, float pre) ://Constructor con variables predefinidas
        nombrel(namel), litros(li), precio(pre) { };
        
    // Metodos modificadores get y set agrupado según su atributo
    void set_nombrel(std::string );
    std::string get_nombrel();

    // Metodos modificadores get y set agrupado según su atributo
    void set_litros(int );
    int get_litros();

    // Metodos modificadores get y set agrupado según su atributo
    void set_precio(float );
    float get_precio();

    void ComprarAgua(int, float );
};

// Metodos modificadores get y set agrupado según su atributo
std::string Bebida::get_nombrel() { return nombrel; }
void Bebida::set_nombrel(std::string namel) { nombrel = namel; }

// Metodos modificadores get y set agrupado según su atributo
int Bebida::get_litros() { return litros; }
void Bebida::set_litros(int li) { litros = li; }

// Metodos modificadores get y set agrupado según su atributo
float Bebida::get_precio() { return precio; }
void Bebida::set_precio(float pre) { precio = pre; }

void Bebida::ComprarAgua(int litros,float precio)
{
    precio=precio * litros;
}

class Ordenes
{
private:
    int Nordenes;
    float precioO;

public:
    
    Ordenes() :  Nordenes(0), precioO(0.0) { }; // constructor default
    Ordenes(int NO, float preO) ://Constructor con variables predefinidas
        Nordenes(NO),precioO(preO) { };

    // Metodos modificadores get y set agrupado según su atributo
    void set_Nordenes(int );
    int get_Nordenes();

    // Metodos modificadores get y set agrupado según su atributo
    void set_precioO(float );
    float get_precioO();

    void Nordeneseneldia(int, float ); //Funcion para ver las ordenes del día
};

// Metodos modificadores get y set agrupado según su atributo
int Ordenes::get_Nordenes() { return Nordenes; }
void Ordenes::set_Nordenes(int NO) { Nordenes = NO; }

// Metodos modificadores get y set agrupado según su atributo
float Ordenes::get_precioO() { return precioO; }
void Ordenes::set_precioO(float preO) { precioO = preO; }

//Funcion que muestras las ordenes en el dia
void Ordenes::Nordeneseneldia(int nordenes,float precioO)//Funcion para ver las ordenes del día
{
    precioO=nordenes * precioO;
}

