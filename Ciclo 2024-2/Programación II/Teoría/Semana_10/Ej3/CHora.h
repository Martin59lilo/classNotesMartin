#include <iostream>
using namespace std;

class CHora
{
private:
    int hora;
    int minutos;
public:
    CHora(/* args */);
    CHora(int _hora, int _minutos);
    void print();
    ~CHora();
};

