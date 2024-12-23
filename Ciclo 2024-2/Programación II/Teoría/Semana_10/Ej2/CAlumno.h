#include <iostream>
using namespace std;

class CAlumno
{
private:
    string nombre;
    int edad;
public:
    CAlumno(/* args */);
    CAlumno(string _nombre, int _edad);
    ~CAlumno();

    string getNombre();
    void setNombre( string &nombre_);

    int getEdad();
    void setEdad(int edad_);


};

