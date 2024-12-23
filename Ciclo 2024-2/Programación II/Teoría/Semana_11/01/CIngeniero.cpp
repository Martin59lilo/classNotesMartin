#include "CIngeniero.h"

CIngeniero::CIngeniero()
{
}

CIngeniero::~CIngeniero()
{
    cout << "Objeto ingeniero destruido"<< endl;
}
CIngeniero::CIngeniero(string _nombre, int _edad, string _titulo){
    CPersona(_nombre,_edad);
    titulo = _titulo;
}

string CIngeniero::getTitulo()  { return titulo; }
void CIngeniero::setTitulo( string &titulo_) { titulo = titulo_; }