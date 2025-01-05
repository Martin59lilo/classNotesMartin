#include <iostream>
using namespace std;

class CProfesor
{
private:
    string nombre, apellido;
    int edad, horas_dictados;
public:
    string getNombre();
    void setNombre(string _nombre);
    string getApellido();
    void setApellido(string _apellido);
    int getEdad();
    void setEdad(int _edad);
    int gethoras_dictados();
    void sethoras_dictados(int _horas_dictados);
};