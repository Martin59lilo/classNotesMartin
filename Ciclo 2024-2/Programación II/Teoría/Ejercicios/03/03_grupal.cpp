// Elaborado por Martin Jesus Bonilla Sarmiento
// Elaborado por Carlos Daniel Izaguirre Zavaleta

/*JUSTIFICACIÓN GRUPO DE 2 INTEGRANTES:
Somos 2 integrantes ya que el 3er integrante del grupo se cambió de grupo faltando poco tiempo
para la entrega del ejercicio grupal. No pudimos hallar un reemplazo para el 3er integrante por
el tiempo. Mil disculpas por el inconveniente.
*/


#include <iostream>
#include <iomanip> // Para manipulación de la salida con setw y precision

using namespace std;

const int ROWS = 2; // son las filas de la matriz (fila 1: índices ratones, fila 2: pesos ratones)
const int COLS = 10; // son las columnas de la matriz (representa el número de ratones)

float ** assign_memory(){
    float **matrix = new float*[ROWS]; // Se reserva memoria para las filas
    for (int i = 0; i < ROWS; i++)  
    {
        matrix[i] = new float[COLS]; // Se reserva memoria para las columnas
    }

    //INICIALIZACIÓN DE LA MATRIZ
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i == 0) // Primera fila almacena los índices de los ratones
            {
                matrix[i][j] = (j)/1.0;
            }
            else // Segunda fila almacena los pesos de los ratones, inicialmente 0.5
            {
                matrix[i][j] = 0.5;
            }
        }
    }
    return matrix; // Se retorna el puntero doble (matriz)
}

void print_matrix_values(float** matrix, int days){
    cout.precision(2);
        cout << fixed;
        for (int i = 0; i < COLS; i++)
        {
            if(i == 0)cout << setw(3) << days;
            cout << setw(7)<< matrix[1][i]; 
        }
        cout << endl;
}

void food_water_distribution(float* &cant_food, float* &cant_water, float** &matrix){
    int days = 0;

    //Imprimir encabezado con los días
    cout<<setw(3)<< "Dia";
    for (int i=0; i < COLS; i++)
    {
        cout <<setw(7)<<(i+1);
    }
    cout << endl;

    //Bucle hasta que la comida o el agua se agoten
    while (*cant_food > 0 and *cant_water > 0) {
        days += 1;

        //Impresión de pesos con el nro de dia
        print_matrix_values(matrix, days);

        // selección de ratón 1
        int raton_select_1 = rand() % 10;
        float val = (5.0 / 100.0) * (matrix[1][raton_select_1]);
        // reducción comida (5% peso ratón)
        *cant_food -= val;
        // aumenta peso (5% peso ratón)
        matrix[1][raton_select_1] += val;

        val = (10.0 / 100.0) * (matrix[1][raton_select_1]);
        // reducción agua (10% peso ratón)
        *cant_water -= val;
        // aumenta peso (10 % peso ratón)
        matrix[1][raton_select_1] += val;

        // selección de ratón 2
        int raton_select_2 = rand() % 10;
        val = (3.0 / 100.0) * (matrix[1][raton_select_2]);
        // reducción comida (3% peso ratón)
        *cant_food -= val;
        // aumenta peso (3% peso ratón)
        matrix[1][raton_select_2] += val;

        val = (6.0 / 100.0) * (matrix[1][raton_select_2]);
        // reducción agua (6% peso ratón)
        *cant_water -= val;
        // aumenta peso (6% peso ratón)
        matrix[1][raton_select_2] += val;

        // reducción peso en 2% a todos los ratones
        for (int i = 0; i < COLS; i++)
        {
            matrix[1][i] -= matrix[1][i]*(2.0/100.0);
        }

    }
    
    cout << endl << "Número de días que se acaba la comida o agua: "<< days << endl;
}

int main(){
    srand(time(0)); // Inicializa la semilla para la generación de números aleatorios

    // Se crean punteros para los pesos y las cantidades de comida y agua
    float* cant_food = new float(10); // Cantidad inicial de comida
    float* cant_water = new float(10); // Cantidad inicial de agua
    float** matrix = assign_memory(); // Asigna memoria a la matriz

    food_water_distribution(cant_food,cant_water,matrix);

    // Libera la memoria asignada para los punteros
    delete cant_food;
    delete cant_water;  
    for (int i = 0; i < ROWS; i++) {
        delete[] matrix[i]; // Liberar cada fila de la matriz
    }
    delete []matrix;
    return 0; // Fin del programa
}

/*
COMENTARIO IMPORTANTE ###################################
La función que imprime los pesos de los ratones cada día lo tomamos como un método para
validar que se manejen correctamente nuestros resultados de los pesos luego de aplicar
los aumentos de pesos de los ratones. En términos de eficiencia sabemos que no es óptimo
el realizar ésta operación pero por la buena interpretación de los resultados es necesario.
*/