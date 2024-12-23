#include <iostream>
using namespace std;

class CCliente
{
private:
    string nombre;
    string apellidos;
    int edad;
    double compras_totales;

public:
    CCliente(string _nombre, string _apellidos, int _edad);
    ~CCliente();

    string getNombre();
    void setNombre( string &nombre_);

    string getApellidos();
    void setApellidos( string &apellidos_);

    int getEdad();
    void setEdad(int edad_);

    double getComprasTotales();
    void setComprasTotales(double comprasTotales);


};
