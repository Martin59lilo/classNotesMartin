#include "CPoligono.h"
class CTriangulo:public CPoligono
{
private:
    /* data */
public:
    CTriangulo(/* args */);
    CTriangulo(double _lado);
    double apotema();
    double semiperimetro();
    virtual ~CTriangulo();
};

