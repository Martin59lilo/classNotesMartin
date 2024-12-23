#include "CCurso.h"


CCurso::CCurso(string _nombre, string _carrera, int _creditos){
    nombre = _nombre;
    carrera = _carrera;
    creditos = _creditos;
}

CCurso::CCurso(string _nombre, int _creditos){
    nombre = _nombre;
    creditos = _creditos;
}

string CCurso::getNombre()  { return nombre; }
void CCurso::setNombre( string &nombre_) { nombre = nombre_; }
string CCurso::getCarrera()  { return carrera; }
void CCurso::setCarrera( string &carrera_) { carrera = carrera_; }
int CCurso::getCreditos()  { return creditos; }
void CCurso::setCreditos(int creditos_) { creditos = creditos_; }