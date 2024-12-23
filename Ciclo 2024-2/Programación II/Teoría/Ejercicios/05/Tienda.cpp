

#include "Tienda.h"

Tienda::Tienda(string nombre): Contenedor(nombre) {}
void Tienda::agregar_producto(Producto* nuevo_producto) {
    productos.push_back(nuevo_producto);
}
Tienda::~Tienda() {

}
