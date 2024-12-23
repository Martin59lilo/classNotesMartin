#include <iostream>
using namespace std;

class CCurso
{
private:
    string nombre;
    int creditos;
public:
    CCurso();
    CCurso(string _nombre);

    string getNombre();
    void setNombre( string &nombre_);
    
    int getCreditos();
    void setCreditos(int creditos_);
    ~CCurso();
};

