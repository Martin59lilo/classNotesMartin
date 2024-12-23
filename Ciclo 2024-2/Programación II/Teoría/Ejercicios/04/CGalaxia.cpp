#include "CGalaxia.h"

CGalaxia::CGalaxia::CGalaxia()
{
}

CGalaxia::CGalaxia::CGalaxia(string _nombre)
{
    nombre = _nombre;
    cout << "Se creó la galaxia " << nombre << endl;
}

CGalaxia::CGalaxia::~CGalaxia()
{
    for (auto &&i : estrellas_galaxia)
    {
        delete i;
    }
    cout << "Se destruyó la galaxia " << nombre << endl;
}

void CGalaxia::agregar_estrella(CEstrella* new_estrella){
    estrellas_galaxia.emplace_back(new_estrella);
}

vector<CEstrella*> CGalaxia::estrellasGalaxia()  { return estrellas_galaxia; }
void CGalaxia::setEstrellasGalaxia( vector<CEstrella*> &estrellasGalaxia) { estrellas_galaxia = estrellasGalaxia; }


void CGalaxia::imprimir_galaxia(){
    int counter = 1;
    for (auto &&i : estrellas_galaxia)
    {
        if (i != nullptr)
        {
            cout << "Estrella " << counter <<": Masa = " << i->getMasa() 
            << ", Posición = (" << i->getposX() << ", " 
            << i->getposY() << "), Tipo = " << i->getEstrella() << endl;
        }
        counter ++;
    }
}