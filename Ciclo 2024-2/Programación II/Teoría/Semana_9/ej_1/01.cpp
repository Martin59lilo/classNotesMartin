#include "01.h"
#include <cmath>
#include <iostream>
using namespace std;

CPunto2D::CPunto2D(){
    coord_x = 0;
    coord_y = 0;
}

CPunto2D::CPunto2D(float _x, float _y){
    coord_x = _x;
    coord_y = _y;
}

CPunto2D::CPunto2D(const CPunto2D& objeto){
    coord_x = objeto.coord_x;
    coord_y = objeto.coord_y;

}

double CPunto2D::distancia(const CPunto2D& objeto){
    double dist = 0;
    dist += pow(objeto.coord_x-coord_x,2);
    dist += pow(objeto.coord_y-coord_y,2);
    return sqrt(dist);
}

void CPunto2D::datos(){
    cout << "(" << coord_x << "," << coord_y << ")" << endl;
}