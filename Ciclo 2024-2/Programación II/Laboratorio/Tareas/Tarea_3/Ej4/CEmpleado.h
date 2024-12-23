#include <iostream>
using namespace std;

class CEmpleado
{
private:
    string nombre;
    string apellidos;
    int edad;
    double sueldo;
public:
    CEmpleado(string _nombre, string _apellidos, int _edad);
    ~CEmpleado();

    string getNombre();
    void setNombre(string &nombre_);

    string getApellidos();
    void setApellidos(string &apellidos_);

    int getEdad();
    void setEdad(int edad_);

    double getSueldo();
    void setSueldo(double sueldo_);

};
