#include <iostream>
using namespace std;

class CAlimento
{
private:
    int cantidad;
public:
    CAlimento(/* args */);
    CAlimento(int _cantidad);
    void mostrar();
    virtual ~CAlimento();
};