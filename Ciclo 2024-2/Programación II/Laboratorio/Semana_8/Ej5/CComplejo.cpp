#include "CComplejo.h"

CComplejo::CComplejo(){
    real = 0;
    imaginario = 0;
}

CComplejo::CComplejo(int _real, int _imaginario){
    real = _real;
    imaginario = _imaginario;
}

CComplejo::~CComplejo(){
    delete this->p;
}

int CComplejo::get_real(){
    return real;
}

void CComplejo::set_real(int _real){
    real = _real;
}

int CComplejo::get_imaginario(){
    return imaginario;
}

void CComplejo::set_imaginario(int _imaginario){
    imaginario = _imaginario;
}

CComplejo* CComplejo::suma(CComplejo *otro){
    int r = this->get_real() +otro->get_real();
    int i = this->get_imaginario() +otro->get_imaginario();
    CComplejo *s = new CComplejo(r,i);
    return s;
}
CComplejo* CComplejo::diferencia(CComplejo *otro){
    int r = this->get_real() - otro->get_real();
    int i = this->get_imaginario() - otro->get_imaginario();
    CComplejo *s = new CComplejo(r,i);
    return s;
}