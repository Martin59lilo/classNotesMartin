#include <CTarjeta.h>
#include <CPersona.h>

int main(){
    CPersona* A = new CPersona("Jorge", 30);
    CTarjeta* T = new CTarjeta("31/12/24","647");
    (*A).asociar_tarjeta(T);
    cout << (*A).getNombre() << " usa una tarjeta con vencimiento " << (*A).get_v_tarjeta() << endl;
    (*A).renovar_tarjeta("31/12/2026");
    cout << (*A).getNombre() << " usa una tarjeta con nuevo vencimiento " << (*A).get_v_tarjeta() << endl;
    delete T;
    delete A;
}