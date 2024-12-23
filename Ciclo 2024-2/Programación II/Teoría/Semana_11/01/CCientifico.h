#include <iostream>
#include "CPersona.h"
using namespace std;

class CCientifico: public CPersona // Clase derivada
{
private:
    string especialidad;
public:

    CCientifico();
    CCientifico(string _nombre, int _edad, string _especialidad);
    string getEspecialidad();
    void setEspecialidad( string &especialidad_);
    ~CCientifico();
};

