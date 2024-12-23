

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>

class Producto {
private:
    double precio;
    int cantidad;
public:
    Producto(float _precio, int _cantidad);
    double get_precio();
    int get_cantidad();
    ~Producto();
};



#endif //PRODUCTO_H
