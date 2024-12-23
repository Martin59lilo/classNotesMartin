#include <iostream>
#include <CHora.h>
#include <CFecha.h>

using namespace std;

class CEvento
{
private:
    string nombre;
    CHora hora;
    CFecha fecha;

public:
    CEvento(/* args */);
    CEvento(string _nombre, int _hora, int _minutos, int _dia, int _mes, int _anio);
    void imprimir();
    ~CEvento();
};

