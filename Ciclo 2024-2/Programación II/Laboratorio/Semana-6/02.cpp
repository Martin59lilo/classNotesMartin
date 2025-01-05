#include <iostream>

using namespace std;

const int COLS = 10;
const int ROWS = 8;
char LETTERS[COLS] = {'A','B','C','D','E','F','G','H','I','J'};

void menu(char &opt){
    cout << "MENU" << endl;
    cout << "1. Reporte total por necesidad de resane" << endl;
    cout << "2. Reporte por sector específico" << endl;
    cout << "3. Reporte por Letra/Columna" << endl;
    cout << "4. Salir" << endl;
    cout << "Elija opcion (1-4):";
    cin >> opt;
}

int **create_matrix(){
    int **ppM = new int*[ROWS];
    for (int i = 0; i < COLS; i++)
    {
        ppM[i] = new int[COLS];
    }
    return ppM;
}

void delete_matrix(int **ppM){
    for (int i = 0; i < COLS; i++)
    {
        delete[] ppM[i];
    }
    delete[] ppM;
    ppM = nullptr;
}

void fill_matrix(int **ppM){
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            ppM[i][j] = rand()%400;
        }
    }
}
string get_work(int x){
    if (100 <= x and x <= 199)
    {
        return "1 - Necesidad de resanado";
    }
    if (200 <= x and x <= 299)
    {
        return "2 - Necesidad de pintado";
    }
    if (300 <= x and x <= 399)
    {
        return "3 - Necesidad de arreglo de pasto";
    }
    else
    {
        return "";
    }
}

void report_1(int **ppM){
    int counter = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (100 < ppM[i][j] and ppM[i][j] <= 199)
            {
                counter++;
            }
        }
    }
    cout<<"Total de sectores que necesitan resane: "<< counter << endl;
    
    cout << "Sectores que necesitan resaneado: ";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (100 < ppM[i][j] and ppM[i][j] <= 199)
            {
                cout << LETTERS[j] << (i+1) << ":" << ppM[i][j] << ",";
            }   
        }   
    }
    cout << endl;
}

void report_2(int **ppM){
    char letter;
    int num = 0;
    cout << "Ingrese letra que identifica al sector (A-J): ";
    cin >> letter;
    cout << "Ingrese fila: ";
    cin >> num;

    for (int i = 0; i < COLS; i++)
    {
        if (LETTERS[i] == letter)
        {
            cout << "Este sector contiene: " << ppM[num][i] << endl;
            cout << "El trabajo a realizar es: " << get_work(ppM[num][i]);
            break;
        }       
    }
}

void report_3(int **ppM){
    char letter;
    int number_ind;
    cout << "Sector asociado que analizar: ";
    cin >> letter;
    for (int i = 0; i < COLS; i++)
    {
        if (LETTERS[i] == letter)
        {
            number_ind = i;
            break;
        }
    }
    
    for (int i = 0; i < ROWS; i++)
    {
        cout << "sector " << letter << i << ": " << ppM[i][number_ind];
        cout << get_work(ppM[i][number_ind]) << endl;
    }
}


int main(){
    srand(time(0));
    char opt;
    int **ppM = create_matrix();
    fill_matrix(ppM);

    do
    {
        menu(opt);
        switch (opt)
        {
        case '1':
            report_1(ppM);
            break;
        case '2':
            report_2(ppM);
            break;
        case '3':
            report_3(ppM);
        default:
            break;
        }
    } while (opt != '4');
    return 0;
}