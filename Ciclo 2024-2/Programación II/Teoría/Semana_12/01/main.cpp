#include <iostream>

using namespace std;

template <typename T>

void intercambio(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 20, y = 1;
    double w = 20, z = 1;
    cout << "x: " << x << ", y: " << y << endl;
    intercambio<int>(x,y);
    cout << "x: " << x << ", y: " << y << endl;

    cout << "w: " << w << ", z: " << z << endl;
    intercambio<double>(w,z);
    cout << "w: " << w << ", z: " << z << endl;
    
    return 0;
}