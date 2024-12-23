#include <iomanip>
#include <iostream>
#include "Producto.h"
#include "Contenedor.h"
#include "Stock.h"
#include "Tienda.h"
using namespace std;

double precioAleatorio() {
    return (rand()%(500)+1)/10.0;
}

int cantidadAleatoria() {
    return rand()%100 + 1;
}

void generarProductos(Contenedor& contenedor, int cant_productos){
    for (int i = 0; i < cant_productos; ++i) {
        auto* producto = new Producto(precioAleatorio(), cantidadAleatoria());
        contenedor.agregarProducto(producto);
    }
}

void imprimirDatosProducto(Contenedor& contenedor, int index) {
    cout << "Producto " << index << endl;
    cout << "Precio " << contenedor.get_productos()[index]->get_precio() << endl;
    cout << "Cantidad " << contenedor.get_productos()[index]->get_cantidad() << endl;
}

double calcularIngresoDescuento10Pc(vector<Producto*>& productos) {
    double resultado = 0;
    for (auto producto: productos) {
        if (20 < producto->get_cantidad() && producto->get_cantidad() < 80) {
            if (producto->get_cantidad() > 50)
                resultado += producto->get_precio()*0.9 * producto->get_cantidad();
            else
                resultado += producto->get_precio() * producto->get_cantidad();
        }

    }
    return resultado;
}

double calcularIngresoDescuento15Pc(vector<Producto*>& productos) {
    double resultado = 0;
    for (auto producto: productos) {
        if (20 < producto->get_cantidad() && producto->get_cantidad() < 80) {
            if (producto->get_cantidad() > 70)
                resultado += producto->get_precio()*0.85 * producto->get_cantidad();
            else
                resultado += producto->get_precio() * producto->get_cantidad();
        }
    }
    return resultado;
}

double calcularIngreso(vector<Producto*>& productos) {
    double ingreso = 0;
    for (int i = 0; i < productos.size(); ++i)
        ingreso += productos[i]->get_cantidad() * productos[i]->get_precio();
    return ingreso;
}

double calcularCosto(vector<Producto*>& productos) {
    double costo = 0;
    for (int i = 0; i < productos.size(); ++i) {
        costo += 0.01 * productos[i]->get_precio();
    }
    return costo;
}

void trasladarProductos(Stock& stock, Tienda& tienda) {
    for (int i = 0; i < stock.get_productos().size(); ++i)
        if (stock.get_productos()[i]->get_cantidad() > 70)
            stock.trasladar_producto(tienda, i);
}

template <typename T>
void deleteProductos(T& cont) {
    for (auto e : cont.get_productos())
        delete e;
}

