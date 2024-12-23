#include "CProfesor.h"
#include <iostream>

string CProfesor::getNombre(){
    return nombre;
}
void CProfesor::setNombre(string _nombre){
    nombre = _nombre;
}
string CProfesor::getApellido(){
    return apellido;
}
void CProfesor::setApellido(string _apellido){
    apellido = _apellido;
}

int CProfesor::getEdad(){
    return edad;
}
void CProfesor::setEdad(int _edad){
    edad = _edad;
}
int CProfesor::gethoras_dictados(){
    return horas_dictados;
}
void CProfesor::sethoras_dictados(int _horas_dictados){
    horas_dictados = _horas_dictados;
}