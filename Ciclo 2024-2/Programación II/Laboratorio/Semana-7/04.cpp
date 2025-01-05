#include <iostream>
#include <vector>

using namespace std;

void generar_vector_random(vector<int> &vec, int n){
    for (int i = 0; i < n; i++)
    {
        vec.push_back(rand()%100);
    }
}

void show_vector(vector<int> &vec){
    for (auto &&i : vec)
    {
        cout << i << " ";
    }
    
}

float average_vector(vector<int> &vec){
    int sum = 0;
    for (auto &&i : vec)
    {
        sum += i;
    }
    return sum/(vec.size()*1.0);
}

int sum_less70(vector<int> &vec){
    int sum = 0;
    for (auto &&i : vec)
    {
        if (i < 70)
        {
            sum += i;
        }
    }
    return sum;
}

vector<float> new_vect(vector<int> &vec){
    float a = average_vector(vec);
    vector<float> new_vect;
    for (auto &&i : vec)
    {
        new_vect.push_back(i-a);
    }
    return new_vect;
}


int main(){
    int n = 0;
    vector<int> vec;
    cout << "n: ";
    cin >> n;
    generar_vector_random(vec,n);
    show_vector(vec);
    cout << average_vector(vec) << endl;
    cout << sum_less70(vec) << endl;

    return 0;
}