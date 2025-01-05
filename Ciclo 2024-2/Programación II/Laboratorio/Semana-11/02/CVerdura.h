#include <iostream>
#include "CAlimento.h"
using namespace std;

class CVerdura:public CAlimento
{
private:
    string nombre;
public:
    CVerdura(/* args */);
    CVerdura(string _nombre, int _cantidad);
    void mostrar();
    ~CVerdura();
};
