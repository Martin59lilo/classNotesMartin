#include "CPersona.h"

CPersona::CPersona()
{
}

CPersona::CPersona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

CPersona::~CPersona()
{
    cout << "Objeto personoa destruido"<< endl;

}

string CPersona::getNombre()  { return nombre; }
void CPersona::setNombre( string &nombre_) { nombre = nombre_; }

int CPersona::getEdad()  { return edad; }
void CPersona::setEdad(int edad_) { edad = edad_; }