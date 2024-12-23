#include "CPoligono.h"

class CCuadrado:public CPoligono
{
private:
    /* data */
public:
    CCuadrado(/* args */);
    CCuadrado(double _lado):CPoligono(_lado){};
    virtual double apotema()=0;
    virtual double semiperimetro()=0;
    virtual ~CCuadrado();
};

