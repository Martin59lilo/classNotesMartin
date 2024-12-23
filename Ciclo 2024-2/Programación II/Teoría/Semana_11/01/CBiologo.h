#include <iostream>
#include "CPersona.h"
class CBiologo
{
private:
    string especializacion;
public:
    CBiologo();
    CBiologo(string _nombre, int _edad, string _especializacion);
    string getEspecializacion();
    void setEspecializacion( string &especializacion_);
    ~CBiologo();
};


