#include <cmath>
#include "CTriangulo.h"

float CTriangulo::area(){
    double sp = semiperimetro();
    return sqrt(sp*(sp-lado1)*(sp-lado2)*(sp-lado3));
}

float CTriangulo::semiperimetro(){
    return (lado1+lado2+lado3)/2.0;
}

float CTriangulo::perimetro(){
    return semiperimetro()*2;
}

float CTriangulo::getlado1(){
    return lado1;
}
float CTriangulo::getlado2(){
    return lado2;
}
float CTriangulo::getlado3(){
    return lado3;
}

void CTriangulo::setLado1(int _lado1){
    lado1 = _lado1;
}
void CTriangulo::setLado2(int _lado2){
    lado2 = _lado2;
}
void CTriangulo::setLado3(int _lado3){
    lado3 = _lado3;
}