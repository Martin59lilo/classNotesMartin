#include <iostream>
#include "CVendedor.h"
using namespace std;

class CCliente
{
private:
    int cuenta;
public:
    CCliente();
    CCliente(int _cuenta);
    void yapear(CVendedor& vendedor);
    ~CCliente();
};

