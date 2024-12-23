#include <iostream>

using namespace std;

void pedirValores(int &estudiantes, int &materias, int** matrix){
    cout << "N de estudiantes: ";
    cin >> estudiantes;
    cout << "N de materias: ";
    cin >> materias;
    for (int i = 0; i < estudiantes; i++)
    {
        matrix[i] = new int[materias];
    }
    for (int i = 0; i < estudiantes; i++)
    {
        cout << "Calificaciones del estudiante " << i+1 << ":";
        for (int j = 0; j < materias; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void imprimirPromedios(int estudiantes, int materias, int** matrix){
    for (int i = 0; i < estudiantes; i++)
    {
        cout << "Promedio del estudiante " << i+1 << ": ";
        double sum = 0;
        for (int j = 0; j < materias; j++)
        {
            sum += matrix[i][j];
        }
        cout << sum/(materias*1.0) << endl;
    }
}

int main(){
    int estudiantes = 0;
    int materias = 0;
    int** matrix = new int*[estudiantes];
    pedirValores(estudiantes,materias,matrix);
    imprimirPromedios(estudiantes,materias,matrix);
    delete matrix;
    return 0;
}