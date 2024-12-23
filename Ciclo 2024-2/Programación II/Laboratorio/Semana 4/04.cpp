#include <iostream>

using namespace std;

int fib_recursiva(int n){
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib_recursiva(n-1) + fib_recursiva(n-2);
}

int fib_recursiva_memory(int n, int M[]){
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (M[n] == -1)
    {
        M[n] = fib_recursiva(n-1)+fib_recursiva(n-2);
    }else
    {
        return M[n];
    }
    
    
}

int main(){
    int n = 0;
    cin >> n;
    int Memory[n] = {0};
    
    return 0;
}