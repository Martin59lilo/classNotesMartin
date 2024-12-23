#include "CHora.h"

CHora::CHora(/* args */)
{
}

CHora::CHora(int _hora, int _minutos){
    hora = _hora;
    minutos = _minutos;
}

void CHora::print(){
    cout << hora << ":" << minutos << endl;
}

CHora::~CHora()
{
}
