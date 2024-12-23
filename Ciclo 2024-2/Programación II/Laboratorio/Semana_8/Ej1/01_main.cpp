#include "CTriangulo.h"
#include <iostream>

using namespace std;

int main(){
    CTriangulo c1;
    c1.setLado1(3);
    c1.setLado2(3);
    c1.setLado3(3);
    cout << c1.area() << endl;
    cout << c1.getlado1() << endl;
    cout << c1.getlado2() << endl;
    cout << c1.getlado3() << endl;

    return 0;
}