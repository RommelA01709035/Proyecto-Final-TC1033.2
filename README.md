# Proyecto-Final-TC1033.2
Este es mi proyecto final para la materia "Pensamiento computacional orientada a objetos".

Contexto: En una cocina local tiene un desorden en las ventas asi que la función de este algoritmo es  presentar un orden en las ventas dandonos las piezas de comida, litros de bebida y compras que se hacen en el día. El Proyecto esta programado solamente para presentar información y se usa solamente dandole ejecutar y posteriormente Enter .
Variables y la explicación de su nombre: Las variables  están relacionadas unicamente en el nombre tales como nombre la cual esta ubicada en la clase de comida, posteriormente veremos nombrel la cual hace referencia al nombre nombre del liquido ya que esta ubicada en los atributos de la clase bebida. Siendo esta la relacion de las variables y su nombre a continuación diré el nombre de las variables para que tengan más sentido:

nombre= name siendo este la variable para usar en get y set y name porque es nombre en inglés y no sea un nombre más alejado a lo que es.

nombrel,namel = Al igual que el caso anterior, pero este ubicado en la clase Bebida.

piezas, pie = igual que el caso anterior, pero en la clase de Comida siendo piezas las piezas de pollo que compro y pie su abreviación.

precio, pre= siendo precio unitario de los objetos de consumo.

litros,li = litros es la cantidad de bebida que se compra y li su abreviación para get y set.

Nordenes,NO = es el numero de ordenes por eso la N al inicio ya que es la sigla de la palabra numero y al juntarla con ordenes hace referencia al numero de ordenes en ese dia.

18/11/2021 segundo avance

En este segundo avance he corregido mis funciones y ahora lo que hacen es calcular el costo total (en este caso representado con la variable precio que se relaciona con todas las clases). Además que he cambiado la variable "precioO" a unicamente "precio". EN el main he adaptado para no necesitar strings prederterminados y agregarlos en la función de los objetos. Se creo una nueva clase llamada Provedor la cual posteriormente va a heredar atributos y en base de ella vamos usar los conceptos de agregación y composición (como se ve en el diagrama UML).Por ultimo hice UML correspondiente al codigo después de este avance como indica en las instrucciones de este avance si es que no haz agregado agregación o composición. 

26/11//2021 tercer avance

-Se recreo el codigo aplicando solamente herencia porque no me salio agregar composición o agregación.

-La herencia inicia desde la clase padre "Provedor" que hereda sus atributos (marca, producto y precio) a las clases hijas que son comida y agua siendo los productos que ellos venden a la clientela en generar o a demás tiendas.

- Al recrear el codigo se cambiaron las variables como:

class Comida:

int piezas = pie;

class Agua:

float litros = lit

class Provedor (que es la padre):

std::string marca = mar

std::string producto = pro

float precio = pre


-El funcionamiento de este programa imprime desde el main las caracteristicas de los productos de una manera vertical iniciando por la marca.

