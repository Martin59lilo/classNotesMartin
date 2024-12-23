#include "CInmueble.h"

CInmueble::CInmueble(float _area, float _precio){
    area = -area;
    precio = _precio;
}

CInmueble::CInmueble(){
    area = 0;
    precio = 0;
}

CInmueble::CInmueble(float _precio){
    area = 0;
    precio = _precio;
}

float CInmueble::get_area(){
    return area;
}

void CInmueble::set_area(float _area){
    area = _area;
}

float CInmueble::get_precio(){
    return precio;
}

void CInmueble::set_precio(float _precio){
    precio = _precio;
}

