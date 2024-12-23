#include <iostream>
using namespace std;

class CFecha
{
private:
    int dia;
    int mes;
    int anio;
public:
    CFecha();
    CFecha(int _dia, int _mes, int _anio);
    void print();
    ~CFecha();
};

