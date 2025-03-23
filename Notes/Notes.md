---
tags:
  - Programation/Progra2
---
# Variables tipo de datos, entrada y salida de consola
- integer
- float
- double
- double double
- bool
- string 
- char
- cout/cin
# Estructuras de control
## Selectivas
1. if/else
2. switch
## Repetitiva
1. do while
2. while
3. for
# Funciones
## Transferencia por valor y referencia
Por valor: se crea una copia local en la función de la variable.
Por referencia: se modifica la misma variable en la función. "&" adelante de la variable.
## Recursividad
# Punteros
Dirección de una variable: se usa & para obtener la dirección de la variable.
Un puntero almacena una dirección de memoria de la variable. Se define con un "tipo_variable* nombre". Se puede derreferenciar con ( * ) y cambiar el valor de la variable que apunta el puntero. Para no apuntar a nada se usa nullptr. Los dobles punteros hacen la misma función apuntan a un puntero.
## Uso de memoria dinámica
Para usar el "heap" se debe utilizar punteros y el comando new o delete. Un ejemplo para crear una variable en el heap es:
```cpp
int a = 2;
int* puntero_a = new int;
*puntero_a = a;
delete puntero_a;
```
# Arreglos estáticos
## Array estático
Para asignar un array estático no se puede modificar el tamaño del array. La sintaxis es`int array[2] = {2,11};` donde se crea un array de tamaño 2 y con 2 elementos de tipo int. El array guarda direcciones de cada variable y empieza desde el primer elemento. Para entrar a cada elemento es `array[11]` y obtenemos el valor de 11.
## Array dinámico
Para crear un array dinámico en el heap tenemos que usar esta sintaxis:
```cpp
int* p = new int[10];
delete[] p;
int* q = new int[2]{11,22};
delete[] q;
```
Cada elemento del array "p" está inicializado con 0 y si queremos darle valores se hace como "q". Para eliminar el espacio de memoria de cada array se hace delete[ ].
## Matrices (arrays de arrays)
Para inicializar una matriz estática se hace así y para pasarlo a una función se hace con un puntero:
```cpp
int A[3][2] = {{1,2},{3,4},{5,6}};
cout << A[0][1] << endl; // Nos dará el valor de 2.
```
Para inicializar una matriz dinámica se hace así:
```cpp
int** create_space_matrix(int cols, int rows){
    int** array = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[cols];
    }
    return array;
}
```
# Clases
**La clase encapsula a los atributos y métodos**. Es el concepto abstracto de lo que se quiere crear.
-  Propiedades o atributos: Son las características de cada clase.
-  Procedimiento o métodos: Son las funciones que usa atributos.
Objeto (Elemento): **Es la instancia de una clase**. Es un ejemplo concreto de una clase.
## Public y Private
- Public: Se puede acceder fuera de la clase.
- Private: No se puede acceder fuera de la clase
## Constructores
- Constructor por defecto: Da atributos por defecto. No tiene argumentos.
- Constructor de asignación: Asigna un valor a los atributos. Tiene argumentos.
## Destructores

