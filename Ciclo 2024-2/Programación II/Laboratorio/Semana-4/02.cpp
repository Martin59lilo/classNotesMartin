#include <iostream>

using namespace std;

void intercambiar(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << "A: " << &a << endl;
    cout << "B: " << &b << endl;
    intercambiar(&a, &b);
    cout << "A: " << &a << endl;
    cout << "B: " << &b << endl;
    return 0;
}