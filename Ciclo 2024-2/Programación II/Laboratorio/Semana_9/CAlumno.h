#include <iostream>
#include <CCurso.h>

using namespace std;

class CAlumno
{
private:
    string nombre;
    string apellidos;
    int edad;
    int creditos;
public:
    CAlumno(string _nombre, string _apellidos, int _edad, int _creditos);
    CAlumno(string _nombre, int _creditos);
    void aprobar(CCurso curso);
    void aprobar();
    string getNombre();
    void setNombre( string &nombre_);
    int getCreditos();
    void setCreditos(int creditos_);
    int getEdad();
    void setEdad(int edad_);
    int getCreditos();
    void setCreditos(int creditos_);
};