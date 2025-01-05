#include <iostream>
#include <CComplejo.h>

using namespace std;

int main(){
    CComplejo *pC1 = new CComplejo(2,10);
    CComplejo *pC2 = new CComplejo(1,20);
    cout << (*pC1).get_real() << " " << (*pC1).get_imaginario() << endl;
    cout << (*pC2).get_real() << " " << (*pC2).get_imaginario() << endl;
    CComplejo s = (*pC1).suma((*pC2));
    cout << s.get_real() << " " << s.get_imaginario() << endl;
    CComplejo r = (*pC1).diferencia((*pC2));
    cout << r.get_real() << " " << r.get_imaginario() << endl;
    return 0;
}