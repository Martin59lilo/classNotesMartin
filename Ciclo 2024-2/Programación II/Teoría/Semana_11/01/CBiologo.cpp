#include "CBiologo.h"

CBiologo::CBiologo()
{
}

CBiologo::~CBiologo()
{
    cout << "Objeto biologo destruido"<< endl;

}

CBiologo::CBiologo(string _nombre, int _edad, string _especializacion){
    CPersona(_nombre,_edad);
    especializacion = _especializacion;
}

string CBiologo::getEspecializacion()  { return especializacion; }
void CBiologo::setEspecializacion( string &especializacion_) { especializacion = especializacion_; }