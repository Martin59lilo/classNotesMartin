#include "CVerdura.h"

CVerdura::CVerdura(/* args */)
{
}

CVerdura::CVerdura(string _nombre, int _cantidad): CAlimento(_cantidad){
    nombre = _nombre;
}

void CVerdura::mostrar(){
    cout << nombre << endl;
}

CVerdura::~CVerdura()
{
}