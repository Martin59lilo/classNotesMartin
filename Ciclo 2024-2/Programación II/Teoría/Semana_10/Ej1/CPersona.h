#include <iostream>
#include <CTarjeta.h> //ASOCIACIÓN
using namespace std;

class CPersona
{
private:
    string nombre;
    int edad;
    CTarjeta* visa = nullptr;
public:
    CPersona();
    CPersona(string _nombre, int _edad);
    ~CPersona();
    string getNombre();
    void setNombre( string &nombre_);
    void asociar_tarjeta(CTarjeta* _visa);
    void renovar_tarjeta(string _newvencimiento);
    string get_v_tarjeta();

};


