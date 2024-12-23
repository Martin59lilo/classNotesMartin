#include "CContinente.h"

CContinente::CContinente(/* args */)
{
}

CContinente::CContinente(string _nombre)
{
    nombre = _nombre;
}

void CContinente::agregar_pais(CPais pais_agregar){
    paises.push_back(pais_agregar);
}

void CContinente::remover_pais(string _nombre){
    for (int i = 0; i < paises.size(); i++)
    {
        if (paises[i].getNombre() == _nombre)
        {
            paises.erase(paises.begin()+i);
        }
    }    
}

void CContinente::imprimir_paises(){
    cout << nombre << ":" << endl;
    for (auto &&i : paises)
    {
        cout << i.getNombre() << " con " << i.getPoblacion() << " de habitantes" << endl;
    }
}


CContinente::~CContinente()
{
}
