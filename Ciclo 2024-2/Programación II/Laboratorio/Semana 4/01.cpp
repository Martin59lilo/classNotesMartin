#include <iostream>

using namespace std;

void f3_array(int A[]){
    A[0] = 10;
}

int main(){
    float k = 19;
    cout << "Valor de k: " << k << endl;
    cout << "Dirección de k: " << &k << endl;
    float* ptr_k = &k;
    double* ptr_null = nullptr;
    cout << "Puntero k: "<< *ptr_k << endl;
    cout << "Puntero nulo: " << ptr_null << endl;
    //Referencia
    float& ref_k = k;
    cout << ref_k;
    int array[4] = {1};
    f3_array(array);
    cout << array << endl;
}