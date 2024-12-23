#include <iostream>
#include <iomanip>

using namespace std;

void pedir_Valores(int* temperaturas){
    cout << "Ingrese las temperaturas maxumas registradas durante la semana:" << endl;
    for (int i = 0; i < 7; i++)
    {
        cin >> temperaturas[i];
    }
}

void analizarRiesgoIncendio(int* temperaturas, double n){
    int sum = 0;
    int counter = 0;
    int max_val = temperaturas[0];
    int min_val = temperaturas[0];
    for (int i = 0; i < n; i++)
    {
        sum += temperaturas[i];
        if (temperaturas[i] < min_val)
        {
            min_val = temperaturas[i];
        }
        if (temperaturas[i] > max_val)
        {
            max_val = temperaturas[i];
        }
        if (temperaturas[i] >= 40)
        {
            counter += 1;
        }        
    }
    cout << fixed << setprecision(2);
    cout << "Temperatura promedio: " << sum/n << endl;;
    cout << "Temperatura mas alta: " << max_val << endl;
    cout << "Temperatura mas baja: " << min_val << endl; 
    cout << "Dias con alto riesgo de incendio (>= 40 grados C): " << counter;
}

int main(){
    int temperaturas[7] = {0};
    pedir_Valores(temperaturas);
    analizarRiesgoIncendio(temperaturas, 7.0);
    return 0;
}