int main(){
    srand(time(nullptr));
    // Creación de los objetos stock y tienda, así como, los 200 productos
    Stock stock("Stock A");
    Tienda tienda("Tienda A");
    generarProductos(stock, 150);
    generarProductos(tienda, 50);
    // Cálculo de las ganancias del stock y tienda aplicando un descuento del 10%
    /*double resultado1_S = calcularIngresoDescuento10Pc(stock.get_productos()); double resultado1_T = calcularIngresoDescuento10Pc(tienda.get_productos());
    cout << "Descuento del 10%:" << endl;
    cout << "Ganancia en stock: " << resultado1_S << " soles" << endl;
    cout << "Ganancia en tienda: " << resultado1_T << " soles" << endl;
    //Cálculo de la ganancia total con fines estadísticos
    cout << "Ganancia total: " << resultado1_S+resultado1_T << " soles" << endl;
    cout << "-------------------------------" << endl;
    // Cálculo de las ganancias del stock y tienda aplicando un descuento del 15%
    double resultado2_S = calcularIngresoDescuento15Pc(stock.get_productos()); double resultado2_T = calcularIngresoDescuento15Pc((tienda.get_productos()));
    cout << "Descuento del 15%:" << endl;
    cout << "Ganancia en stock: " << resultado2_S << " soles" << endl;
    cout << "Ganancia en tienda: " << resultado2_T << " soles" << endl;
    //Cálculo de la ganancia total con fines estadísticos
    cout << "Ganancia en total: " << resultado2_S+resultado2_T << " soles" << endl;
    // Cálculo de la diferencia entre las dos ganancias totales con fines estadísticos
    cout << "\nDiferencia: " << resultado2_S+resultado2_T-resultado1_T-resultado1_S << " soles" << endl;*/

    // Cálculo de los ingresos y costos de almacenamiento del stock y tienda (sin descuento alguno)
    double ingreso_stock = calcularIngreso(stock.get_productos());
    double costo_stock = calcularCosto(stock.get_productos());
    double ingreso_tienda = calcularIngreso(tienda.get_productos());
    double costo_tienda = calcularCosto(tienda.get_productos());
    cout << "\nIngreso del stock: " << ingreso_stock << " soles" << endl;
    cout << "Ingreso de la tienda: " << ingreso_tienda << " soles" << endl;
    cout << "Costo de almacenamiento en stock: " << costo_stock << " soles" << endl;
    cout << "Costo de almacenamiento en tienda " << costo_tienda << " soles" << endl;
    cout << "Ganancia total: " << ingreso_stock+ingreso_tienda-costo_stock-costo_tienda << " soles" << endl;
    // Cálculo de las gaancias luego de haber trasladado los productos
    trasladarProductos(stock, tienda);
    cout << "\nDescuento del 10%:" << endl;
    cout << "Nueva ganancia en stock: " << calcularIngresoDescuento10Pc(stock.get_productos()) << " soles" << endl;
    cout << "Nueva ganancia en tienda: " << calcularIngresoDescuento10Pc(tienda.get_productos()) << " soles" << endl;
    cout << "-------------------------------" << endl;
    cout << "Descuento del 15%" << endl;
    cout << "Nueva ganancia en stock: " << calcularIngresoDescuento15Pc(stock.get_productos()) << " soles" << endl;
    cout << "Nueva ganancia en tienda: " << calcularIngresoDescuento15Pc(tienda.get_productos()) << " soles" << endl;


    deleteProductos(stock);
    deleteProductos(tienda);

    return 0;
}


/* 
Después de tomar 10 resultados diferentes (correr el código 10 veces), se encontró que en todas las veces la diferencia de la estrategia de
descuento del 15% superaba a la de 10%. Además, se calculó que el promedio de las diferencias entre estos dos tipos de descuentos era de 4089.705.
Estos datos nos sugieren que es mejor optar por la estrategia del descuento del 15%.

Se utilizó herencia con las clases Tienda y Stock. Se planteó de esta forma para evitar la redundancia de código, dado que ambas clases tienen
los mismos atributos y métodos. También se utilizó la relación de agregación; esta relación se dio entre los productos y el stock/tienda.

Justifique el uso de herencia en este ejercicio:
- En este ejercicio, se utiliza herencia para modelar las relaciones entre las clases `Contenedor`, `Stock` y `Tienda`.
- La clase base `Contenedor` define los atributos y métodos comunes, como `get_productos()` y `agregarProducto()`, lo que evita la duplicación de código.
- Las clases derivadas `Stock` y `Tienda` extienden las funcionalidades del contenedor para adaptarse a sus necesidades específicas, como `trasladar_producto` en `Stock` y `agregar_producto` en `Tienda`.

Pasos necesarios para definir otro tipo de relación:
- Si no utilizáramos herencia, podríamos optar por una composición, donde las clases `Stock` y `Tienda` tendrían una instancia de `Contenedor` en lugar de derivar de ella.
- En este caso, sería necesario crear métodos adicionales en cada clase para delegar las operaciones hacia el contenedor interno, lo que podría incrementar la complejidad del código.

Indique los tipos de polimorfismo usados:
1. **Polimorfismo de inclusión**: 
   - Se utiliza en las clases `Stock` y `Tienda`, que heredan de `Contenedor`. Esto permite tratar a ambas clases como un tipo `Contenedor` cuando es necesario.
   - Ejemplo: Al iterar sobre productos en `trasladarProductos`.
2. **Polimorfismo paramétrico**:
   - Se utiliza en la función `deleteProductos`, que acepta cualquier tipo de contenedor (`Stock` o `Tienda`), evitando la necesidad de escribir funciones específicas para cada tipo.

Cómo se implementa:
- El polimorfismo de inclusión se implementa mediante herencia y el uso de métodos virtuales en la clase base.
- El polimorfismo paramétrico se implementa mediante plantillas (`template`) para manejar tipos genéricos.

Indique si utiliza una clase abstracta, y si es necesario o no que lo sea:
- No es necesario una clase abstracta, bien sea para los productos o para la tienda y el stock, porque los métodos que se utilizan no difieren en la implementación.*/
