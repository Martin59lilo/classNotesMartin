#include "CPersona.h"

CPersona::CPersona(/* args */)
{
}

CPersona::CPersona(string _nombre, string _apellidos, int _edad)
{
    nombre = _nombre;
    apellidos = _apellidos;
    edad = _edad;
}

void CPersona::imprimirdatos(){
    cout << "Nombre: "<< nombre << endl;
    cout << "Apellidos: " << apellidos << endl;
    cout << "Edad: "<< edad << endl;
}

CPersona::~CPersona()
{
}

string CPersona::getNombre()  { return nombre; }
void CPersona::setNombre( string &nombre_) { nombre = nombre_; }

string CPersona::getApellidos()  { return apellidos; }
void CPersona::setApellidos( string &apellidos_) { apellidos = apellidos_; }

int CPersona::getEdad()  { return edad; }
void CPersona::setEdad(int edad_) { edad = edad_; }

