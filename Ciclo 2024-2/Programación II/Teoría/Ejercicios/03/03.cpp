//ELABORADO POR BONILLA SARMIENTO MARTIN JESÚS

//USO DE CHATGPT: ELABORACIÓN COMENTARIOS LÍNEAS (25-59) PARA MEJOR ENTENDIMIENTO DEL PROGRAMA
//VERIFICADO POR EL ESTUDIANTE QUE LOS COMENTARIOS CORRESPONDEN A CADA LÍNEA DE CÓDIGO
#include <iostream>

using namespace std;

char probability_food(){
    int a = rand()%10;
    if (a == 0 or a == 1 or a == 2)
    {
        return 'M';
    }
    else
    {
        return 'T';
    }
}

void funcion(double* &cant_food, double* &cant_water, double* &peso_Mickey, double* &peso_Timothy){
    while (*cant_food > 0 and *cant_water > 0) {
        // Determina a quién se le dará la comida
        if (probability_food() == 'M') {
            // COMIDA PARA MICKEY
            double val = (5.0 / 100.0) * (*peso_Mickey); // 5% del peso de Mickey para comida
            *cant_food -= val; // Reduce la cantidad de comida disponible
            *peso_Mickey += val; // Aumenta el peso de Mickey

            val = (10.0 / 100.0) * (*peso_Mickey); // 10% del nuevo peso de Mickey para agua
            *cant_water -= val; // Reduce la cantidad de agua disponible
            *peso_Mickey += val; // Aumenta el peso de Mickey con el agua

            // COMIDA PARA TIMOTHY
            val = (3.0 / 100.0) * (*peso_Timothy); // 3% del peso de Timothy para comida
            *cant_food -= val; // Reduce la cantidad de comida disponible
            *peso_Timothy += val; // Aumenta el peso de Timothy

            val = (6.0 / 100.0) * (*peso_Timothy); // 6% del nuevo peso de Timothy para agua
            *cant_water -= val; // Reduce la cantidad de agua disponible
            *peso_Timothy += val; // Aumenta el peso de Timothy con el agua
            
        } else {
            // COMIDA PARA TIMOTHY
            double val = (5.0 / 100.0) * (*peso_Timothy); // 5% del peso de Timothy para comida
            *cant_food -= val; // Reduce la cantidad de comida disponible
            *peso_Timothy += val; // Aumenta el peso de Timothy

            val = (10.0 / 100.0) * (*peso_Timothy); // 10% del nuevo peso de Timothy para agua
            *cant_water -= val; // Reduce la cantidad de agua disponible
            *peso_Timothy += val; // Aumenta el peso de Timothy con el agua

            // COMIDA PARA MICKEY
            val = (3.0 / 100.0) * (*peso_Mickey); // 3% del peso de Mickey para comida
            *cant_food -= val; // Reduce la cantidad de comida disponible
            *peso_Mickey += val; // Aumenta el peso de Mickey

            val = (6.0 / 100.0) * (*peso_Mickey); // 6% del nuevo peso de Mickey para agua
            *cant_water -= val; // Reduce la cantidad de agua disponible
            *peso_Mickey += val; // Aumenta el peso de Mickey con el agua
        }

        // PÉRDIDA DE PESO DEL 10% PARA AMBOS
        *peso_Mickey -= *peso_Mickey * (10.0 / 100.0); // Reduce el peso de Mickey en un 10%
        *peso_Timothy -= *peso_Timothy * (10.0 / 100.0); // Reduce el peso de Timothy en un 10%
    }

    cout << "Peso Mickey: "<< *peso_Mickey << endl;
    cout << "Peso Timothy: "<< *peso_Timothy << endl;
}


int main(){
    srand(time(0)); // Inicializa la semilla para la generación de números aleatorios

    // Se crean punteros para los pesos y las cantidades de comida y agua
    double* peso_Mickey = new double(0.5); // Peso inicial de Mickey
    double* peso_Timothy = new double(0.5); // Peso inicial de Timothy
    double* cant_food = new double(10); // Cantidad inicial de comida
    double* cant_water = new double(10); // Cantidad inicial de agua

    funcion(cant_food,cant_water,peso_Mickey,peso_Timothy);

    // Libera la memoria asignada para los punteros
    delete peso_Mickey;
    delete peso_Timothy;
    delete cant_food;
    delete cant_water;

    return 0; // Fin del programa
}

/*

Pasar por referencia: En la funcion "funcion()"", paso los punteros
por referencia, lo que evita copias innecesarias de datos grandes y ahorra
memoria, haciendo que la función sea más eficiente. Así mismo el uso
de punteros lleva a un siguiente nivel en eficiencia el código por el
poco uso de memoria.

Uso de while en vez de recursión: Otra forma de solución es la forma
recursiva pero debido a las grandes iteraciones que podemos llegar podría
surgir una sobrecarga de pila así que el uso de un bucle es más eficiente.

*/