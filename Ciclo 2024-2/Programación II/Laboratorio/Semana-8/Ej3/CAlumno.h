#include <iostream>
using namespace std;

class CAlumno
{
private:
    string nombre, apellido;
    int edad, creditos;
public:
    string getNombre();
    void setNombre(string _nombre);
    string getApellido();
    void setApellido(string _apellido);
    int getEdad();
    void setEdad(int _edad);
    int getcreditos();
    void setcreditos(int _creditos);
};