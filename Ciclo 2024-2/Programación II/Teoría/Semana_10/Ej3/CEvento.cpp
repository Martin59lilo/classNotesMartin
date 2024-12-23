#include "CEvento.h"

CEvento::CEvento(/* args */)
{
}

CEvento::CEvento(string _nombre, int _hora, int _minutos, int _dia, int _mes, int _anio){
    nombre = _nombre;
    hora = CHora(_hora, _minutos);
    fecha = CFecha(_dia, _mes, _anio);
}

void CEvento::imprimir(){
    cout << "Evento: " << nombre << endl;
    fecha.print();
    hora.print();
}

CEvento::~CEvento()
{
}
