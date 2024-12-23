#include "CFecha.h"

CFecha::CFecha(/* args */)
{
}

CFecha::CFecha(int _dia, int _mes, int _anio){
    dia = _dia;
    mes = _mes;
    anio = _anio;
}

void CFecha::print(){
    cout << dia << "/" << mes << "/" << anio << endl;
}

CFecha::~CFecha()
{
}
