#include <iostream>
#include <vector>

using namespace std;

void imprimir_vector(vector<int> &v_1){
    for(auto elemento: v_1) cout << elemento << " ";
    cout << endl;
}


int main(){
    vector<int> v_1;

    for (int i = 0; i < 10; i++)
    {
        //v_1.push_back(i);
        v_1.emplace_back(i);
    }

    imprimir_vector(v_1);

    v_1.clear();

    
    return 0;
}