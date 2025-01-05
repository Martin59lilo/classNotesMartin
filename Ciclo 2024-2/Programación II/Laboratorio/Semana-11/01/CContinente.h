#include "CPais.h"
#include <vector>

class CContinente
{
private:
    string nombre;
    vector<CPais> paises;
public:
    CContinente(/* args */);
    CContinente(string nombre);
    void agregar_pais(CPais pais_agregar);
    void remover_pais(string _nombre);
    void imprimir_paises();
    ~CContinente();
};

