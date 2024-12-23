#include "CEmpleado.h"

CEmpleado::CEmpleado(string _nombre, string _apellidos, int _edad){
    nombre = _nombre;
    apellidos = _apellidos;
    edad = _edad;
}
CEmpleado::~CEmpleado(){

}

string CEmpleado::getNombre(){ return nombre; }
void CEmpleado::setNombre(string &nombre_) { nombre = nombre_; }

string CEmpleado::getApellidos(){ return apellidos; }
void CEmpleado::setApellidos(string &apellidos_) { apellidos = apellidos_; }

int CEmpleado::getEdad(){ return edad; }
void CEmpleado::setEdad(int edad_) { edad = edad_; }

double CEmpleado::getSueldo(){ return sueldo; }
void CEmpleado::setSueldo(double sueldo_) { sueldo = sueldo_; }