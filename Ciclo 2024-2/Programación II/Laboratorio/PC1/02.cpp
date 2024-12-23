#include <iostream>
#include <cmath>

using namespace std;

void pedir_Valores(int &n_meses, float &fact_crec){
    cout << "Ingrese el numero de meses: ";
    cin >> n_meses;
    cout << "Ingrese el factor de crecimiento mensual (mayor que 1): ";
    cin >> fact_crec;
}

float form_inversion(int &n_meses, float fact_crec, float &result){
    if (n_meses == 1)
    {
        return result+3000;
    }
    result += (3000*pow(fact_crec,n_meses-1));
    n_meses -= 1;
    return form_inversion(n_meses,fact_crec,result);
}

int main(){
    int n_meses = 0;
    float fact_crec = 0;
    float result = 0;
    pedir_Valores(n_meses,fact_crec);
    cout << "Suma total de la inversion despues de 3 meses: "<< form_inversion(n_meses,fact_crec, result);
    return 0;
}