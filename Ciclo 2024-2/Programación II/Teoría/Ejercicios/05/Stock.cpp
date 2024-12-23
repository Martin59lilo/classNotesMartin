

#include "Stock.h"


Stock::Stock(string nombre):Contenedor(nombre) {}
void Stock::trasladar_producto(Tienda& tienda, int index) {
    tienda.agregar_producto(productos[index]);
    productos.erase(productos.begin()+index);
}
Stock::~Stock() {}