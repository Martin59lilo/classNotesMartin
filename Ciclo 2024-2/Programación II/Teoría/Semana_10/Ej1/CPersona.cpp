#include <CPersona.h>

CPersona::CPersona()
{
    nombre = " ";
    edad = 0;
}

CPersona::CPersona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

string CPersona::getNombre()  { return nombre; }
void CPersona::setNombre( string &nombre_) { nombre = nombre_; }

void CPersona::asociar_tarjeta(CTarjeta* _visa){
    visa = _visa;
}

string CPersona::get_v_tarjeta(){
    return (*visa).getVencimiento();
}

void CPersona::renovar_tarjeta(string _newvencimiento){
    (*visa).setVencimiento(_newvencimiento);
}


CPersona::~CPersona()
{
    cout << "Persona destruida" << endl;
}