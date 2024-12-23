#include <iostream>
#include <vector>

using namespace std;

int seq_fibonacci(vector<int> &v, int n){
    if (v.size() == n)
    {
        return v[v.size()-1]+v[v.size()-2];
    }
    v.push_back(v[v.size()-2]+v[v.size()-1]);
    seq_fibonacci(v,n);
}

int main(){
    int n = 0;
    vector<int> seq_fib;
    seq_fib.push_back(0);
    seq_fib.push_back(1);
    cout << seq_fibonacci(seq_fib, 5);
    return 0;
}