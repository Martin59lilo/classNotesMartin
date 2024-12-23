#include <iostream>
#include "CPersona.h"
using namespace std;

class CIngeniero
{
private:
    string titulo;
public:
    CIngeniero();
    CIngeniero(string _nombre, int _edad, string _titulo);
    string getTitulo();
    void setTitulo( string &titulo_);
    ~CIngeniero();
};
