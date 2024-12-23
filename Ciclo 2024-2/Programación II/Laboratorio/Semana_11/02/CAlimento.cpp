#include "CAlimento.h"

CAlimento::CAlimento(/* args */)
{
}

CAlimento::CAlimento(int _cantidad){
    cantidad = _cantidad;
}

void CAlimento::mostrar(){
    cout << cantidad << endl;
}

CAlimento::~CAlimento()
{
}