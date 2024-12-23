#include <iostream>
#include <cmath>

using namespace std;

int sum_Recursive(int &i, int* p_n){
    if (i == 1)
    {
        return *p_n+6;
    }
    else
    {   
        *p_n += pow(i,3)+5;
        i -= 1;
        return sum_Recursive(i,p_n);
    }
}


int main(){
    int sum = 0;
    int* p_sum = &sum;
    int i  = 0;
    cout << "n: ";
    cin >> i;
    cout << "La suma es: " << sum_Recursive(i,p_sum);
    return 0;
}