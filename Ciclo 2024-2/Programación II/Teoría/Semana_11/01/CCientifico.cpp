#include "CCientifico.h"

CCientifico::CCientifico()
{
    edad = 0;
}

CCientifico::CCientifico(string _nombre, int _edad, string _especialidad){
    CPersona(_nombre,_edad);
    especialidad = _especialidad;
}

CCientifico::~CCientifico()
{
    cout << "Objeto persona destruido"<< endl;
}

string CCientifico::getEspecialidad()  { return especialidad; }
void CCientifico::setEspecialidad( string &especialidad_) { especialidad = especialidad_; }