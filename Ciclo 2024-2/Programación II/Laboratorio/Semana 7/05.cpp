#include <iostream>
#include <vector>

using namespace std;


void show_vector(vector<string>* vec_string){
    for (auto &&i : *vec_string)
    {
        cout << i << " ";
    }
    cout << endl;
}

void add_vector(vector<string>* vec_string){
    int n = 0;
    cout << "n: ";
    cin >> n;
    string ent_string;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese palabra: ";
        cin >> ent_string;
        (*vec_string).push_back(ent_string);
    }
    show_vector(vec_string);
}


void delete_2position(vector<string>* vec_string){
    for (int i = (*vec_string).size()-1; i > -1; i--)
    {
        if (i%2 == 0)
        {
            (*vec_string).erase((*vec_string).begin()+i);
        }
    }
    show_vector(vec_string);
}


void find_palindrom(vector<string>* vec_string){
    string max_palin;
    for (auto &&i : *vec_string)
    {
        bool bandera = true;
        for (int j = 0; j < i.size()/2; j++)
        {
            if (i[j] != i[i.size()-j-1])
            {
                bandera = false;
                break;
            }
        }
        if (bandera)
        {
            if (max_palin.size()<i.size())
            {
                max_palin = i;
            }
        }
    }
    cout << "La respuesta sería: "<<max_palin;
}


int main(){
    vector<string> vec_strings;
    add_vector(&vec_strings);
    delete_2position(&vec_strings);
    find_palindrom(&vec_strings);
    return 0;
}