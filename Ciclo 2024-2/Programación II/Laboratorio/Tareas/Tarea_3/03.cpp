#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_menu(int &opcion_){
    cout << "Menú:" << endl;
    cout << "1. Mostrar lista de libros" << endl;
    cout << "2. Anadir libro" << endl;
    cout << "3. Borrar libro" << endl;
    cout << "4. Buscar libro" << endl;
    cout << "5. Ordenar libros" << endl;
    cout << "6. Salir" << endl;
    cout << "Opcion: ";cin >> opcion_;
}

void show_books(vector<string>* libros){
    for (auto &&i : *libros)
    {
        cout << i << ", ";
    }
    cout << endl;
}

void add_book_gender(vector<string>* &libros, vector<string>* &generos){
    cout << "Nombre del nuevo libro: ";
    string libro_add = "";
    getline(cin, libro_add);
    cout << "Genero del nuevo libro: ";
    string gender_add = "";
    getline(cin, gender_add);
    (*libros).emplace_back(libro_add);
    (*generos).emplace_back(gender_add);
}

void delete_book_gender(vector<string>* &libros, vector<string>* &generos){
    cout << "Nombre del libro a borrar: ";
    string libro_borrar = "";
    cin.ignore();
    getline(cin, libro_borrar);
    int iter = 0;
    for (auto &&i : *libros)
    {
        if (i == libro_borrar)
        {
            
            (*libros).erase((*libros).begin()+iter);
            (*generos).erase((*generos).begin()+iter);
            break;
        }
        iter += 1;
    }
}

void search_book(vector<string>* libros, vector<string>* generos){
    cout << "Nombre del libro a buscar: ";
    string libro_search = "";
    cin.ignore();
    getline(cin, libro_search);
    int iter = 0;
    for (auto &&i : *libros)
    {
        if (i == libro_search)
        {
            cout << "Libro: " << i << ", Genero: " << (*generos)[iter] << endl;
            break;
        }
        iter += 1;
    }    
}

void order_books(vector<string>* libros, vector<string>* generos){
    vector<pair<string, string>> libros_generos;
    for (int i = 0; i < libros->size(); i++)
    {
        libros_generos.emplace_back((*libros)[i], (*generos)[i]);
    }

    sort(libros_generos.begin(), libros_generos.end());
    
    for (int i = 0; i < libros_generos.size(); i++)
    {
        (*libros)[i] = libros_generos[i].first;
        (*generos)[i] = libros_generos[i].second;
    }
    
}

int main(){
    vector<string>* libros = new vector<string>;
    vector<string>* generos = new vector<string>;
    int opcion = 0;
    do
    {
        print_menu(opcion);
        switch (opcion)
        {
            case 1:
                show_books(libros);
                break;
            case 2:
                add_book_gender(libros, generos);
                break;
            case 3:
                delete_book_gender(libros, generos);
                break;
            case 4:
                search_book(libros, generos);
                break;
            case 5:
                order_books(libros, generos);
                break;
            case 6:
                cout << "Saliendo del programa" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl; 
            } 
    } while (opcion != 6);

    delete libros;
    delete generos;

    return 0;
}