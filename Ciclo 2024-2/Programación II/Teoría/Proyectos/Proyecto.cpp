#include <iostream>
#include <iomanip>
#include <vector>
#include "CalculosPrincipales.h"
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    int opcion=-1; vector<float> CantPrendas(4, 0);

    cout <<"BIENVENIDO A PEDIDOS MMC" << endl;
    while (opcion!=0) {
        mostrarMenu(opcion, CantPrendas);}

    return 0;}