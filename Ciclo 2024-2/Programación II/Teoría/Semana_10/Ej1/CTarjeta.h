#include <iostream>
using namespace std;

class CTarjeta
{
private:
        string vencimiento;
        string cvv;
public:
    CTarjeta();
    CTarjeta(string _vencimiento, string _cvv);
    string getVencimiento();
    void setVencimiento( string &vencimiento_);
    ~CTarjeta();
};


