#include <iostream>

using namespace std;

double average(int *p, int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    return sum/(n*1.0);
}

void print_s1(int *p, int n){
    double avg = average(p,n);
    for (int i = 0; i < n; i++)
    {
        if (*(p+i)>avg)
        {
            cout << *(p+i) << " ";
        }   
    }
    cout << endl;
}

void print_s2(int *p, int n){
    int max = p[0];
    for (int i = 1; i < n; i++)
    {
        if (*(p+i)>max)
        {
            max = *(p+i);
        }
    }
    cout << "La mayor nota es: " << max << endl;
}

int generate_random(int min, int max){
    return (rand()%(max-min+1))+min;
}

void fill_Array(int *p, int n){
    for (int i = 0; i < n; i++)
    {
        *(p+i) = generate_random(0,20);
    }
    
}

void print_Array(int *p, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<" ";
    }
    cout << endl;
}

int main(){
    srand(time(0));
    int n = 0;
    do
    {
        cout << "N: ";
        cin >> n;
    } while (n <= 15);
    
    //int A[n] = {0};
    int *A = new int[n];
    fill_Array(A,n);    
    print_Array(A,n);
    print_s1(A, n);
    print_s2(A, n);
    delete []A;

    return 0;
}