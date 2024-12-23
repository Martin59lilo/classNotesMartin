#include "CCurso.h"

CCurso::CCurso(/* args */)
{
}

CCurso::CCurso(string _nombre){
    nombre = _nombre;
}

string CCurso::getNombre()  { return nombre; }
void CCurso::setNombre( string &nombre_) { nombre = nombre_; }

int CCurso::getCreditos()  { return creditos; }
void CCurso::setCreditos(int creditos_) { creditos = creditos_; }

CCurso::~CCurso()
{
}