# Relaciones
Es un vínculo entre dos objetos y se necesitan mutuamente para lograr una actividad. Se relacionan a través de un método.
## Asociación ($\rightarrow$)
2 objetos se unen para trabajar juntos y hacer una actividad. "Usa un". Es singular y bidireccional.
Ejemplo:
Persona usa una tarjeta. Clase Persona $\rightarrow$ Clase Tarjeta.
1. La clase que asocia tiene un atributo con el tipo de la clase asociada (puntero)
2. La clase que asocia tiene un método que asocie el objeto de la clase asociada. "asociar_tarjeta".
## Agregación ($\Diamond$)
Una clase contiene un conjunto de objetos de otra clase. Agrega un conjunto de objetos. Se representa con una línea y un rombo vacío en el extremo. "Tiene un". Es plural y unidireccional.
Ejemplo:
Un estudiante tiene varios cursos.
1. Un atributo con el tipo de la clase que representa las partes.
2. Un método que agregue un objeto al todo.
```cpp
/* Solo necesitas incluir la clase a la que agregas a la clase más grande por ejemplo*/
//En la clase CContinente:
#include "CPais.h"
...
```
## Composición ()
Es una relación dependiente dónde un objeto más complejo es conformado de objetos más pequeños y son inseparables. "Nacen y mueren al mismo tiempo". "Es parte de ". Se denota con un rombo lleno en el extremo apuntando a la clase del todo.
Ejemplo:
Un muro es parte de un usuario. El cerebro es parte de la persona. Un evento es compuesto con una fecha y hora.
1. Un atributo con el tipo de la clase que compone
2. Un método que permita construir objetos de varias clases en uno.
## Herencia
Una clase hereda algo a otra clase (Atributos y métodos). Evita redundancia de código.
- Subclase hereda todos los miembros de la clase base o superclase: atributos y métodos
- La subclase tiene sus propios constructores
- La subclase puede definir miembros adicionales.
Se expresa con "*Es un*":
Ejemplos:
- Un pájaro es un animal.
- Un doctor es una persona.
Se representa con un orden de jerarquía y una flecha apuntando a la clase base.
- Sintaxis de la **clase heredada!!**:
```cpp
class Subclase:(nivel_acceso_herencia) ClaseBase
{
};
```
El nivel_acceso_herencia:
- protected: lo que se hereda de la clase base se hereda como privado y protegido.
- private: todo lo que se hereda de la clase base se hereda como privado
- public: todo lo que se hereda de la clase base se hereda como público a excepción de lo protected.
Siempre se usa destructor virtual para la clase base (ejecuta ambos destructores) al usar herencia.
El protected se usa para que un atributo privado se pueda modificar desde la clase derivada. Los objetos son una especie de públicos solo en las clases derivadas.
## Polimorfismo
*Es cuando una entidad que puede cambiar de forma dependiendo del contexto*
Ejemplos:
- Cuando adaptamos una plantilla genérica a otra.
- Cuando queremos que una función retorne algo distinto para cada cosa como /hablar/ para perro "wow" y para vaca "moo".
1. Un objeto polimórfico es una entidad, que puede tener valores de tipos diferentes en el curso de ejecución.
2. Las funciones polimórficas son funciones que tienen objetos polimórficos como argumentos.
3. Los tipos polimórficos son tipos genéticos, aplicables a valores de más de un tipo.
```cpp
template <typename T> 
class className 
{
public:
	T var;
	T someOperation(T arg);
}
```
### Polimorfismo paramétrico
```cpp
template <typename T> 
T someFunction(T arg){
...
}

somefunction<tipo>(a) // luego en la función se usa declarando el tipo de los argumentos
```
*Puede retornar un int, double, float, etc., de tal manera está preparada la función para cualquier tipo.*
El template va antes de la clase.

### Polimorfismo de inclusión o herencia
En el caso que un método de la clase base y la clase hija tienen un método con el mismo nombre pero en la definición  son diferentes *(funcionan distintos)*. Se declara el método en la clase base como "virtual" y se redefine en las clases hijas. Se utiliza "override".z
## Funciones amigas
El modificador friend permite acceder a los atributos privados a otra clase.
Reglas:
- La amistad no puede transferirse: si A es amigo de B y B es amigo de C, no implica que A sea amigo de C.
- La amistad no puede heredarse: Si A es amigo de B, y C es una clase derivada de B, A no es amigo de C.
- La amistad no es simétrica: Si A es amigo de B, B no tiene por qué ser amigo de A.
Ejemplo:
```cpp
friend class CCliente;
friend void cambiar_celular(CVendedor&, int);
```
## Sobrecarga de operadores
Usar una misma función con el mismo nombre y con distinta definición.
```cpp
type operator("signo del operador")(arguments){

}
```
Necesitas hacer amiga con la clase que necesitas hacer la operación.

