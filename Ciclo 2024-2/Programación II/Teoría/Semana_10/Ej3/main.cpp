#include "CEvento.h"
#include "CHora.h"
#include "CFecha.h"

int main(){
    CEvento* A = new CEvento("OpenDay",9,0,9,11,2024);
    (*A).imprimir();

    delete A;


    return 0;
}