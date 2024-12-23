

#include "Contenedor.h"

Contenedor::Contenedor(string& _nombre) {
    this->nombre = _nombre;
}
void Contenedor::agregarProducto(Producto* producto) {
    this->productos.push_back(producto);
}
string Contenedor::get_nombre() {
    return this->nombre;
}
vector<Producto*>& Contenedor::get_productos() {
    return this->productos;
}
Contenedor::~Contenedor() {}