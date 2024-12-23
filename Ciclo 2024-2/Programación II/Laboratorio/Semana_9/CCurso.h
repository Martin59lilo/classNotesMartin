#include <iostream>
using namespace std;

class CCurso
{
private:
    string nombre;
    string carrera;
    int creditos;
public:
    CCurso(string _nombre, string _carrera, int _creditos);
    CCurso(string _nombre, int _creditos);
    string getNombre();
    void setNombre(string &nombre_);
    string getCarrera();
    void setCarrera(string &carrera_);
    int getCreditos();
    void setCreditos(int creditos_);
    

};