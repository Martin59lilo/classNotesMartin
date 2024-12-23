#include "CTarjeta.h"

CTarjeta::CTarjeta(/* args */)
{
    vencimiento = " ";
    cvv = "000";
}

CTarjeta::CTarjeta(string _vencimiento, string _cvv){
    vencimiento = _vencimiento;
    cvv = _cvv;
}

string CTarjeta::getVencimiento()  { return vencimiento; }
void CTarjeta::setVencimiento( string &vencimiento_) { vencimiento = vencimiento_; }

CTarjeta::~CTarjeta()
{
    cout << "Tarjeta destruida" << endl;
}