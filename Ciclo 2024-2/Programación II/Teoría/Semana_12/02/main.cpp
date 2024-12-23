#include "CMiarreglo.h"

int main(){
    int arr[5] = {1,2,3,4,5};
    CMiarreglo<int> a_i(arr,5);
    cout << "Máximo: " << a_i.maximo();


    return 0;
}