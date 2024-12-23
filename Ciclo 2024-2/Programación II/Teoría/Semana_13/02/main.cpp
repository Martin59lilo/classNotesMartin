#include "CEntero.h"

CEntero operator+(CEntero A, CEntero B){
    return CEntero(A.dato+B.dato);
}

int main(){
    int a = 10;
    int b = 40;
    int c;
    c = a+b;
    cout << a << " + " << b << " = " <<  c << endl;
    CEntero A(10);
    CEntero B(40);
    CEntero C;
    C = A+B;


    return 0;
}