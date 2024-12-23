#include "CVendedor.h"
#include "CCliente.h"

void cambiar_celular(CVendedor& vendedor, int _celular){
    vendedor.celular = _celular;
}


int main(){
    CVendedor A(964651985);
    CCliente B;
    B.yapear(A);
    cambiar_celular(A,915243656);
    B.yapear(A);
    return 0;
}