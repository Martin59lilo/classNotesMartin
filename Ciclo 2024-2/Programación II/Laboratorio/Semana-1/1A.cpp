#include <iostream>

using namespace std;

int main(){
    float num = 0; 
    cout << "Ingrese un float: ";
    cin >> num;
    cout << "Parte entera: " << int(num);
    cout << endl;
    cout << "Parte fraccionaria: " << num-int(num);
    cout << endl;
    return 0;
}