#include <iostream>
#include <vector>

using namespace std;

void array_paso_por_valor(int arr[]){
    arr[0] = 2;
}
void array_paso_por_referencia(int* &arr){
    arr[0] = 2;
}

void vector_paso_por_valor(vector<int> v){
    v[0] = 10;
}

void vector_paso_por_referencia(vector<int> &v){
    v[0] = 10;
}



int main(){

    int arr[10] = {0};

    array_paso_por_valor(arr);
    cout << "Array 1: ";
    for (auto elemento:arr) cout << elemento << " ";
    cout << endl;

/*    cout << "Array 2";
    for (auto elemento:arr) cout << elemento << " ";
    cout << endl;
*/
    
    vector <int> a(10);

    // capacity, size, reserve, resize
    a.reserve(100);
    a.resize(20);
    cout << "Capacidad vector: " << a.capacity() << endl;
    cout << "Tamaño vector: " << a.size() << endl;

    // erase, insert, clear NECESITAN DE UN PUNTERO
    a.erase(a.begin()+2);

    //push_back(), emplace_back()
    a.push_back(2);
    a.emplace_back(3); // mas eficiente que push_back()

    //insert() NECESITA DE UN PUNTERO
    a.insert(a.begin()+2,5);

    //clear
    a.clear();

    cout << "Vector: ";
    for (auto elemento:a) cout << elemento << " ";
    cout << endl;
}