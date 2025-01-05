#include "CVerdura.h"

int main(){
    CVerdura v1("x",15);
    CVerdura v2("y",17);

    v1.mostrar();
    v2.mostrar();

    CAlimento(v1).mostrar();

    return 0;
}