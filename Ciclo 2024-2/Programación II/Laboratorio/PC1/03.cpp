#include <iostream>

using namespace std;

void pedir_Valores(int A[]){
    for (int i = 0; i < 7; i++)
    {
        int a = 0;
        cin >> a;
        A[i] = a;
    }
}

float promedio_sem(int A[]){
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += A[i];
    }
    return sum/7.0;
}

int mej_cal(int A[]){
    int best = 0;
    for (int i = 0; i < 7; i++)
    {
        if (best < A[i])
        {
            best = A[i];
        }
    }
    return best;
}

int peor_cal(int A[]){
    int peor = A[0];
    for (int i = 1; i < 7; i++)
    {
        if (peor > A[i])
        {
            peor = A[i];
        }
    }
    return peor;
}

int num_dias(int A[]){
    int num_dias = 0;
    for (int i = 0; i < 7; i++)
    {
        if (A[i] > 300)
        {
            num_dias += 1;
        }
    }
    return num_dias;
}

int main(){
    int A[7] = {0};
    cout << "Ingrese las temperaturas maximas registardas durante la semana:" << endl;
    pedir_Valores(A);
    cout << "Promedio semanal del indice de calidad: " << promedio_sem(A);
    cout << "Mejor calidad del aire (minima): " << mej_cal(A);
    cout << "Peor calidad del aire (maxima): " << peor_cal(A);
    cout << "Dias con índice crítico (>300): " << num_dias(A);
    return 0;
}