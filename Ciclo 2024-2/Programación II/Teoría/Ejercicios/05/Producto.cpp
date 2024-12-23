

#include "Producto.h"

Producto::Producto(float _precio, int _cantidad) {
    this->precio = _precio;
    this->cantidad = _cantidad;
}
double Producto::get_precio() {
    return this->precio;
}
int Producto::get_cantidad() {
    return this->cantidad;
}
Producto::~Producto() {
}