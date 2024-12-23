#include <iostream>
using namespace std;

class CPersona // Clase base
{
private:
    string nombre;
    protected:
    int edad;
public:
    CPersona();
    CPersona(string _nombre, int _edad);
    string getNombre();
    void setNombre( string &nombre_);
    int getEdad();
    void setEdad(int edad_);
    virtual ~CPersona();
};

