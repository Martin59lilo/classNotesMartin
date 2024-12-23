#include <iostream>
#include <vector>
#include "CEstrella.h"

using namespace std;

class CGalaxia
{
private:
    string nombre = "";
    vector<CEstrella*> estrellas_galaxia;
public:
    CGalaxia();
    CGalaxia(string _nombre);
    ~CGalaxia();
    vector<CEstrella*> estrellasGalaxia();
    void setEstrellasGalaxia( vector<CEstrella*> &estrellasGalaxia);
    void agregar_estrella(CEstrella* new_estrella);
    void imprimir_galaxia();
};


