#include "CAlumno.h"

CAlumno::CAlumno(string _nombre, string _apellidos, int _edad, int _creditos){
    nombre = _nombre;
    apellidos = _apellidos;
    edad = _edad;
    creditos = _creditos;
};
CAlumno::CAlumno(string _nombre, int _creditos){
    nombre = _nombre;
    creditos = _creditos;
};

void CAlumno::aprobar(CCurso curso){
    
}
string CAlumno::getNombre()  { return nombre; }
void CAlumno::setNombre( string &nombre_) { nombre = nombre_; }
int CAlumno::getCreditos()  { return creditos; }
void CAlumno::setCreditos(int creditos_) { creditos = creditos_; }
int CAlumno::getEdad() { return edad; }
void CAlumno::setEdad(int edad_) { edad = edad_; }
int CAlumno::getCreditos()  { return creditos; }
void CAlumno::setCreditos(int creditos_) { creditos = creditos_; }