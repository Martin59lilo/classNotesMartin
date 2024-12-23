#include "CCliente.h"

CCliente::CCliente()
{
}


CCliente::CCliente(int _cuenta)
{
    cuenta = _cuenta;
}

void CCliente::yapear(CVendedor& vendedor){
    cout << "Cliente yapear al celular " << vendedor.celular << endl;
}

CCliente::~CCliente()
{
}
