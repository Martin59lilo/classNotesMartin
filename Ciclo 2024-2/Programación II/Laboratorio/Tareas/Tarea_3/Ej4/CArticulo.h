#include <iostream>
using namespace std;

class CArticulo
{
private:
    string nombre;
    double precio;
    int cantidad;

public:
    CArticulo(string _nombre, double _precio, int _cantidad);
    ~CArticulo();

    string getNombre();
    void setNombre(string &nombre_);

    double getPrecio();
    void setPrecio(double precio_);

    int getCantidad();
    void setCantidad(int cantidad_);
};

