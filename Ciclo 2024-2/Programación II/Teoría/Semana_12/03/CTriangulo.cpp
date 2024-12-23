#include "CTriangulo.h"
#include "cmath"

CTriangulo::CTriangulo(/* args */)
{
}

CTriangulo::CTriangulo(double _lado){
    CPoligono(_lado);
}

double CTriangulo::apotema(){
    return lado*sqrt(3)/6.0;
}

double CTriangulo::semiperimetro(){
    return 3.0*lado/2.0;
}

CTriangulo::~CTriangulo()
{
}
