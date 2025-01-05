#include <iostream>

using namespace std;

int generate_random(int min, int max){
    return rand()%(max-min+1)+min;
}

void print_Array(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << A[i] <<" ";
    }
}

int main(){
    srand(time(0));
    int a = 0;
    int mult_5 = 0, mult_7 = 0;
    cin >> a;
    int array[a] = {};
    for (int i = 0; i < a; i++)
    {
        array[i] = generate_random(0, 999);
        if (array[i]%5 == 0)
        {
            mult_5 += 1;
        }
        if (array[i]%7 == 0)
        {
            mult_7 += 1;
        }
    }
    int arr_5[mult_5] = {};
    int arr_7[mult_7] = {};
    int i5 = 0, i7 = 0;
    for (int i = 0; i < a; i++)
    {
        if (array[i]%5 == 0)
        {
            arr_5[i] = array[i];
            i5 ++;
        }
        if (array[i]%7 == 0)
        {
            arr_7[i] = array[i];
            i7 ++;
        }
    }
    print_Array(arr_5,i5);
    print_Array(arr_7,i7);
    return 0;
}