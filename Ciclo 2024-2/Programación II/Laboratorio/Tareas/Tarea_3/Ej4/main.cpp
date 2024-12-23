#include "CArticulo.h"
#include "CEmpleado.h"
#include "CCliente.h"

template<typename T>
void print_datos(T object){
    cout << "Nombre: " << object.getNombre() << endl;
    cout << "Apellidos: " << object.getApellidos() << endl;
    cout << "Edad: " << object.getEdad() << endl;
}

string vender(CArticulo &x, CCliente &y){
    if (x.getCantidad() > 0)
    {
        x.setCantidad(x.getCantidad()-1);
        y.setComprasTotales(y.getComprasTotales()+x.getPrecio());
        return "Venta exitosa";
    }
    return "No se puede vender";
}

void print_ventas(CCliente &client, CArticulo &product){
    cout << "Realizar venta 01 " << product.getNombre() << " a " << client.getNombre() << endl;
    cout << "Resultado: " << vender(product, client) << endl;
    cout << "Las compras totales de " << client.getNombre() << " es: " << client.getComprasTotales() << endl;
}

int main(){
    CEmpleado empleado_01 = CEmpleado("Carlos", "Gomez", 35);
    CCliente cliente_01 = CCliente("Lucia", "Perez", 28);
    CArticulo articulo_01 = CArticulo("Laptop HP", 5000, 3);
    CArticulo articulo_02 = CArticulo("Xbox 360", 4000, 2);
    print_datos(empleado_01);
    print_datos(cliente_01);
    print_ventas(cliente_01, articulo_02);
    print_ventas(cliente_01, articulo_02);
    print_ventas(cliente_01, articulo_02);
    return 0;
}