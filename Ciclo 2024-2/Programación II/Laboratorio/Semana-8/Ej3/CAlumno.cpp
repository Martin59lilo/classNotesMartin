#include "CAlumno.h"
#include <iostream>

string CAlumno::getNombre(){
    return nombre;
}
void CAlumno::setNombre(string _nombre){
    nombre = _nombre;
}
string CAlumno::getApellido(){
    return apellido;
}
void CAlumno::setApellido(string _apellido){
    apellido = _apellido;
}

int CAlumno::getEdad(){
    return edad;
}
void CAlumno::setEdad(int _edad){
    edad = _edad;
}
int CAlumno::getcreditos(){
    return creditos;
}
void CAlumno::setcreditos(int _creditos){
    creditos = _creditos;
}