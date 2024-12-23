#include <iostream>

using namespace std;

int ** assign_memory(int rows, int cols){
    int **ppM = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        ppM[i] = new int[cols];
    }
    return ppM;
}

void generate_print(int **ppM, int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; i < cols; j++)
        {
            ppM[i][j] = (rand()%(200-100+1))+100;
        }
        
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << ppM[i][j] << " ";
        }
    }
}

void show_p(int **ppM, int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; i < cols; j++)
        {
            if (ppM[i][j]%2 == 0)
            {
                cout << ppM[i][j]<<" ";
            }
            else
            {
                cout << "0" << " ";
            }
            cout << endl;
        }
    }    
}

void show_i(int **ppM, int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; i < cols; j++)
        {
            if (ppM[i][j]%2 != 0)
            {
                cout << ppM[i][j]<<" ";
            }
            else
            {
                cout << "0" << " ";
            }
            cout << endl;
        }
    }
}

char menu(){
    char opt;
    cout << "MENU" << endl;
    cout << "1. Generar matriz aleatoria" << endl;
    cout << "2. Mostrar solo pares" << endl;
    cout << "3. Mostrar solo impares" << endl;
    cout << "4. Salir" << endl;
    cout << "Elige la opcion [1-4]:";
    cin >> opt;
    return opt;
}

int main(){
    int rows;
    int cols;
    char opt;
    do
    {
        cout << "Ingrese cantidad de filas:";
        cin >> rows;
        cout << "Ingrese cantidad de columans:";
        cin >> cols;
    } while (rows <= 2 and cols <= 2);

    int **ppM = nullptr;
    ppM = assign_memory(rows, cols);
    switch (opt)
    {
    case 1:
        generate_print(ppM, rows, cols);
        break;
    
    case 2:
        show_p(ppM, rows, cols);
        break;
    
    case 3:
        show_p(ppM, rows, cols);
        break;
    
    default:
        break;
    }

    
}
