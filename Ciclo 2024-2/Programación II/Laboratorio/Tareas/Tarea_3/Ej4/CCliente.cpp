#include "CCliente.h"

CCliente::CCliente(string _nombre, string _apellidos, int _edad){
    nombre = _nombre;
    apellidos = _apellidos;
    edad = _edad;
}
CCliente::~CCliente(){

}

string CCliente::getNombre()  { return nombre; }
void CCliente::setNombre( string &nombre_) { nombre = nombre_; }

string CCliente::getApellidos()  { return apellidos; }
void CCliente::setApellidos( string &apellidos_) { apellidos = apellidos_; }

int CCliente::getEdad()  { return edad; }
void CCliente::setEdad(int edad_) { edad = edad_; }

double CCliente::getComprasTotales()  { return compras_totales; }
void CCliente::setComprasTotales(double comprasTotales) { compras_totales = comprasTotales; }