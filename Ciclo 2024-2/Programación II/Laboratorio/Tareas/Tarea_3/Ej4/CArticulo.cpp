#include "CArticulo.h"


CArticulo::CArticulo(string _nombre, double _precio, int _cantidad){
    nombre = _nombre;
    precio = _precio;
    cantidad = _cantidad;
}

CArticulo::~CArticulo(){

}

string CArticulo::getNombre() { return nombre; }
void CArticulo::setNombre(string &nombre_) { nombre = nombre_; }

double CArticulo::getPrecio() { return precio; }
void CArticulo::setPrecio(double precio_) { precio = precio_; }

int CArticulo::getCantidad() { return cantidad; }
void CArticulo::setCantidad(int cantidad_) { cantidad = cantidad_; }
    