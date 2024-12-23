#include <iostream>
using namespace std;

class CPais
{
private:
    string nombre;
    int poblacion;
public:
    CPais();
    CPais(string _nombre, int _poblacion);
    string getNombre();
    int getPoblacion();
    ~CPais();

};


