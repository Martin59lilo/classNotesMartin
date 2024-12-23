#include "CMedicamento.h"

CMedicamento::CMedicamento(/* args */)
{
}

CMedicamento::CMedicamento(string _nombre, int _cantidad){
    nombre = _nombre;
    cantidad = _cantidad;
}

CMedicamento::~CMedicamento()
{
}

string CMedicamento::getNombre()  { return nombre; }
void CMedicamento::setNombre( string &nombre_) { nombre = nombre_; }
int CMedicamento::getDosis()  { return cantidad; }
void CMedicamento::setDosis(double dosis_) { cantidad = dosis_; }