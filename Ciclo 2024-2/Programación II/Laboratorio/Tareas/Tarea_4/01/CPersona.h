#ifndef CPERSONA_H
#define CPERSONA_H

#include <iostream>
using namespace std;

class CPersona
{
private:
    string nombre;
    string apellidos;
    int edad;
public:
    CPersona(/* args */);
    CPersona(string _nombre, string _apellidos, int _edad);
    virtual void imprimirdatos();
    virtual ~CPersona();
    string getNombre();
    void setNombre( string &nombre_);
    string getApellidos();
    void setApellidos( string &apellidos_);
    int getEdad();
    void setEdad(int edad_);

};


#endif