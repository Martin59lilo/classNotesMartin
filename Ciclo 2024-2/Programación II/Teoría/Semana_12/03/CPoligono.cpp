#include "CPoligono.h"

CPoligono::CPoligono(double _lado){
    lado = _lado;
}

CPoligono::CPoligono(/* args */)
{
}

double CPoligono::area(){
    return semiperimetro()*area();
}

double CPoligono::apotema(){

}

double CPoligono::semiperimetro(){

}

CPoligono::~CPoligono()
{
}