#include "CAlumno.h"

CAlumno::CAlumno(/* args */)
{
}

CAlumno::CAlumno(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

string CAlumno::getNombre()  { return nombre; }
void CAlumno::setNombre( string &nombre_) { nombre = nombre_; }

int CAlumno::getEdad()  { return edad; }
void CAlumno::setEdad(int edad_) { edad = edad_; }

CAlumno::~CAlumno()
{
}
