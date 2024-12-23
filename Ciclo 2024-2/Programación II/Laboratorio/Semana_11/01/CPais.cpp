#include "CPais.h"

CPais::CPais(/* args */)
{
}

CPais::CPais(string _nombre, int _poblacion){
    nombre = _nombre;
    poblacion = _poblacion;
}

string CPais::getNombre() { return nombre; }
int CPais::getPoblacion() { return poblacion; }

CPais::~CPais()
{
}