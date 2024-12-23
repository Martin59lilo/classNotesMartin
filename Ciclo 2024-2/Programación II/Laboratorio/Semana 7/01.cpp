#include <iostream>
#include <vector>

using namespace std;

vector<int> reverse_vector(vector<int> &v){
    vector<int> vect_reverse;
    for (int i = v.size(); i > 0; i--)
    {
        vect_reverse.push_back(i);
    }
}

void print_vector(vector<int> &v){
    for (auto &&i : v)
    {
        cout << i << " ";
    }
}

int main(){
    int n = 0;
    cout << "n: " << endl;
    cin >> n;
    vector<int> V(n,0);
    for (int i = 0; i < V.size(); i++)
    {
        cout << i+1 << ": ";
        cin >> V[i];
    }
    
    print_vector(V);

    cout<<endl;
    vector<int> V_2;
    int j, x;
    do
    {
        cout << j+1 << ":";
        cin >> x;
        if (x!=-1)
        {
            V_2.push_back(x);
            j++;
        }
        
    } while (x!= -1);
    for (int i = 0; i < V_2.size(); i++)
    {
        cout << V_2[i] << " ";
    }
    
    
    return 0;
}