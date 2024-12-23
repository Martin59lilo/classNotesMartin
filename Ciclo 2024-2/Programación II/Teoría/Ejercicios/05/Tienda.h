

#ifndef TIENDA_H
#define TIENDA_H
#include "Contenedor.h"

#include <iostream>
using namespace std;

class Tienda: public Contenedor{
public:
    Tienda(string nombre);
    void agregar_producto(Producto* nuevo_producto);
    ~Tienda();
};



#endif //TIENDA_H
