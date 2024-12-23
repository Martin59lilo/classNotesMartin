#ifndef CMEDICAMENTO_H
#define CMEDICAMENTO_H

#include <iostream>
using namespace std;

class CMedicamento
{
private:
    string nombre;
    int cantidad;
public:
    CMedicamento(/* args */);
    CMedicamento(string _nombre, int _cantidad);
    ~CMedicamento();
    int getDosis();
    void setDosis(double dosis_);
    string getNombre();
    void setNombre( string &nombre_);


};

#endif