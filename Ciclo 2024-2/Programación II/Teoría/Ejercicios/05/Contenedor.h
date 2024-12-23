

#ifndef CONTENEDOR_H
#define CONTENEDOR_H

#include <vector>
#include "Producto.h"
using namespace std;

class Contenedor {
protected:
    string nombre;
    vector<Producto*> productos;
public:
    Contenedor(string& _nombre);
    void agregarProducto(Producto* producto);
    string get_nombre();
    vector<Producto*>& get_productos();
    virtual ~Contenedor();
};



#endif //CONTENEDOR_H
