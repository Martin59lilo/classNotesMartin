#include <iostream>
#include <vector>

using namespace std;

void generate_random(vector<int> *pV, int n){
    for (int i = 0; i < n; i++)
    {
        (*pV).push_back((rand()%30)+1);
    }
}

void show_Vector(vector<int> *pV){
    for (int i = 0; i < (*pV).size(); i++)
    {
        cout << (*pV)[i] << " ";
    }
}

void delete_mult3(vector<int> *pV){
    for (int i = (*pV).size() - 1; i >= 0; i--)
    {
        if ((*pV)[i]%3 == 0)
        {
            (*pV).erase((*pV).begin()+i);
        }
    }
}

int main(){
    srand(time(0));
    vector<int> V;
    int n = 0;
    cout << "n:";
    cin >> n;
    generate_random(&V,n);
    show_Vector(&V);
    cout << endl;
    delete_mult3(&V);
    show_Vector(&V);
}