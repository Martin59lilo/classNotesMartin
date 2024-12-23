#include "CContinente.h"

int main(){
    CContinente c1("America");
    c1.agregar_pais(CPais("Peru", 34));
    c1.agregar_pais(CPais("Brazil", 216));
    c1.agregar_pais(CPais("Colombia", 60));
    c1.imprimir_paises();
    c1.remover_pais("Peru");
    cout << endl;
    c1.imprimir_paises();
    return 0;
}