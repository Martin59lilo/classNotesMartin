#include <iostream>
using namespace std;

class CVendedor
{
private:
    int celular;
public:
    CVendedor(int _celular);
friend class CCliente;
friend void cambiar_celular(CVendedor&, int);
    ~CVendedor();
};

