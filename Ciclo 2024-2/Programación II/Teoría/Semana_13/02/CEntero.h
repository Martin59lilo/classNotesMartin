#include <iostream>
using namespace std;


class CEntero
{
private:
    int dato;
public:
    CEntero(/* args */);
    CEntero(int _dato);
friend CEntero operator+(CEntero A, CEntero B);

    ~CEntero();
};

